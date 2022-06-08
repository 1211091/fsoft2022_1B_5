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
public :
    Produto(const string& tipo, const string& referencia);
    string Tipo(const string& tipo);
    const string& getTipo();
    void setTipo(const string &tipo);
    int Referencia(const int& Referencia);
    const int& getReferencia();
    void setReferencia(const int &referencia);
};


#endif //HEADERS_MODEL_PRODUTO_H
