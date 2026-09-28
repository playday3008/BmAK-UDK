# BmAK-UDK

Batman: Arkham Knight SDK generated with [CodeRed-Generator](https://github.com/playday3008/CodeRed-Generator) (fork, `feat/batman-ak` branch), packaged as a CMake static library.

The generated SDK is identical across the Steam, Epic Games Store and GOG releases. The Epic and GOG builds are themselves identical, so `data/` holds the generator log and name/object dumps for two variants: `Steam` and `EGS - GOG`.

## Usage

Add the repository with `add_subdirectory()` or `FetchContent`, then:

```cmake
target_link_libraries(your_target PRIVATE BmAK::UDK)
```

```cpp
#include <SdkHeaders.hpp>
```

Each package header also compiles on its own, so including only the packages you need works too, e.g. `#include <SDK_HEADERS/BmGame_classes.hpp>`.

## Building

Requires CMake 3.21+ and C++20.

| Preset | Host | Toolchain |
|---|---|---|
| `windows-x64` | Windows | Visual Studio 17 2022 |
| `wine-x64` | Linux | clang-cl + lld-link with MSVC headers and libraries from [msvc-wine](https://github.com/mstorsjo/msvc-wine), expected in `~/.msvc` (override with `MSVC_WINE_ROOT`) |

```sh
cmake --preset wine-x64
cmake --build --preset wine-x64-release
```

## Credits

ItsBranK, TheFeckless, playday3008.
