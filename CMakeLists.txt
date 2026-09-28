cmake_minimum_required(VERSION 3.21)

project(BmAK-UDK LANGUAGES CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# ".clangd" reads the compile database from "build/", while every preset builds into a
# subfolder of it. Link the stable path at whichever preset configured last, so clangd
# follows the active one. Visual Studio generators write no database, so they are skipped.
if(CMAKE_GENERATOR MATCHES "Ninja|Makefiles"
   AND CMAKE_BINARY_DIR MATCHES "^${CMAKE_SOURCE_DIR}/build/.")
    file(CREATE_LINK
        "${CMAKE_BINARY_DIR}/compile_commands.json"
        "${CMAKE_SOURCE_DIR}/build/compile_commands.json"
        SYMBOLIC
        RESULT CODERED_LINK_RESULT
    )
    if(NOT CODERED_LINK_RESULT EQUAL 0)
        message(WARNING "Could not link build/compile_commands.json: ${CODERED_LINK_RESULT}")
    endif()
endif()

# The CodeRed-generated Batman: Arkham Knight SDK as a static library.
# Consume it with add_subdirectory() or FetchContent and link BmAK::UDK.
file(GLOB bmak_udk_sources CONFIGURE_DEPENDS
    "${CMAKE_CURRENT_SOURCE_DIR}/src/GameDefines.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/SDK_HEADERS/*.cpp"
)

add_library(BmAK_UDK STATIC ${bmak_udk_sources})
add_library(BmAK::UDK ALIAS BmAK_UDK)

# SYSTEM, so consumers see no warnings or clang-tidy findings from generated code.
target_include_directories(BmAK_UDK SYSTEM PUBLIC
    "${CMAKE_CURRENT_SOURCE_DIR}/src"
)
target_compile_features(BmAK_UDK PUBLIC
    cxx_std_20
)
target_compile_definitions(BmAK_UDK PRIVATE
    WIN32_LEAN_AND_MEAN
    NOMINMAX
)
target_compile_options(BmAK_UDK PRIVATE
    $<IF:$<STREQUAL:${CMAKE_CXX_COMPILER_FRONTEND_VARIANT},MSVC>,/w;/bigobj,-w>
)

# The generated sources are tens of MB; LTO on them only slows every link.
set_target_properties(BmAK_UDK PROPERTIES INTERPROCEDURAL_OPTIMIZATION OFF)
