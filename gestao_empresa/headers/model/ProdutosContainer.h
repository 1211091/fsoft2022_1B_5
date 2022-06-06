//
// Created by bilax on 01/06/2022.
//

#ifndef LASTTEST_LOG_PRODUTOSCONTAINER_H
#define LASTTEST_LOG_PRODUTOSCONTAINER_H

#include "Produtos.h"
#include <list>

class ProdutosContainer {
    private:
    list<Produtos> produtos;
    list<Produtos>::iterator procura(string referencia);

public:
    list<Produtos>getAll (string tipo);
    Produtos* get(string tipo);
};


#endif //LASTTEST_LOG_PRODUTOSCONTAINER_H
