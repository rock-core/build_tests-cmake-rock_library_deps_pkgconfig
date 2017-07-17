rock_library(rock_library_deps_pkgconfig
    SOURCES Dummy.cpp
    HEADERS Dummy.hpp)

rock_executable(rock_library_deps_pkgconfig_bin Main.cpp
    DEPS rock_library_deps_pkgconfig)

