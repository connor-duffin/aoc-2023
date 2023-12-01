cmake_minimum_required(VERSION 3.22)

project(MyProject
  VERSION
    0.0.1
  DESCRIPTION
    "Advent of Code 2023"
  LANGUAGES
    CXX
)

add_executable(day1 src/day1.cpp)
target_compile_features(day1 PRIVATE cxx_std_20)
