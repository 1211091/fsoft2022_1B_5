//
// Created by luis_ on 08/06/2022.
//

#ifndef HEADERS_MODEL_STOCK_H
#define HEADERS_MODEL_STOCK_H

#include <string>
#include "Produto.h"

using namespace std;
class Stock{
protected:
    Produto produto{};
    Produto* tipo{};
    string referencia;
    Stock quantidade;
    bool isPointerNotNull(void * ptr);
    bool produto_existe(int quantidade);
    bool isReferenciaValid(const string& referencia);
public:

    Stock(Produto* produto, Produto* tipo, int quantidade);
    Stock(const Stock& obj);
    ~Stock();


    void setQuantidade(Stock quantidade);
    static Stock getQuantidade() const;
    Produto getProduto() ;


    void setProduto(Produto *produto);
    Produto* getTipo();
    Produto* setTipo(Produto *tipo);
    string getReferencia()const;
    void setReferencia(const string& referencia);
    bool operator == (const Stock& produto) const;

    bool operator == (Produto produto) const;
    bool operator == (const Stock& obj) const;
    bool operator == (string& referencia) const;


};


#endif //HEADERS_MODEL_STOCK_H
