# Specify the minimum version of CMake that can run this script
cmake_minimum_required(VERSION 3.12)

# Project name and version
project(cpplazy-ch3 VERSION 1.0)

find_package(PkgConfig REQUIRED)
pkg_check_modules(SDL2 REQUIRED sdl2)
pkg_check_modules(SDL2_TTF REQUIRED SDL2_ttf)
pkg_check_modules(SDL2_MIXER REQUIRED SDL2_mixer)
pkg_check_modules(SDL2_IMAGE REQUIRED SDL2_image)

# Request C++ 20 standard features
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# for Vim ALE
set(CMAKE_EXPORT_COMPILE_COMMANDS True)

FILE(GLOB SSDLSources "${PROJECT_SOURCE_DIR}/../SSDL/src/*.cpp")

# Define targets
set(TLIST numbers divers star)

# iterate through all targets
foreach(T IN ITEMS ${TLIST})
    set(TNAME "${T}")
    add_executable(${TNAME}
        "${CMAKE_CURRENT_SOURCE_DIR}/src/${TNAME}.cpp"
        ${SSDLSources})
    target_include_directories(${TNAME} PUBLIC
        "${PROJECT_SOURCE_DIR}/../SSDL/include"
	${SDL2_INCLUDE_DIRS}
        ${SDL2_TTF_INCLUDEDIR}
        ${SDL2_MIXER_INCLUDEDIR}
        ${SDL2_IMAGE_INCLUDEDIR})
    target_link_libraries(${TNAME} 
        ${SDL2_LIBRARIES} SDL2main.lib
        ${SDL2_TTF_LIBRARIES}
        ${SDL2_MIXER_LIBRARIES}
        ${SDL2_IMAGE_LIBRARIES})
    target_link_directories(${TNAME} PUBLIC
        ${SDL2_LIBRARY_DIRS}
        ${SDL2_TTF_LIBRARY_DIRS}
        ${SDL2_MIXER_LIBRARY_DIRS}
        ${SDL2_IMAGE_LIBRARY_DIRS})
    target_compile_options(${TNAME} PUBLIC
        ${SDL2_CFLAGS_OTHER}
        ${SDL2_TTF_CFLAGS_OTHER}
        ${SDL2_MIXER_CFLAGS_OTHER}
        ${SDL2_IMAGE_CFLAGS_OTHER})
endforeach()

