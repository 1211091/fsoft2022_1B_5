//
// Created by bilax on 01/06/2022.
//

#ifndef HEADERS_MODEL_PRODUTO_H
#define HEADERS_MODEL_PRODUTO_H
#include <string>
#include "Stock.h"

using namespace std;
class Produto:{
private :
    Produto(string &referencia, string &tipo);

    string tipo;
    string produto;
    string referencia;
public :
    string Tipo( string &tipo);
    const string &getTipo();
    void setTipo(string &tipo);
    void setProduto(string &produto);
    const string &getReferencia();
    void setReferencia(const string &referencia);
    void setQuantidade(const string &quantidade);
    Produto* getProduto(string referencia,const string &tipo);
    ~Produto();
}
#endif //HEADERS_MODEL_PRODUTO_H
