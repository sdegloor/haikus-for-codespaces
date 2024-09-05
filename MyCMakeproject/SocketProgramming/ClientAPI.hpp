
#ifndef CLIENTAPI_H
#define CLIENTAPI_H
#include"BaseSocketAPI.hpp"

extern string player2;
class ClientSocket:public SocketAPI
{
    public:
        ClientSocket();
        void communicate(PlayerBuilder *player);
        void ExitApplication();
};
#endif
