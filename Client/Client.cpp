//
// Created by dcamachog1501 on 08/03/19.
//

#include "Client.h"
#include <iostream>
#include<sys/types.h>
#include<unistd.h>
#include<arpa/inet.h>
#include <string.h>
#include <string>
using namespace std;
Client::Client()
{
    this->connected=false;
    this->running=true;
}
void Client::run()
{
    int attempts=1;
    cout << "Trying to connect to server,please standby..." << endl;
    while(running) {
        while (running && !connected) {
            sock = socket(AF_INET, SOCK_STREAM, 0);
            if (sock == -1) {
                cout << "Failed to connect to server, sock=-1" << endl;
            }

            int port = 54000;
            string ipAdress = "192.168.100.93";


            sockaddr_in hint;
            hint.sin_family = AF_INET;
            hint.sin_port = htons(port);
            inet_pton(AF_INET, ipAdress.c_str(), &hint.sin_addr);
            int connectRes = connect(sock, (sockaddr *) &hint, sizeof(hint));
            if (connectRes == -1) {
                cout << "Failed to connect to server, connectRes= -1" << endl;
            } else {
                connected = true;
                cout<<"Connected!"<<endl;
                this->sendMessage("get");
                this->receiveMessage();
            }
            cout << "Atempts to connect: " << attempts++ << endl;

        }

    }
}
string Client::receiveMessage()
{
    string receivedMessage;
    try {
        memset(buff, 0, 4096);
        int bytesReceived = recv(sock, buff, 4096, 0);
        receivedMessage = string(buff, bytesReceived);
    }
    catch(exception& e){
        receivedMessage="";
    }
    cout<<receivedMessage<<endl;
    return receivedMessage;
}
void Client::sendMessage(string message)
{
    int sendMes=send(sock,message.c_str(),message.size()+1,0);

    if(sendMes==-1)
    {
        cout<<"Couldn't send the message: "<<message<<endl;
    }
}