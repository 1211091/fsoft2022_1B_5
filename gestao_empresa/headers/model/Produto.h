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
    int quantidade;
    bool isPointerNotNull(void * ptr);
    string referencia;
    static bool isReferenciaValid(const string& referencia);
public :
    Produto(const string &referencia, const string &tipo);
    ~Produto();
    string setProduto(string &produto);
    string getProduto();
    const string getTipo();
    void setTipo(const string &tipo);
    string Referencia(const string& referencia);
    const string getReferencia();
    void setReferencia(const string &referencia);
    int Quantidade(int quantidade);
    Referencia * getReferencia() const;
    int setReferencia(Referencia * referencia);
    void setQuantidade(int quantidade);
    const static Stock getQuantidade() const;

    bool operator == (const Produto& referencia) const;
    bool operator == (string rfr) const;
}
#endif //HEADERS_MODEL_PRODUTO_H
