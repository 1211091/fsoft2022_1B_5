//
// Created by bilax on 01/06/2022.
//

#ifndef HEADERS_MODEL_PRODUTOCONTAINER_H
#define HEADERS_MODEL_PRODUTOCONTAINER_H

#include "Produto.h"
#include <list>

class ProdutoContainer {
    private:
    list<Produtos> produtos;
    list<Produtos>::iterator procura(string referencia);

public:
    list<Produtos>getAll (string tipo);
    Produtos* get(string tipo);
};


#endif //HEADERS_MODEL_PRODUTOCONTAINER_H
