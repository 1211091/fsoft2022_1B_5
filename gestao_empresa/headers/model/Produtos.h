//
// Created by bilax on 01/06/2022.
//

#ifndef HEADERS_MODEL_PRODUTOS_H
#define HEADERS_MODEL_PRODUTOS_H
#include <string>
using namespace std;
class Produtos{
private :
    string tipo;
    string referencia;
    int quantidade;
public :
    string Tipo(const string& tipo);
    const string& getTipo();
    void setTipo(const string &tipo);
    string Referencia(const string& Referencia);
    const string& getReferencia();
    void setReferencia(const string &referencia);
    int Quantidade(int quantidade);
    int getQuantidade();
    void setQuantidade(const string &quantidade);-.--
};


#endif //HEADERS_MODEL_PRODUTOS_H