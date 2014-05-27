rock_library(bus_schremote
    SOURCES Dummy.cpp
    HEADERS Dummy.hpp)

rock_executable(bus_schremote_bin Main.cpp
    DEPS bus_schremote)

