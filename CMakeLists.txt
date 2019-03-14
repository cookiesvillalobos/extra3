cmake_minimum_required(VERSION 3.13)
project(extra3)

set(CMAKE_CXX_STANDARD 14)

add_executable(extra3 main.cpp node.cpp node.h list.cpp list.h collector.cpp collector.h CList.cpp CList.h CNode.cpp CNode.h)