
#include"ServerAPI.hpp"

string player1 = "MasterPlayer";

ServerSocket::ServerSocket()
{
    // creating socket
    serverSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

    // specifying the address
    sockaddr_in serverAddress;
    serverAddress.sin_family = AF_INET;
    serverAddress.sin_port = htons(8080);
    serverAddress.sin_addr.s_addr = INADDR_ANY;
    // binding socket.
    bind(serverSocket, (struct sockaddr*)&serverAddress,
        sizeof(serverAddress));
    // listening to the assigned socket
    listen(serverSocket, 5);
            
    player = new PlayerBuilder();
    player->setName(player1);
    player->InitializeMessage();
    player= player->getPlayer();
            
    communicate(player);
}
void ServerSocket::communicate(PlayerBuilder *player)
{
    char buffer[1024]={ 0 };
    while(1)
    {
        if(player->getMessageCount() >= messageCount)
        {
            ExitApplication();
            return;
        }
        acceptSocket = accept(serverSocket, nullptr, nullptr);
        if(acceptSocket < 0)
            return;
        else  
            cout<<"Accept Ok"<<endl;
                
        while((recv(acceptSocket, buffer, sizeof(buffer), 0)) >0)
        {
            cout<<"Received message from client in Server:"<<buffer<<endl;
            string msg = player->getResponseMsg(player);
            if((send(acceptSocket, msg.c_str(), strlen(msg.c_str()), 0)) > 0)
            {
                cout<<"Message sent from Server successfully: "<<msg.c_str()<<endl;
            }
        }
    }
}
void ServerSocket::ExitApplication()
{
    close(serverSocket);
    exit(0);
}
