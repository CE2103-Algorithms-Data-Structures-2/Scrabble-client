//
// Created by dcamachog1501 on 08/03/19.
//

#ifndef PROYECTO_1_CLIENT_CLIENT_H
#define PROYECTO_1_CLIENT_CLIENT_H
#include <iostream>
using namespace std;


class Client{
    private:
       int sock;
       char buff[4096];
       bool connected;
       bool running;

    public:
        Client();
        void run();
        void start();
        void sendMessage(string message);
        string receiveMessage();
};


#endif //PROYECTO_1_CLIENT_CLIENT_H
