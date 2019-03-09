#include <iostream>
#include "../Client/Client.h"

int main() {
    Client c= Client();
    c.run();
    while(true)
    {
        if(c.isConnected())
        {
            string mensaje;
            getline(cin,mensaje);
            c.sendMessage(mensaje);
            c.receiveMessage();

        }

    }

    return 0;
}