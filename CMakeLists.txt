cmake_minimum_required(VERSION 3.10) # Проверка версии CMake.
									# Если версия установленной программы
									# старее указаной, произойдёт аварийный выход.
project(test)
add_executable(main.app main.cpp)		# Создает исполняемый файл с именем main
add_executable(files.app files.cpp)
add_executable(struct.app struct.cpp)							# из исходника main.cpp
add_executable(enum.app enum.cpp)
add_executable(trycatch.app trycatch.cpp)
add_executable(math.app math.cpp)
add_executable(class.app class.cpp)
add_executable(construct_this.app construct_this.cpp)
add_executable(friendly_functions.app friendly_functions.cpp)
add_executable(friendly_class.app friendly_class.cpp)