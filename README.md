<!-- PROJECT LOGO -->

# SimpleHTTPServer
A minimal http server built using sockets in c++ which is Linux Friendly.
<br />


<!-- ABOUT THE PROJECT -->
## About The Project

<!-- [![Product Name Screen Shot][product-screenshot]](https://example.com) -->

This is a mini project implementing <a href="https://github.com/OsasAzamegbe/http-server">Osamudiamen Azamegbe's work</a>. One of the major ways in which HTTP servers are implemented uses a TCP socket to listen for incoming requests and sends back a basic HTTP response based on standards set by the [RFC documents](https://www.ietf.org/standards/rfcs/).

As previously mentioned, this implementation of an HTTP web server basically creates a TCP socket which:
* listens for incoming requests on a particular [socket address](https://www.ibm.com/docs/en/aix/7.1?topic=addresses-socket-in-tcpip) (which is mostly a combination of an IP address and a network port)
* synchronously processes network connections from a queue of threads built up from the listening
* reads the message sent by a client over the network connection and sends some dummy HTTP response.

<!-- GETTING STARTED -->
## Getting Started

This is a pretty simple project with no prerequisite.

### Building and Running

Just follow the following steps :

1. navigate to your desired project directory
2. Clone the repo
   ```sh
   git clone https://github.com/unexh/SimpleHTTPServer.git
   ```
   (if you do not have git installed, take a brief detour and follow these [instructions](https://git-scm.com/book/en/v2/Getting-Started-Installing-Git)).
3. navigate to the project folder *__http-server/__* and build the project using cmake
   ```
   cmake -i CMakeLists.txt
   ```
4. start the server by running main.exe
   ```sh
   ./camke-build-debug/main.exe
   ```

When you're done with the server and need it shut down simply close the running terminal.
<br />
**NOTE:** if you make any changes to the code, you will have to re-compile as well by simply running **step 3** again.
</br></br>


<!-- USAGE EXAMPLES -->
## Usage

Once your server is up and running, you can pop into any web browser and navigate to `localhost:8080/` to see the default HTTP response sent from the server. There will be an article coming soon where I'll talk more indept about the development of this HTTP server.


## References :
* <a href="https://github.com/OsasAzamegbe/http-server">Osamudiamen Azamegbe's Repo</a>
* <a href="https://www.youtube.com/watch?v=Lbfe3-v7yE0">Sockets working with Python 3</a> [For learning socket's usage in builder server]