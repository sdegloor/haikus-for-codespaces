
#ifndef SERVERAPI_H
#define SERVERAPI_H
#include"BaseSocketAPI.hpp"

class ServerSocket:public SocketAPI
{
    public:
        ServerSocket();
        void communicate(PlayerBuilder *player);
        void ExitApplication();
        
};
#endif