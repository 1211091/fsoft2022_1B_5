//
// Created by luis_ on 08/06/2022.
//

#ifndef HEADERS_MODEL_STOCK_H
#define HEADERS_MODEL_STOCK_H

#include <string>
#include "Referencia.h"

using namespace std;
class Stock {
protected:
    Stock(Referencia &referencia);

    string tipo;
    int quantidade;
    Referencia * referencia;
public:
    int Quantidade( int &quantidade);
    int getQuantidade();
    int setQuantidade(int quantidade);
    Stock (string &tipo, Referencia *referencia);
    string Tipo( string &tipo);
    Referencia * getReferencia() const;
    void setReferencia(Referencia * referencia);
    string getTipo();
    void setTipo(string &tipo);
    bool produto_existe(int quantidade);

    bool operator == (const Stock& produto) const;
    bool operator == (string tp) const;

};


#endif //HEADERS_MODEL_STOCK_H
