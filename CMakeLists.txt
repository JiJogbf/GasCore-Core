cmake_minimum_required(VERSION 3.16)

set(CXX_STANDARD 17)

aux_source_directory(src/cpp/main/gas CoreMainSrc)
aux_source_directory(src/cpp/main/gas/str CoreMainSrc)
aux_source_directory(src/cpp/main/gas/test CoreMainSrc)
aux_source_directory(src/cpp/main/gas/impl CoreMainSrc)
aux_source_directory(src/cpp/main/gas/impl/win CoreMainSrc)
aux_source_directory(src/cpp/test/gas CoreTestLibSrc)

add_library(Core ${CoreMainSrc})
add_executable(CoreTests src/cpp/test/test.cpp)

target_include_directories(Core PUBLIC src/cpp/main)
target_include_directories(CoreTests PUBLIC src/cpp/test)
target_link_libraries(CoreTests Core)
