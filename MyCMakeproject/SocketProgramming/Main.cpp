#include"MainAPI.hpp"

MainAPI::MainAPI(){ }
void MainAPI::startClient()
{
    cout<<"Initializing a Client"<<endl;
	new ClientSocket();
}
void MainAPI::startServer()
{
	cout<<"Initializing a Server"<< endl;
        
    new ServerSocket();
        
}

int main()
{
    cout<<"Calling from main"<<endl;
    //MainAPI inv;
    thread t1(&MainAPI::startServer);
    
    thread t2(&MainAPI::startClient);
    t1.join();
    t2.join();
    //MainAPI::startClient();
    // create two processes of client and server
    /*pid_t pid = fork();
    if (pid != 0)
    {
        MainAPI::startServer();
    }
    //---------- CLIENT PROCESS
    else
    {
        MainAPI::startClient();
    }*/
    return 0;
}