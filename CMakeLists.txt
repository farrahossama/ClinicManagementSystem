cmake_minimum_required(VERSION 3.23)
project(ClinicManagementSystem C)

set(CMAKE_C_STANDARD 99)

add_executable(ClinicManagementSystem typedef.h funcs.h main.c edit_patient.c admin.c new_patient.c reserve.c cancel.c user.c)
