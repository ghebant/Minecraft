cmake_minimum_required(VERSION 3.9)
project(Minecraft)

set(CMAKE_CXX_STANDARD 11)

include_directories(include)

set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE}")

set(SOURCE_FILES src/main.cpp src/Core.cpp src/Cube.cpp src/Map.cpp src/Keyboard.cpp)

add_executable(Minecraft ${SOURCE_FILES})

target_link_libraries (Minecraft
        Irrlicht
        GL
        Xxf86vm
        Xext
        X11
        pthread
        Xcursor)
