//
// Created by clara on 09/06/2022.
//

#ifndef HEADERS_MODEL_PRODUTOCONTAINER_H
#define HEADERS_MODEL_PRODUTOCONTAINER_H

#include "Produto.h"
#include <list>

class ProdutoContainer {
    private:
    list<Produto> produto;
    list<Produto> produtos;

public:
    list<Produto>getAll();
    Produto* getProduto(string referencia);

    void adicionarProduto(const Produto& re);
    void eliminarProduto(string&referencia);
    void atualizarProduto(string&referencia);
    list<Produto>::iterator procurarProduto(string&referencia);


}


#endif //HEADERS_MODEL_PRODUTOCONTAINER_H
