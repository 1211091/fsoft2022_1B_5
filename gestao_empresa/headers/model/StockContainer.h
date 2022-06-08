//
// Created by luis_ on 08/06/2022.
//

#ifndef HEADERS_MODEL_STOCKCONTAINER_H
#define HEADERS_MODEL_STOCKCONTAINER_H

#include <vector>
#include <list>
#include "Stock.h"
#include "ProdutoContainer.h"
using namespace std;

class StockContainer{
private:
    vector<Stock> produtos;
    ProdutoContainer *produto;
    int procurar(const string& produto);
public:
    list<Stock> getAll();
    Stock* get(const string& produto);
    void adicionar(const Stock& obj);
    void remover(const string& produto);
    void atualizar(const string& produto);

};


#endif //HEADERS_MODEL_STOCKCONTAINER_H
