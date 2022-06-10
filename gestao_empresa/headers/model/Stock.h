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
    Produto* produto;
    Produto* tipo;
    string referencia;
    int quantidade;
    bool isPointerNotNull(void * ptr);
    bool produto_existe(int quantidade);
    static bool isReferenciaValid(const string& referencia);
public:

    Stock(Produto* produto);
    Stock(const Stock& obj);
    ~Stock();
<<<<<<< HEAD
    void setQuantidade(int quantidade);
    int getQuantidade() const;
    const Produto getProduto() const;
=======

    Produto* getProduto();
>>>>>>> 68e3fbe30ddf5bb45d32d03f2f3b246512b46d38
    void setProduto(Produto *produto);
    Produto* getTipo();
    Produto* setTipo(Produto *tipo);
    string getReferencia()const;
    void setReferencia(const string& referencia);


    bool operator == (const Stock& produto) const;
    bool operator == (const Produto& tp) const;


<<<<<<< HEAD
    Stock(Produto *produto);
=======
    int getQuantidade() const;

    void setQuantidade(int quantidade);
>>>>>>> 68e3fbe30ddf5bb45d32d03f2f3b246512b46d38
};


#endif //HEADERS_MODEL_STOCK_H
