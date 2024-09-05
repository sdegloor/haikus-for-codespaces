
Problem:
Given a Player class - an instance of which can communicate with other Players.

The requirements are as follows:
1.Create 2 Player instances
2.One of the players should send a message to second player (let's call this player "initiator")
3.When a player receives a message, it should reply with a message that contains the received message concatenated with the value of a counter holding the number of messages this player already sent.
4.Finalize the program (gracefully) after the initiator sent 10 messages and received back 10 messages (stop condition)
5.Both players should run in the same process (strong requirement)
6.Document for every class the responsibilities it has.
7.Additional challenge (nice to have) opposite to 5: have every player in a separate process.


This code is implemented using C++(11+) version and CMake(3.XX) with Shell script.

Class Definitions:
BaseSocketAPI:
BaseApi is the Abstract Class for ClientSocket and ServerSocket classes.
Common objects and methods are placed in this class.

ClientSocket:
Client side application extends to the BaseSocketApi Abstract Class.
This application checks if there is available host, if yes, then establishes the connection.
Once it's connected to a server, it creates a player object and initializes all the details like player name,
initialize message then sends the first message.
Afterwards, it starts listening for any messages from server.
if receives any message from the server, it sends the message again until graceful exit criteria is satisfied.
Once the condition is satisfied, it exits gracefully.

ServerSocket:
Server side application extends to the BaseSocketAPI Abstract Class.
This application creates host for the messaging.
After creating the host, it starts to listen inputStream.
Once client connected and sent first message, server receives and send back the message with received message nummber.
This is done until finalization criteria is met.

PlayerBuilder:
All the methods related to player are placed in here like preparing a message and 
incrementing counters, setting name, message and count etc.

Main:
Start point of the application. Creates Server and Client Socket instances based on the input from shell script.
It takes the input from user for the kond of communition(Within process/inter process).

How to run?

Everything needed to generate a makefile and binary is included part of Shell script.
Just run the below command in the directory where source files are present then provide the input like which method like thread(within process) or between process socket communication.

./run.sh

