//
// Created by dcamachog1501 on 09/03/19.
//
#ifndef PROYECTO_1_CLIENT_MANAGER_H
#define PROYECTO_1_CLIENT_MANAGER_H


#include "../../Client/Client.h"
#include "../JSON_Logic/JSONManager.h"
#include "../Logic_Windows/NewGame_LW.h"
#include "../Logic_Windows/JoinGame_LW.h"
#include "../../Structures/PlayerList.h"


class Manager{
private:
    bool assigned;
    string* code;
    Client* cliente;
    Matrix* matrix;
    NewGame_LW* NewG_LW;
    JoinGame_LW* JoinG_LW;
    bool* running;
    bool* playing;
public:
    static JSONManager* Jmanager;
    /**
     * Constructor de la clase manager.
     */
    Manager();
    /**
     * Metodo para inicializar los recursos del juego.
     */
    void Init();
    /**
     * Metodo para asignar el codigo de la partida al manager.
     */
    void setCode(string);
    /**
     * Metodo para preguntar al servidor si hay jugadores nuevos.
     * @param s: Peticion de tipo string.
     */
    void ask(string s);
    /**
     * Metodo para iniciar la dinamica del juego.
     */
    void play();
    /**
     * Metodo para crear una nueva partida.
     */
    int newGame(string name,string partida,string jugadores);
    /**
     * Metodo para unirse a una nueva partida.
     */
    int newJoin(string name,string code);
    /**
     * Metodo para verificar si una palabra se puede escribir en la matriz y escribirla
     */
    void writeToMatrix();
    void setJoin();
    static Player* localP;
    static PlayerList* players;

    void update();

    void setNew();

    string getCode();
};


#endif //PROYECTO_1_CLIENT_MANAGER_H
