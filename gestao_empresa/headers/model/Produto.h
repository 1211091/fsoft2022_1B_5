//
// Created by bilax on 01/06/2022.
//

#ifndef HEADERS_MODEL_PRODUTO_H
#define HEADERS_MODEL_PRODUTO_H
#include <string>
using namespace std;

class Produto{
protected:
    string tipo;
    string produto;
    int quantidade;
    bool isPointerNotNull(void * ptr);
    string referencia;
    static bool isReferenciaValid(const string& referencia);
public :
    Produto(const string &referencia, const string &tipo, int &quantidade);
    Produto(const Produto& produto);
    ~Produto();
    string setProduto(string &produto);
    string getProduto();

    void setQuantidade(int quantidade);
    int getQuantidade() const;

    const string& getTipo() const;
    void setTipo(const string &tipo);

    const string &getReferencia() const;
    void setReferencia(const string &referencia);

    bool operator == (string &referencia) const;
    //bool operator == (string rfr) const;
};
#endif //HEADERS_MODEL_PRODUTO_H
