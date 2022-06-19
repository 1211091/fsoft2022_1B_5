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
    string referencia;
    bool ReferenciaValida(const string& referencia);
    bool TipoValido(const string& tipo);
    bool QuantidadeValida(const int& quantidade);
public :
    Produto(const string &referencia, const string &tipo,const int &quantidade);
    Produto(const Produto &produto);
    ~Produto();

    void setQuantidade(int quantidade);
    int getQuantidade() const;
    int getQuantidadeVendida() const;
    int getNumeroProduto() const;
    void setQuantidadeVendida(int q);
    const string& getTipo() const;
    void setTipo(const string &tipo);


    const string &getReferencia() const;
    void setReferencia(const string &referencia);

    bool operator == (int numeroproduto) const;

};
#endif //HEADERS_MODEL_PRODUTO_H
