//
// Created by luis_ on 08/06/2022.
//

#ifndef HEADERS_MODEL_STOCK_H
#define HEADERS_MODEL_STOCK_H

#include <string>
#include "Referencia.h"
#include "Produto.h"

using namespace std;
class Stock {
protected:
    Stock(Referencia &referencia);
    Produto * tipo;
    int quantidade;
    Referencia * referencia;
    bool isPointerNotNull(void * ptr);
public:
    int getQuantidade();
    int setQuantidade(int quantidade);
    Stock (Produto * tipo, Referencia *referencia);
    Stock (const Stock& obj);
    Produto* getTipo();
    int setTipo(Produto *tipo);
    Referencia * getReferencia() const;
    int setReferencia(Referencia * referencia);
    bool produto_existe(int quantidade);

    bool operator == (const Stock& produto) const;
    bool operator == (Produto* tp) const;


};


#endif //HEADERS_MODEL_STOCK_H
