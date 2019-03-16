//
// Created by dcamachog1501 on 09/03/19.
//

#ifndef PROYECTO_1_CLIENT_JSONMANAGER_H
#define PROYECTO_1_CLIENT_JSONMANAGER_H
#include "JSONManager.h"
#include <algorithm>
#include <boost/property_tree/json_parser.hpp>
#include <vector>
#include <boost/algorithm/string.hpp>
#include <string>
#include <boost/property_tree/ptree.hpp>
#include <iostream>

using namespace std;

using boost::property_tree::ptree;

class JSONManager {

    public:
        /**
         * Constructor de la clase JSONManager.
         */
        JSONManager();
        /**
         * Metodo para convertir a formato JSON.
         * @param s String a convertir.
         * @return Resultado de tipo string.
         */
        string toJSON(string s);
        /**
         * Metodo para convertir un JSON en Ptree;
         * @param s String a convertir.
         * @return Resultado de tipo Ptree.
         */
        ptree toPtree(string s);
        /**
         * Metodo para obtener el valor de una llave en un JSON.
         * @return Valor de tipo string.
         * @param s JSON del cual se quiere obtener un valor.
         * @param l Llave del valor.
         */
        string askFor(string s,string l);


};


#endif //PROYECTO_1_CLIENT_JSONMANAGER_H
