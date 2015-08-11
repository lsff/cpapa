cmake_minimum_required(VERSION 2.8)
project(struct_union)

add_definitions(-DUNICODE -D_UNICODE)

file(GLOB struct_union_SOURCE src/*.cpp)
file(GLOB struct_union_HEADER src/*.h)
message("${struct_union_SOURCE}")
message("${struct_union_HEADER}")

include_directories(src)

source_group("Source Files" FILES ${struct_union_SOURCE})
source_group("Header Files" FILES ${struct_union_HEADER})

add_executable(struct_union ${struct_union_SOURCE} ${struct_union_HEADER})
