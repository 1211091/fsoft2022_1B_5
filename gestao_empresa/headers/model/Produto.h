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
    string tipo;
    string produto;
public :
    Produto(const string &tipo, const string &referencia);
    string Tipo(const string &tipo);
    const string &getTipo();
    void setTipo(const string &tipo);
    void setProduto(const string &produto);
    string Referencia(const string &referencia);
    const string &getReferencia();
    void setReferencia(const string &referencia);
    int Quantidade(int quantidade);
    int getQuantidade();
    void setQuantidade(const string &quantidade);
    void setReferencia(const int &referencia);
};
#endif //HEADERS_MODEL_PRODUTO_H
