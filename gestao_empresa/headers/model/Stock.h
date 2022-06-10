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
    bool isReferenciaValid(const string& referencia);
public:

    Stock(Produto* produto);
    Stock(const Stock& obj);
    ~Stock();
<<<<<<< HEAD

    void setQuantidade(int quantidade);
    int getQuantidade() const;
    const Produto getProduto() ;

=======
    void setQuantidade(int quantidade);
    int getQuantidade() const;
    const Produto getProduto() const;
    Produto* getProduto();
>>>>>>> a8ded7e98bb1d888d75a8bbe2b9f65a449f0c226
    void setProduto(Produto *produto);
    Produto* getTipo();
    Produto* setTipo(Produto *tipo);
    string getReferencia()const;
    void setReferencia(const string& referencia);
    bool operator == (const Stock& produto) const;
<<<<<<< HEAD


    Stock(Produto *produto);

=======
    bool operator == (const Produto& tp) const;
    Stock(Produto *produto);
>>>>>>> a8ded7e98bb1d888d75a8bbe2b9f65a449f0c226
    int getQuantidade() const;
    void setQuantidade(int quantidade);
<<<<<<< HEAD

=======
>>>>>>> a8ded7e98bb1d888d75a8bbe2b9f65a449f0c226
};


#endif //HEADERS_MODEL_STOCK_H
