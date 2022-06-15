//
// Created by clara on 01/06/2022.
//

#ifndef HEADERS_VIEWS_PRODUTOVIEW_H
#define HEADERS_VIEWS_PRODUTOVIEW_H
#include "Produto.h"
#include <list>

class ProdutoView{
public:
    Produto getProduto();
    void printProduto(Produto *produto);
    void printProdutos(list<Produto> &produtos);


};
#endif //HEADERS_VIEWS_PRODUTOVIEW_H
