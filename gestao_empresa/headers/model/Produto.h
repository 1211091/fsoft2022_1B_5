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
    void setInformacaoNaoExisteException();
public :
    Produto(const string &referencia, const string &tipo);
    ~Produto();
    string setProduto(string &produto);
    string getProduto();
    const string getTipo();
    void setTipo(const string &tipo);
<<<<<<< HEAD
    string Referencia();
    string Referencia(const string& referencia);
    const string getReferencia();
    void setReferencia(const string &referencia);
    int Quantidade(int quantidade);
=======
    Referencia * getReferencia() const;
    int setReferencia(Referencia * referencia);
>>>>>>> 6ef8af651b89fbb327dc85c78a425ec2f3634295
    void setQuantidade(int quantidade);
    int getQuantidade() const;

    bool operator == (const Produto& referencia) const;
    bool operator == (string rfr) const;
}
#endif //HEADERS_MODEL_PRODUTO_H
