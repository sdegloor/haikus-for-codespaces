#pragma once
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
#include "PlayerBase.cpp"

using namespace std;

class SocketAPI 
{  
    public:
        int clientSocket;
        PlayerBuilder *player;
        //PlayerBuilder *sender;
        SocketAPI()
        {

        }
        virtual void communicate(PlayerBuilder *player) = 0;
        virtual void ExitApplication() = 0;

};