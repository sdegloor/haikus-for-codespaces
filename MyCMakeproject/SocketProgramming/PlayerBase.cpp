#include"PlayerBase.hpp"

PlayerBuilder::PlayerBuilder() {}
PlayerBuilder::PlayerBuilder(string name, int msg_cout, string msg):name(name), messageCount(msg_cout),message(msg)
{}
PlayerBuilder PlayerBuilder::setName(string name)
{
    this->name=name;
    return *this;
}
PlayerBuilder PlayerBuilder::setMessage(string message)
{
    this->message=message;
    return *this;
}
PlayerBuilder PlayerBuilder::setMessageCount(int msg_count)
{
    this->messageCount=msg_count;
    return *this;
}
string PlayerBuilder::getName()
{     
    return name;
}
string PlayerBuilder::getMessage()
{
    return message;
}
int PlayerBuilder::getMessageCount()
{
    return messageCount;
}
PlayerBuilder* PlayerBuilder::getPlayer()
{
    player = new PlayerBuilder(name, messageCount, message);
    return player;
 }
PlayerBuilder PlayerBuilder::InitializeMessage()
{
    this->message="Hello There";
    return *this;
}
void PlayerBuilder::increaseMessageCount() {
    messageCount++;
}
//Prepare message for sending a reply based on Client/Server.
//This is a common method for both client/server.
string  PlayerBuilder::getResponseMsg(PlayerBuilder *sender)
{
    string str;
    if(!sender->getName().compare("MasterPlayer"))
    {
        str = sender->getMessage() + " " + to_string(sender->getMessageCount());
    } else {
        str = sender->getMessage();
    }
    sender->increaseMessageCount();
    return str;
}