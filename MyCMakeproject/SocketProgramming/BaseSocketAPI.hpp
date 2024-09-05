#ifndef BASESOCKETAPI_H
#define BASESOCKETAPI_H
#include <iostream>
#include <cstring>
#include <netinet/in.h>
#include <sys/socket.h>
#include <unistd.h>
#include <arpa/inet.h>
#include "PlayerBase.hpp"

const int messageCount = 10;

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