cmake_minimum_required(VERSION 2.8)
project(novtable)

add_definitions(-DUNICODE -D_UNICODE)

file(GLOB novtable_SOURCE src/*.cpp)
file(GLOB novtable_HEADER src/*h)

source_group("Source Files" FILES ${novtable_SOURCE})
source_group("Header Files" FILES ${novtable_HEADER})

add_executable(novtable ${novtable_SOURCE} ${novtable_HEADER})
