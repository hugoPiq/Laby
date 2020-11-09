cmake_minimum_required(VERSION 2.6) #compatibilité de Cmake
project(main_exe) #nom du projet
set(CMAKE_BUILD_TYPE debug) #compilation en mode debug
set(CMAKE_CXX_FLAGS "-Wall -Wextra -std=c++11") #option
file( #liste des fichier a compiler
GLOB_RECURSE #recherche recursive
source_files #fichier listes dans une variable source_file
src/*.cpp #forme des fichier a rechercher
)
add_executable( #creation de l executable binaire
main_exe #nom du binaire
${source_files} #liste des fichiers a compile pour le linking
