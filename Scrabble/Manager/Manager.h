//
// Created by dcamachog1501 on 09/03/19.
//
#ifndef PROYECTO_1_CLIENT_MANAGER_H
#define PROYECTO_1_CLIENT_MANAGER_H


#include "Client/Client.h"
#include "JSON_Logic/JSONManager.h"
#include "Logic_Windows/NewGame_LW.h"
#include "Logic_Windows/JoinGame_LW.h"
#include "Structures/PlayerList.h"


class Manager{
private:
    bool* assigned;
    string* code;
    Client* cliente;
    JSONManager* Jmanager;
    NewGame_LW* NewG_LW;
    JoinGame_LW* JoinG_LW;
    bool* running;
public:
    /**
     * Constructor de la clase manager.
     */
    Manager();
    /**
     * Metodo para inicializar los recursos del juego.
     */
    void Init();
    /**
     * Metodo para acceder a la lista de jugadores.
     */
    PlayerList* getPlayers();
    /**
     * Metodo para asignar el codigo de la partida al manager.
     */
    void setCode(string);
    /**
     * Metodo para preguntar al servidor si hay jugadores nuevos.
     */
    void ask(string s);
    /**
     * Metodo para iniciar la dinamica del juego.
     */
    void play();
    static Player* localP;
    static PlayerList* players;

};


#endif //PROYECTO_1_CLIENT_MANAGER_H
