//
// Created by dcamachog1501 on 09/03/19.
//


#include "JSONManager.h"
#include "../Board_Logic/Matrix.h"
#include <algorithm>
#include <boost/property_tree/json_parser.hpp>
#include <vector>
#include <boost/algorithm/string.hpp>
#include <string>
using namespace std;

using boost::property_tree::ptree;

JSONManager::JSONManager()
{

}
string JSONManager::toJSON(string entrada)
{
    ptree output;
    ptree data;
    vector<string> elementos;
    boost::split(elementos, entrada, boost::is_any_of("$"));

    for (int i = 0; i < elementos.size(); i++)
    {
        vector<string> toAdd;
        boost::split(toAdd, elementos[i], boost::is_any_of("@"));
        output.put(toAdd[0],toAdd[1]);
        //data.push_back(make_pair("",element));
    }
    //output.add_child("Data",data);

    std::ostringstream buf;
    write_json (buf, output, false);
    std::string json = buf.str();
    cout<<json<<endl;
    return json;
}
ptree JSONManager::toPtree(string s) {

    std::istringstream iss(s);
    ptree document;
    read_json(iss, document);
    return document;
}

string JSONManager::askFor(string JSON,string llave)
{
    ptree p= toPtree(JSON);
    string v=p.get<string>(llave);
    return v;
}

string JSONManager::matrixtoJSON(Matrix *m)
{
    int cont=0;
    string convert="";
    BoxList* temp= m->getHead();
    while(temp!= nullptr)
    {
        Box* temp2=temp->getHead();
        convert+="f"+to_string(cont)+"@";
        while(temp2!= nullptr)
        {
            if(temp2->getChip()->getLetter()==" ")
            {
                convert+="0";
            }
            else
            {
                convert+=temp2->getChip()->getLetter();
            }
            if(temp2->getNext()!= nullptr)
            {
                convert+="#";
            }
            temp2=temp2->getNext();

        }
        if(temp->getNext()!= nullptr)
        {
            convert+="$";
        }
        temp=temp->getNext();
        cont++;
    }
    string out =toJSON(convert);
    return out;
}
Matrix JSONManager::JSONtomatrix(string JSON)
{
    //{"f0":"0#0#0#0#0#0#0#0#0#0#0#0#0#0#0","f1":"0#0#0#0#0#0#0#0#0#0#0#0#0#0#0","f2":"0#0#0#0#0#0#0#0#0#0#0#0#0#0#0","f3":"0#0#0#0#0#0#0#0#0#0#0#0#0#0#0","f4":"0#0#0#0#0#c#a#s#a#0#0#0#0#0#0","f5":"0#0#0#0#0#0#0#0#0#0#0#0#0#0#0","f6":"0#0#0#0#0#0#0#0#0#0#0#0#0#0#0","f7":"0#0#0#0#0#0#0#0#0#0#0#0#0#0#0","f8":"0#0#0#0#0#0#0#0#0#0#0#0#0#0#0","f9":"0#0#0#0#0#0#0#0#0#0#0#0#0#0#0","f10":"0#0#0#0#0#0#0#0#0#0#0#0#0#0#0","f11":"0#0#0#0#0#0#0#0#0#0#0#0#0#0#0","f12":"0#0#0#0#0#0#0#0#0#0#0#0#0#0#0","f13":"0#0#0#0#0#0#0#0#0#0#0#0#0#0#0","f14":"0#0#0#0#0#0#0#0#0#0#0#0#0#0#0"}
    Matrix m=Matrix();
    m.init();
    for(int f=0;f<15;f++)
    {
        string act=askFor(JSON,"f"+to_string(f));
        vector<string> elementos;
        boost::split(elementos, act, boost::is_any_of("#"));
        for(int c=0;c<15;c++)
        {
            if(elementos[c]=="0")
            m.get(f,c)->getChip()->setLetter(" ");
            else
            m.get(f,c)->getChip()->setLetter(elementos[c]);
        }
    }
    m.print();
    return m;
}


