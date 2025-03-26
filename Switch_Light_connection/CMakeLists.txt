cmake_minimum_required(VERSION 3.16)

project(Switch_Light_connection LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Switch_Light_connection main.cpp
    Switch.h Switch.cpp
    Light.h Light.cpp
    Wire.h Wire.cpp
    LightSystemManager.h LightSystemManager.cpp)

include(GNUInstallDirs)
install(TARGETS Switch_Light_connection
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
