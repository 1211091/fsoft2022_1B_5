//
// Created by bilax on 01/06/2022.
//

#ifndef HEADERS_MODEL_PRODUTOCONTAINER_H
#define HEADERS_MODEL_PRODUTOCONTAINER_H

#include "Produto.h"
#include <list>

class ProdutoContainer {
    private:
    list<Produto> produtos;
    list<Produto>::iterator procura(string referencia);

public:
    list<Produto>getAll (string tipo);
    Produto* get(string tipo);
};


#endif //HEADERS_MODEL_PRODUTOCONTAINER_H
