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

    Produto produto;
    //Produto * tipo;
    string referencia;
    int quantidade;
    static bool isPointerNotNull(void * ptr);
    bool produto_existe(int quantidade);
    bool isReferenciaValid(const string& referencia);
public:
    Stock(Produto produto, int quantidade, Produto &tipo) ;
    Stock(const Stock &obj, Produto produto, Produto &tipo);
    ~Stock();


    void setQuantidade(int quantidade);
    int getQuantidade() const;

    Produto* getProduto() ;
    void setProduto(Produto *produto);

    Produto &tipo;
    Produto* getTipo();
    void setTipo(Produto *tipo);

    string getReferencia()const;
    void setReferencia(const string& referencia);

    bool operator == (const Stock& produto) const;
    bool operator == (Produto produto) const;
   // bool operator == (const Stock& obj) const;
    //bool operator == (string& referencia) const;


};


#endif //HEADERS_MODEL_STOCK_H
