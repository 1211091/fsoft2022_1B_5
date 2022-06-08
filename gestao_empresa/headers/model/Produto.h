//
// Created by bilax on 01/06/2022.
//

#ifndef HEADERS_MODEL_PRODUTO_H
#define HEADERS_MODEL_PRODUTO_H
#include <string>
using namespace std;
class Produto{
private :
    string tipo;
    int referencia;
    int quantidade;
public :
    Produto(const string& tipo, const string& referencia);
    string Tipo(const string& tipo);
    const string& getTipo();
    void setTipo(const string &tipo);
    string Referencia(const string& Referencia);
    const string& getReferencia();
    void setReferencia(const string &referencia);
};


#endif //HEADERS_MODEL_PRODUTO_H
