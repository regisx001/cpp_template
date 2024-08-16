add_library(lib STATIC ${CMAKE_CURRENT_SOURCE_DIR}/Blah.cpp)
target_include_directories(hello PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
