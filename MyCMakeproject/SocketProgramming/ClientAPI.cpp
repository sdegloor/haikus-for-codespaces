#pragma once
#include"BaseSocketAPI.cpp"
//#include"PlayerBase.cpp"
class ClientSocket:public SocketAPI
{
    private:
        PlayerBuilder *playerBuilder;
    public:
        ClientSocket()
        {
            cout<<"In Client Socket start"<<endl;
            // creating socket
            clientSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

            // specifying address
            sockaddr_in clientAddress;
            clientAddress.sin_family = AF_INET;
            clientAddress.sin_port = htons(8080);
            clientAddress.sin_addr.s_addr = INADDR_ANY;
            cout<<"In Client Socket sending connection request"<<endl;
            // sending connection request
            if(connect(clientSocket, (struct sockaddr*)&clientAddress,sizeof(clientAddress)) < 0){
                cout << "Client: connect() - Failed to connect: " <<endl;
                return;
            } else {
                cout << "Client: Connect() is OK!" << endl;
                cout << "Client: Can start sending and receiving data..." << endl;
            }

            //connect(clientSocket, (struct sockaddr*)&clientAddress,
                    //sizeof(clientAddress));
            cout<<"In Client Socket setting player"<<endl;
            player = new PlayerBuilder();
            player->setName("Initiator");
            player->InitializeMessage();
            player= player->getPlayer();
            
            communicate(player);
        }
        void communicate(PlayerBuilder *player)
        {   
            char buffer[1024];
            cout<<"In Client Communicate"<<endl;
            while(1)
            {
                // sending data
                //const char *message = player->getMessage().data();
                //const char *message = "Greetings There";
                if(player->getMessageCount() == 0)
                {
                    string msg = player->getResponseMsg(player);
                    cout<<"In Client Communicate msg: "<<endl;
                    int BytesSent = send(clientSocket, msg.c_str(), strlen(msg.c_str()), 0);
                    cout<<"Client Bytes sent:"<<BytesSent<<endl;
                }
                //int BytesReceived = recv(clientSocket, buffer, sizeof(buffer), 0);
                if((recv(clientSocket, buffer, sizeof(buffer), 0)) > 0)
                {
                    cout<<"In Client Communicate while recv: "<<player->getMessageCount()<<endl;
                    if(player->getMessageCount() > 10)
                        ExitApplication();
                    string msg = player->getResponseMsg(player);
                    //const char* message = player->getMessage().c_str();
                    cout<<"Client RECV "<<msg.c_str()<<endl;
                    send(clientSocket, msg.c_str(), strlen(msg.c_str()), 0);
                }
            }
        }
        void ExitApplication()
        {
            exit(0);
        }
};