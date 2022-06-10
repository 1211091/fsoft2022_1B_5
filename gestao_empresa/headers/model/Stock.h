//
// Created by luis_ on 08/06/2022.
//

#ifndef HEADERS_MODEL_STOCK_H
#define HEADERS_MODEL_STOCK_H

#include <string>
#include "Produto.h"

using namespace std;
class Stock:{
protected:
    Stock(Produto *produto);
    Produto* produto;
    int quantidade;
    bool isPointerNotNull(void * ptr);
    bool produto_existe(int quantidade)
public:

    Stock(Produto* produto);
    Stock(const Stock& obj);
    ~Stock();

    Produto* getProduto();
    void setProduto(Produto *produto);

    bool operator == (const Produto& produto) const;
    bool operator == (const Produto& tp) const;


    int getQuantidade() const;

    void setQuantidade(int quantidade);
};


#endif //HEADERS_MODEL_STOCK_H
