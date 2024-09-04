#pragma once
#include<iostream>
#include"ClientAPI.cpp"
#include"ServerAPI.cpp"
#include<thread>

using namespace std;

class MainAPI
{   

public:
    MainAPI(){ cout<<"IN Main API Class";}
    /*static void invoke()
    {
		
		startServer();
        startClient();
		
    }*/
    static void startClient()
    {
        cout<<"Client could not found"<<endl;
		cout<<"Initializing a Client"<<endl;
	    new ClientSocket();
    }
    static void startServer()
    {
        cout<<"Server could not found"<< endl;
		cout<<"Initializing a Server"<< endl;
        
        new ServerSocket();
        
    }

};

int main()
{
    cout<<"Calling from main"<<endl;
    //MainAPI inv;
    //thread t1(&MainAPI::startServer);
    
    //thread t2(&MainAPI::startClient);
    //t1.join();
    //t2.join();
    //MainAPI::startClient();
    // create two processes of client and server
    pid_t pid = fork();
    if (pid != 0)
    {
        MainAPI::startServer();
    }
    //---------- CLIENT PROCESS
    else
    {
        MainAPI::startClient();
    }
    return 0;
}