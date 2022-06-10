//
// Created by bilax on 01/06/2022.
//

#ifndef HEADERS_MODEL_PRODUTO_H
#define HEADERS_MODEL_PRODUTO_H
#include <string>
#include "Stock.h"
#include "Referencia.h"

using namespace std;
class Produto:{
protected:
    Produto(const string &referencia, const string &tipo);
    string tipo;
    string produto;
    Referencia* referencia;
    int quantidade;
    bool isPointerNotNull(void * ptr);
public :
    Produto(const string &referencia, const string &tipo);
    ~Produto();
    string setProduto(string &produto);
    string getProduto();
    const string getTipo();
    void setTipo(const string &tipo);
    Referencia * getReferencia() const;
    int setReferencia(Referencia * referencia);
    void setQuantidade(int quantidade);
    int getQuantidade() const;

    bool operator == (const Produto& referencia) const;
    bool operator == (Referencia* rfr) const;
}
#endif //HEADERS_MODEL_PRODUTO_H
