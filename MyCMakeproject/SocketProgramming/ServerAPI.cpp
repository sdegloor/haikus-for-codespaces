#pragma once
#include"BaseSocketAPI.cpp"

class ServerSocket:public SocketAPI
{
    private:
        int serverSocket;
    public:
        ServerSocket()
        {
            cout<<"In ServerSocket start"<<endl;
            // creating socket
            serverSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

            // specifying the address
            sockaddr_in serverAddress;
            serverAddress.sin_family = AF_INET;
            serverAddress.sin_port = htons(8080);
            serverAddress.sin_addr.s_addr = INADDR_ANY;
            cout<<"In ServerSocket Binding"<<endl;
            // binding socket.
            bind(serverSocket, (struct sockaddr*)&serverAddress,
                sizeof(serverAddress));
            cout<<"In ServerSocket Listen"<<endl;
            // listening to the assigned socket
            listen(serverSocket, 5);
            cout<<"In ServerSocket Accepting"<<endl;
            // accepting connection request
            
            cout<<"After accept connection"<<endl;
            //recieving data
            char buffer[1024] = { 0 };
            recv(clientSocket, buffer, sizeof(buffer), 0);
            cout << "Message from client: " << buffer;
            player = new PlayerBuilder();
            player->setName("MasterPlayer");
            player->InitializeMessage();
            player= player->getPlayer();
            
			/*player->getResponseMsg(player);
			cout<<"Sending From Server: " + player->getMessage();
            // sending data
            const char* message = player->getMessage().c_str();
            send(clientSocket, message, strlen(message), 0);*/
            communicate(player);
        }
        void communicate(PlayerBuilder *player)
        {
            char buffer[1024];
            cout<<"In Server Communicate"<<endl;
            while(1)
            {
                cout<<"In Server Communicate while first"<<endl;
                clientSocket = accept(serverSocket, nullptr, nullptr);
                if(clientSocket < 0)
                    return;
                else  
                    cout<<"Accept Ok"<<endl;
                
                if((recv(clientSocket, buffer, 1024, 0)) >0)
                {
                    cout<<"In Server Communicate while:"<<player->getMessageCount()<<endl;
                    if(player->getMessageCount() > 10)
                        ExitApplication();
                    string msg = player->getResponseMsg(player);
                    //const char* message = player->getMessage().c_str();
                    cout<<"In Server Communicate message prepared: "<<msg.c_str()<<endl;
                    if((send(serverSocket, msg.c_str(), strlen(msg.c_str()), 0)) > 0)
                    {
                        cout<<"Message sent from Server successfully"<<endl;
                    }
                }
            }
        }
        void ExitApplication()
        {
            exit(0);
        }
};