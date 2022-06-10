//
// Created by clara on 09/06/2022.
//

#ifndef HEADERS_MODEL_PRODUTOCONTAINER_H
#define HEADERS_MODEL_PRODUTOCONTAINER_H
#include "Stock.h"
#include "Referencia.h"
#include "Produto.h"
#include <list>

class ProdutoContainer {
    protected:
    ProdutoContainer* produto;
    list<Produto> produtos;
    list<Produto>::iterator procurarProduto(string& referencia);
public:
    list<Produto>getAll();
    void adicionarProduto(const Produto& obj);
    void eliminarProduto(string& referencia);
    void atualizarProduto(string& referencia, string& tipo);
    Produto* getProduto(Produto& referencia, Produto &tipo);

}


#endif //HEADERS_MODEL_PRODUTOCONTAINER_H
