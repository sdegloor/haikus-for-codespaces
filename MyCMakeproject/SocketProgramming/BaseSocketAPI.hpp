#ifndef BASESOCKETAPI_H
#define BASESOCKETAPI_H
#include <iostream>
#ifdef _WIN32
#include <Winsock2.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <tchar.h>
#endif
#include <cstring>
#include <netinet/in.h>
#include <sys/socket.h>
#include <unistd.h>
#include <arpa/inet.h>
#include "PlayerBase.hpp"

using namespace std;

class SocketAPI 
{  
    public:
        int clientSocket;
        int acceptSocket;
        int serverSocket;
        PlayerBuilder *player;
        SocketAPI()
        {

        }
        virtual void communicate(PlayerBuilder *player) = 0;
        virtual void ExitApplication() = 0;

};
#endif