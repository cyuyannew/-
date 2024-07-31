cmake_minimum_required(VERSION 3.28)
project(C)

set(CMAKE_CXX_STANDARD 14)

add_executable(C
        c--/one
        c--/one.c
        iOS_rule/AppStore/surge.list
        iOS_rule/Google/voice.list
        iOS_rule/streaming.list
        Surge/ad/Rule.list
        Surge/dingyue
        LICENSE
        README.md
        c--/one.cpp
        c++/one.cpp
        c++/two.cpp)
