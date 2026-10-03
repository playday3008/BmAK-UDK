add_library(BmAK_UDK_IngameTest SHARED main.cpp)
target_link_libraries(BmAK_UDK_IngameTest PRIVATE BmAK::UDK)
target_compile_definitions(BmAK_UDK_IngameTest PRIVATE WIN32_LEAN_AND_MEAN NOMINMAX)
set_target_properties(BmAK_UDK_IngameTest PROPERTIES
    OUTPUT_NAME "BmAK-UDK.Test"
    PREFIX ""
    SUFFIX ".asi"
)
