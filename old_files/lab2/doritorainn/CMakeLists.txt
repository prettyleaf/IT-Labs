cmake_minimum_required(VERSION 3.5)

project(doritorainn LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(doritorainn main.cpp)

include(GNUInstallDirs)
install(TARGETS doritorainn
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
