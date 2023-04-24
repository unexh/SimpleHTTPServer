#include "iostream"
#include "http_tcpServer_linux.h"

/*
 * https://osasazamegbe.medium.com/showing-building-an-http-server-from-scratch-in-c-2da7c0db6cb7
 * https://github.com/OsasAzamegbe/http-server/blob/main/http_tcpServer_linux.cpp
 * https://www.youtube.com/watch?v=Lbfe3-v7yE0
 */

int main() {
    using namespace http;
    std::cout << "Hello World \n";
    TcpServer server = TcpServer("127.0.0.1", 8080);
    server.startListen();

    return 0;
}
