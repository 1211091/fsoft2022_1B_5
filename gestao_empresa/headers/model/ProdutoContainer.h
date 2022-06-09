//
// Created by clara on 09/06/2022.
//

#ifndef HEADERS_MODEL_PRODUTOCONTAINER_H
#define HEADERS_MODEL_PRODUTOCONTAINER_H
#include "Stock.h"
#include "Produto.h"
#include <list>

class ProdutoContainer {
    protected:
    list<Produto> produto;
    list<Produto> produtos;
    string referencia;
    string tipo;

public:
    list<Produto>getAll();
    void adicionarProduto(Produto referencia1);
    void eliminarProduto(const string& referencia);
    void atualizarProduto(string& referencia, string &tipo);
    Produto* getProduto(string referencia,const string &tipo);

}


#endif //HEADERS_MODEL_PRODUTOCONTAINER_H
