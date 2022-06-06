//
// Created by clara on 01/06/2022.
//

#ifndef HEADERS_VIEWS_PRODUTOSVIEW_H
#define HEADERS_VIEWS_PRODUTOSVIEW_H
#include "Produtos.h"

class ProdutosView{
public:

    Produtos getProdutos();
    Referencia getReferencia();
    void printProdutos(Produtos *produtos);
    void printReferencia(Referencia *produtos);

};
#endif //HEADERS_VIEWS_PRODUTOSVIEW_H
