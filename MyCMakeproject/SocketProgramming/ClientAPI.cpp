
#include"ClientAPI.hpp"

ClientSocket::ClientSocket()
{
    // creating socket
    clientSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

    // specifying address
    sockaddr_in clientAddress;
    clientAddress.sin_family = AF_INET;
    clientAddress.sin_port = htons(8080);
    clientAddress.sin_addr.s_addr = INADDR_ANY;
    // sending connection request
    if(connect(clientSocket, (struct sockaddr*)&clientAddress,sizeof(clientAddress)) < 0){
        cout << "Client: connect() - Failed to connect: " <<endl;
        return;
     } else {
        cout << "Client: Connect() is OK!" << endl;
        cout << "Client: Can start sending and receiving data..." << endl;
    }

    player = new PlayerBuilder();
    player->setName(player2);
    player->InitializeMessage();
    player= player->getPlayer();
            
    communicate(player);
}
void ClientSocket::communicate(PlayerBuilder *player)
{   
    char buffer[1024]={ 0 };
    while(1)
    {
        if(player->getMessageCount() < 10)
        {
            string msg = player->getResponseMsg(player);
            int BytesSent = send(clientSocket, msg.c_str(), strlen(msg.c_str()), 0);
            if ( BytesSent )
            {
                cout<<"Message sent from Client successfully"<<endl;
            }
        }
        if((recv(clientSocket, buffer, sizeof(buffer), 0)) > 0)
        {
            cout<<"Received mesage from server in Client:"<<buffer<<"len:"<<sizeof(buffer)<<endl;
            if(player->getMessageCount() >= 10)
            {
                cout<<"Exiting Application in Client"<<endl;
                ExitApplication();
                return;
            }
        }
    }
}
void ClientSocket::ExitApplication()
{
    close(clientSocket);
    exit(0);
}