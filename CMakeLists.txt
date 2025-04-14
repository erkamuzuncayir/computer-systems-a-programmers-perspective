cmake_minimum_required(VERSION 3.30)
project(computer-systems-a-programmers-perspective C)

add_executable(computer-systems-a-programmers-perspective
        #   temp.c
        #   ch_02/ex_55.c
        #   ch_02/ex_56.c
        #   ch_02/ex_57.c
        #   ch_02/ex_58.c
        #   ch_02/ex_59.c
        #   ch_02/ex_60.c
        #   ch_02/ex_61.c
        #   ch_02/ex_62.c
        #   ch_02/ex_63.c
        #   ch_02/ex_64.c
        #   ch_02/ex_65.c
        #   ch_02/ex_66.c
        #   ch_02/ex_67.c
        #   ch_02/ex_68.c
        #   ch_02/ex_69.c
        #   ch_02/ex_70.c
        #   ch_02/ex_71.c
        #   ch_02/ex_72.c
        #   ch_02/ex_73.c
        #   ch_02/ex_74.c
        #   ch_02/ex_75.c
        #   ch_02/ex_76.c
        #   ch_02/ex_77.c
        ch_02/ex_78.c
)

target_link_libraries(computer-systems-a-programmers-perspective m)

add_compile_options(-O2 -fopt-info -Wall -W -pedantic -std=c11)

install(TARGETS computer-systems-a-programmers-perspective RUNTIME DESTINATION ${CMAKE_SOURCE_DIR})