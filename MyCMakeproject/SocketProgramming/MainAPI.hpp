#ifndef MAINAPI_H
#define MAINAPI_H

#include<iostream>
#include"ClientAPI.hpp"
#include"ServerAPI.hpp"
#include<thread>

using namespace std;

class MainAPI
{   

public:
    MainAPI();

    static void startClient();
    
    static void startServer();

};
#endif

