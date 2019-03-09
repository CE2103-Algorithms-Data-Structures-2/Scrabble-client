#include <iostream>
#include "../Client/Client.h"

int main() {
    Client c= Client();
    c.run();
    c.sendMessage("get");
    c.receiveMessage();
    return 0;
}