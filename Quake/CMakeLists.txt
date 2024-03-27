# DOSSIER PROJET

# Version minimum du projet
cmake_minimum_required(VERSION 3.10)

# Nom du projet et version
project(Quake VERSION 1.0)

# Get all files to compile
file(GLOB_RECURSE ENGINE_SOURCES "Source/*.cpp" "Source/*.c")
file(GLOB_RECURSE ENGINE_HEADERS "Source/*.h" "Source/*.hpp")

# Executable du projet
add_executable(Quake ${ENGINE_SOURCES} ${ENGINE_HEADERS})

# Parcour recursif sous-dossier Source pour generer filtres (== arborescence)
file(GLOB_RECURSE SRC_LIST "Source/*.cpp")
foreach(_source IN ITEMS ${SRC_LIST})
    get_filename_component(_source_path "${_source}" PATH)
    file(RELATIVE_PATH _source_path_rel "${CMAKE_CURRENT_SOURCE_DIR}/Source" "${_source_path}")
    string(REPLACE "/" "\\" _group_path "${_source_path_rel}")
    source_group("${_group_path}" FILES "${_source}")
endforeach()

file(GLOB_RECURSE HEADER_LIST "Source/*.h")
foreach(_header IN ITEMS ${HEADER_LIST})
    get_filename_component(_header_path "${_header}" PATH)
    file(RELATIVE_PATH _header_path_rel "${CMAKE_CURRENT_SOURCE_DIR}/Source" "${_header_path}")
    string(REPLACE "/" "\\" _group_path "${_header_path_rel}")
    source_group("${_group_path}" FILES "${_header}")
endforeach()
