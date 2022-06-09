//
// Created by luis_ on 08/06/2022.
//

#ifndef HEADERS_MODEL_STOCKCONTAINER_H
#define HEADERS_MODEL_STOCKCONTAINER_H

#include <vector>
#include <list>
#include "Stock.h"
#include "Referencia.h"
#include "ProdutoContainer.h"
using namespace std;

class StockContainer{
private:
    vector<Stock> produtos;
    ProdutoContainer *produto;
    int procurar(const string& referencia);
public:
    list<Stock> getAll();
    vector<Stock> get(const string& referencia);
    void eliminar(const string& referencia);
    void atualizar(const string& quantidade);

    void adicionar(Stock obj);
};

#endif //HEADERS_MODEL_STOCKCONTAINER_H
