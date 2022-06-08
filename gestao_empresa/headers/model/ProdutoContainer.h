//
// Created by bilax on 01/06/2022.
//

#ifndef HEADERS_MODEL_PRODUTOCONTAINER_H
#define HEADERS_MODEL_PRODUTOCONTAINER_H

#include "Produto.h"
#include <list>

class ProdutoContainer {
    private:
<<<<<<< HEAD
    list<Produto> produto;
=======
    list<Produto> produtos;
>>>>>>> 78c571fbabf16a6d13223f60a102a8365c22cbe9
    list<Produto>::iterator procura(string referencia);

public:
    list<Produto>getAll (string tipo);
    Produto* get(string tipo);
};


#endif //HEADERS_MODEL_PRODUTOCONTAINER_H
