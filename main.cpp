#include "iostream"
#include "http_tcpServer_linux.h"

int main() {
    using namespace http;
    std::cout << "Hello World \n";
    TcpServer server = TcpServer("127.0.0.1", 8080);
    server.startListen();

    return 0;
}
