//
// Created by clara on 01/06/2022.
//

#ifndef HEADERS_VIEWS_PRODUTOVIEW_H
#define HEADERS_VIEWS_PRODUTOVIEW_H
#include "Produto.h"
#include "Referencia.h"

class ProdutoView{
public:

    Produto getProduto();
    Referencia getReferencia();
    void printProduto(Produto *produtos);
    void printReferencia(Referencia *produtos);
    Produto getReferencia();

};
#endif //HEADERS_VIEWS_PRODUTOVIEW_H
