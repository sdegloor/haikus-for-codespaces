
#ifndef SERVERAPI_H
#define SERVERAPI_H
#include"BaseSocketAPI.hpp"

extern string player1;

class ServerSocket:public SocketAPI
{
    public:
        ServerSocket();
        void communicate(PlayerBuilder *player);
        void ExitApplication();
        
};
#endif