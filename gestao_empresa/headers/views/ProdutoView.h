//
// Created by clara on 01/06/2022.
//

#ifndef HEADERS_VIEWS_PRODUTOVIEW_H
#define HEADERS_VIEWS_PRODUTOVIEW_H
#include "Produto.h"

class ProdutoView{
public:

    Produto getProdutos();
    Produto getReferencia();
    void printProdutos(Produto *produtos);
    void printReferencia(Produto *produtos);

};
#endif //HEADERS_VIEWS_PRODUTOVIEW_H
