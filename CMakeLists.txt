CMAKE_MINIMUM_REQUIRED(VERSION 3.10)

project(rayTracingInOneWeekend VERSION 1.0)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(rayTraceExecute 
        src/main.cpp
        )


target_include_directories(rayTraceExecute PUBLIC include)
