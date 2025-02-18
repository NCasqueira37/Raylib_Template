cmake_minimum_required(VERSION 3.15)

# use C++ 20
set(CMAKE_CXX_STANDARD_REQUIRED 20)

project(RaylibProject VERSION 0.1.0 LANGUAGES C CXX)

add_executable(RaylibProject Project/src/main.cpp)

#change to raylib .lib location
target_link_libraries(RaylibProject E:/raylib-5.5_win64_msvc16/lib/raylib.lib winmm.lib)

# change to include directory
target_include_directories(RaylibProject PUBLIC E:/raylib-5.5_win64_msvc16/include)