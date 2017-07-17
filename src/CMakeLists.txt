rock_library(rock_library_deps_pkgconfig
    SOURCES Dummy.cpp
    HEADERS Dummy.hpp
    DEPS_PKGCONFIG plain_package)

rock_executable(rock_library_deps_pkgconfig_bin Main.cpp
    DEPS rock_library_deps_pkgconfig)

