cmake_minimum_required(VERSION 2.8.2)
set(CMAKE_BUILD_TYPE Debug)
project(email_validator)
add_library(emailValidator_lib
    email_validator/emailValidator.c
    email_validator/emailValidator.h
)
add_executable(emailValidator src/main.c)
target_link_libraries(emailValidator PUBLIC emailValidator_lib)



