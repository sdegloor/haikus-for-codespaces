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

int main(int argc, char *argv[])
{
    cout<<"Calling from main"<<argc<<(argv[1]=="thread")<<endl;
    if(argc !=2)
        return 0;
    if (argv[1]==std::string("thread"))
    {
        cout<<"Number of arguements:"<<argc<<argv[1]<<endl;
        // create two threads of client and server within a process.
        thread t1(&MainAPI::startServer);
        sleep(100);
        thread t2(&MainAPI::startClient);
        t1.join();
        t2.join();
    }
    else if(argv[1]==std::string("process"))
    {
        // create two processes of client and server
        pid_t pid = fork();
        if (pid != 0)
        {
            MainAPI::startServer();
        }
        //---------- CLIENT PROCESS
        else {
            MainAPI::startClient();
        }
    }
    else
        cout<<"Please give proper input ex: ./sock thread or ./sock process"<<endl;
    return 0;
}