cmake_minimum_required(VERSION 3.12)
project(PSU_my_printf_2018 C)

set(CMAKE_C_STANDARD 99)

##directories
set(INCLUDE_DIRECTORY include/)
set(SOURCE_DIRECTORY src/)
set(SOURCE_FLAGS_DIRECTORY flags/)

set(LIB_SRC my_atoi.c
        my_itob.c
        my_nb_to_base.c
        my_putchar.c
        my_strlen.c
        my_putstr.c
        my_revstr.c
        my_putstrerr.c
        my_utob.c)

set(SOURCE_CORE main.c
        my_printf.c)

set(SOURCE_FLAGS b_flag.c
        c_flag.c
        d_flag.c
        i_flag.c
        o_flag.c
        p_flag.c
        s_flags.c
        u_flag.c
        x_flags.c)
list(TRANSFORM SOURCE_FLAGS PREPEND flags/)
set(SOURCE ${SOURCE_CORE} ${SOURCE_FLAGS})
list(TRANSFORM LIB_SRC PREPEND lib/my/)
list(TRANSFORM SOURCE PREPEND ${SOURCE_DIRECTORY})

##flags
set(CMAKE_C_FLAGS)
add_executable(PSU_my_printf_2018 ${SOURCE} ${LIB_SRC})

target_include_directories(PSU_my_printf_2018 PRIVATE ${INCLUDE_DIRECTORY})