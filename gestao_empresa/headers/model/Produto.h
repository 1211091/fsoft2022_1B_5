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
    int quantidadevendida=0;
    static int Numero;
    int numeroproduto;
    bool isPointerNotNull(void * ptr);
    string referencia;
    static bool isReferenciaValid(const string& referencia);
public :
    Produto(const string &referencia, const string &tipo, int &quantidade);
    Produto(const Produto& produto);
    ~Produto();
    string setProduto(string &produto);

    void setQuantidade(int quantidade);
    int getQuantidade() const;
    int getQuantidadeVendida();
    int getNumeroProduto();
    void setQuantidadeVendida(int q);
    const string& getTipo() const;
    void setTipo(const string &tipo);

    const string &getReferencia() const;
    void setReferencia(const string &referencia);

    bool operator == (int numeroproduto) const;
    //bool operator == (string rfr) const;
};
#endif //HEADERS_MODEL_PRODUTO_H
