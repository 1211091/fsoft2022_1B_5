//
// Created by clara on 01/06/2022.
//

#ifndef MAIN_CPP_PRODUTOSVIEW_H
#define MAIN_CPP_PRODUTOSVIEW_H
#include "Produtos.h"

class ProdutosView{
public:

    Produto getProdutos();
    Referencia getReferencia();
    void printProdutos(Produtos *produtos);
    void printReferencia(Referencia *produtos);

};
#endif //MAIN_CPP_PRODUTOSVIEW_H
