cmake_minimum_required(VERSION 3.20)
project(MSPK)

set(CMAKE_CXX_STANDARD 14)

add_executable(MSPK main.cpp Pracownik.cpp Pracownik.h ManagerPliku.cpp ManagerPliku.h PracownikBiurowy.cpp PracownikBiurowy.h Przelew.cpp Przelew.h ManagerPracownikow.cpp ManagerPracownikow.h ManagerInterface.cpp ManagerInterface.h ManagerPrzelewow.cpp ManagerPrzelewow.h Ksiegowy.cpp Ksiegowy.h KsiegowyInterface.cpp KsiegowyInterface.h)
