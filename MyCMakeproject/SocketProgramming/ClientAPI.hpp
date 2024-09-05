
#ifndef CLIENTAPI_H
#define CLIENTAPI_H
#include"BaseSocketAPI.hpp"

string player2 = "Initiator";
class ClientSocket:public SocketAPI
{
    public:
        ClientSocket();
        void communicate(PlayerBuilder *player);
        void ExitApplication();
};
#endif
