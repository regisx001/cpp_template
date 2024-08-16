cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(hello VERSION 1.0)

add_executable(hello src/main.cpp)
target_include_directories(hello PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)


# add_library(blah STATIC ${CMAKE_CURRENT_SOURCE_DIR}/lib/Blah.cpp)
# target_include_directories(hello PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/lib/include)
 add_subdirectory(lib)

target_link_libraries(hello PUBLIC lib)

# find_package(glfw3 3.3 REQUIRED)
# target_link_libraries(hello glfw)
# find_package(OpenGL REQUIRED)
# target_link_libraries(hello OpenGL::GL)
