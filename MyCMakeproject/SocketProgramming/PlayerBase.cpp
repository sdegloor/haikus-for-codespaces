#pragma once

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
        PlayerBuilder() {}
        PlayerBuilder(string name, int msg_cout, string msg):name(name), messageCount(msg_cout),message(msg)
        {

        }
        PlayerBuilder setName(string name)
        {
            this->name=name;
            return *this;
        }
        PlayerBuilder setMessage(string message)
        {
            this->message=message;
            return *this;
        }
        PlayerBuilder setMessageCount(int msg_count)
        {
            this->messageCount=msg_count;
            return *this;
        }
        string getName()
        {
            return name;
        }
        string getMessage()
        {
            return message;
        }
        int getMessageCount()
        {
            return messageCount;
        }
        PlayerBuilder* getPlayer()
        {
            player = new PlayerBuilder(name, messageCount, message);
            return player;
        }
        PlayerBuilder InitializeMessage()
        {
            this->message="Greetings There";
            return *this;
        }
        void increaseMessageCount() {
            cout<<"Message count for :"<<this->getName().c_str()<<"and count:"<<messageCount<<endl;
		    messageCount++;
            cout<<"After Message count for :"<<this->getName().c_str()<<"and count:"<<messageCount<<endl;
	    }
        string  getResponseMsg(PlayerBuilder *sender)
        {
            cout<<"Preparing message for "<<sender->getName().c_str()<<" sending"<<sender->getMessage()<<endl;
            string str = sender->getMessage() + " " + to_string(sender->getMessageCount());
            cout<<"Preparing message for sending: "<<str<<endl;
            sender->increaseMessageCount();
            return str;
        }
};