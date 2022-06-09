//
// Created by bilax on 01/06/2022.
//

#ifndef HEADERS_MODEL_PRODUTO_H
#define HEADERS_MODEL_PRODUTO_H
#include <string>
#include "Stock.h"

using namespace std;
class Produto: public Stock {
private :
    Produto(const string &referencia, const string &tipo);

    string tipo;
    string produto;
    string referencia;
public :
    string Tipo(const string &tipo);
    const string &getTipo();
    void setTipo(const string &tipo);
    void setProduto(const string &produto);
    string referencia(const string &referencia);
    const string &getReferencia();
    void setReferencia(const string &referencia);
    //void setQuantidade(const string &quantidade);
    string referencia(const string &referencia);
    const int &getReferencia();
    void setReferencia(const string &referencia);
    Produto* getProduto(string referencia,const string &tipo);
    ~Produto();
}
#endif //HEADERS_MODEL_PRODUTO_H
