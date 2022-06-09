//
// Created by bilax on 01/06/2022.
//

#ifndef HEADERS_MODEL_PRODUTO_H
#define HEADERS_MODEL_PRODUTO_H
#include <string>
#include "Stock.h"

using namespace std;
class Produto:{
protected:
    Produto(const string &referencia, const string &tipo);

    string tipo;
    string produto;
    string referencia;
public :
    string Tipo(string &tipo);
    string getTipo();
    string setTipo(string &tipo);
    string setProduto(string &produto);
    string getReferencia();
    string setReferencia(const string &referencia);
    string setQuantidade(const string &quantidade);
    Produto* getProduto(string referencia,const string &tipo);
    ~Produto();
    bool operator == (const Produto& referencia) const;
    bool operator == (string rfr) const;
}
#endif //HEADERS_MODEL_PRODUTO_H
