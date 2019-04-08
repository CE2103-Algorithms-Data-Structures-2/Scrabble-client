//
// Created by dcamachog1501 on 08/03/19.
//

#ifndef PROYECTO_1_CLIENT_CLIENT_H
#define PROYECTO_1_CLIENT_CLIENT_H
#include <iostream>
#include <thread>
using namespace std;


class Client{
private:
    const std::string ipAdress = "192.168.43.161";
    int sock;
    char buff[4096];
    bool connected;
    bool running;
    thread clientT;

public:
    /**
     * Constructor de la clase client.
     */
    Client();
    /**
     * Metodo para inicializar el thread del cliente.
     */
    void run();
    /**
     * Metodo para detener la ejecucion del thread del cliente
     */
    void stop();
    /**
     * Metodo para realizar la conexion con el servidor.
     */
    void start();
    /**
     * Metodo para enviar mensajes al servidor.
     * @param message Mensaje de tipo String.
     */
    void sendMessage(string message);
    /**
     * Metodo para obtener el mensaje recibido por el servidor.
     * @return Mensaje de tipo string.
     */
    string receiveMessage();
    /**
     * Metodo para saber si el cliente está conectado al servidor.
     * @return Condición de tipo booleano.
     */
    bool isConnected();
    /**
     * Metodo para detener la ejecucion del cliente.
     */
    void disconnect();
    /**
     * Metodo para saber si el servidor aceptó al cliente.
     */
    void isAccepted();
};


#endif //PROYECTO_1_CLIENT_CLIENT_H
