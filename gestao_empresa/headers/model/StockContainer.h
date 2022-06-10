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
    int procurar(const Produto& produto);
public:
    list<Stock> getAll();
    Stock* get(const Produto& referencia);
    void eliminarStock(const Produto& referencia);
    void atualizarStock(const int quantidade,const Produto& referencia);
    void adicionarStock(const Stock& obj);

};

#endif //HEADERS_MODEL_STOCKCONTAINER_H
