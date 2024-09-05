#ifndef PLAYERBASE_H
#define PLAYERBASE_H

#include<string>
#include<iostream>

using namespace std;

class PlayerBuilder
{
    private:
        string name;
        int messageCount = 0;
        string message;
        PlayerBuilder *player;
    public:
        PlayerBuilder();
        PlayerBuilder(string name, int msg_cout, string msg);
        PlayerBuilder setName(string name);
        PlayerBuilder setMessage(string message);
        PlayerBuilder setMessageCount(int msg_count);
        string getName();
        string getMessage();
        int getMessageCount();
        PlayerBuilder* getPlayer();
        PlayerBuilder InitializeMessage();
        void increaseMessageCount();
        string  getResponseMsg(PlayerBuilder *sender);
};
#endif