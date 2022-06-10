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
    int procurar(Produto produto);
public:
    list<Stock> getAll();
    Stock* get( Produto& referencia);
    void eliminarStock(Produto& produto);
    void atualizarStock(const int quantidade,Produto& referencia);
    void adicionarStock(Stock produto);

};

#endif //HEADERS_MODEL_STOCKCONTAINER_H
