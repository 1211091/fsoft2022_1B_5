//
// Created by clara on 01/06/2022.
//

#ifndef HEADERS_VIEWS_PRODUTOVIEW_H
#define HEADERS_VIEWS_PRODUTOVIEW_H
#include "Produto.h"
#include "Referencia.h"

class ProdutoView{
public:
    string referencia;
    Produto getProduto();
    Referencia getReferencia();
    string printProdutos(Produto *produto, Referencia *referencias);

};
#endif //HEADERS_VIEWS_PRODUTOVIEW_H
