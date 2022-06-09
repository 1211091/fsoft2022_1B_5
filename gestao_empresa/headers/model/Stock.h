//
// Created by luis_ on 08/06/2022.
//

#ifndef HEADERS_MODEL_STOCK_H
#define HEADERS_MODEL_STOCK_H

#include <string>

using namespace std;
class Stock {
protected:
    string tipo;
    int quantidade;
    string referencia;
public:
    int Quantidade(int quantidade);
    int getQuantidade();
    void setQuantidade(const string &quantidade);
    Stock(const string &tipo, const string &referencia);
    string Tipo(const string &tipo);
    const string &getTipo();
    void setTipo(const string &tipo);
    bool produto_existe(int quantidade);

    bool operator == (const Stock& produto) const;
    bool operator == (string tp) const;

};


#endif //HEADERS_MODEL_STOCK_H
