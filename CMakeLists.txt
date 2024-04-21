cmake_minimum_required(VERSION 3.28)
project(untitled8 C)

set(CMAKE_C_STANDARD 11)

# Verifique se o OpenMP está disponível
find_package(OpenMP REQUIRED)

add_executable(untitled8 main.c)

# Adicione a flag do OpenMP ao compilador
target_compile_options(untitled8 PRIVATE ${OpenMP_C_FLAGS})

# Adicione a biblioteca OpenMP ao executável
target_link_libraries(untitled8 PRIVATE OpenMP::OpenMP_C)
