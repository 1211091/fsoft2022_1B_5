//
// Created by clara on 01/06/2022.
//

#ifndef HEADERS_VIEWS_PRODUTOVIEW_H
#define HEADERS_VIEWS_PRODUTOVIEW_H
#include "Produto.h"

class ProdutoView{
public:
    string referencia;
    Produto getProduto();
    Produto getReferencia();
    string printProdutos(Produto *produto, Produto *referencias);

};
#endif //HEADERS_VIEWS_PRODUTOVIEW_H
