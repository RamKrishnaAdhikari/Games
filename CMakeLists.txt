cmake_minimum_required(VERSION 3.5)

project(klausurtayari LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(klausurtayari main.cpp
    user.h user.cpp
    game.h game.cpp
    goodcurrentgames.h goodcurrentgames.cpp)

include(GNUInstallDirs)
install(TARGETS klausurtayari
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
