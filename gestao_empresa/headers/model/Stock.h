//
// Created by luis_ on 08/06/2022.
//

#ifndef HEADERS_MODEL_STOCK_H
#define HEADERS_MODEL_STOCK_H

#include <string>
#include "Produto.h"

using namespace std;
class Stock {
protected:
    Stock(Referencia &referencia);
    Produto * produto;
    bool isPointerNotNull(void * ptr);
public:
    Stock(Produto * tipo, Produto *referencia);
    Stock(const Stock& obj);
    ~Stock();
    Produto * getTipo() const;
    int setTipo(Produto *tipo);
    Referencia * getReferencia() const;
    int setReferencia(Produto * referencia);
    bool produto_existe(int quantidade);

    bool operator == (const Stock& produto) const;
    bool operator == (const Produto& tp) const;


};


#endif //HEADERS_MODEL_STOCK_H
