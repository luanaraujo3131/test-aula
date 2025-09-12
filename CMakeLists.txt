cmake_minimum_required(VERSION 4.0)
project(test_aula C)

set(CMAKE_C_STANDARD 11)

add_executable(test_aula
        pratics/class3/pratics/book_declaration.c
        pratics/class3/pratics/constants.c
        pratics/class3/pratics/convert_type.c
        pratics/class3/pratics/modified_type.c
        pratics/class3/pratics/person_declaration.c
        pratics/class3/pratics/range_type.c
        pratics/class3/pratics/size_type.c
        pratics/class3/pratics/variables.c
        pratics/class3/types.c
        pratics/pratics2/print_char.c
        pratics/pratics2/print_decimal.c
        pratics/pratics2/print_fibonacci.c
        pratics/pratics2/print_int.c
        pratics/pratics2/print_report_card.c
        pratics/pratics2/print_your_name.c
        pratics/aula2.c
        pratics/hello.c
        algorithms/Conditionals/ex1.c)
