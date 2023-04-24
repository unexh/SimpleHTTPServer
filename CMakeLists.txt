cmake_minimum_required(VERSION 3.25)
project(SimpleHTTPServer)

set(CMAKE_CXX_STANDARD 23)

add_executable(SimpleHTTPServer main.cpp http_tcpServer_linux.cpp http_tcpServer_linux.h)
