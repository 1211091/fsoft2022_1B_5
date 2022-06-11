//
// Created by clara on 09/06/2022.
//

#ifndef HEADERS_MODEL_PRODUTOCONTAINER_H
#define HEADERS_MODEL_PRODUTOCONTAINER_H

#include "Produto.h"
#include <list>

class ProdutoContainer {
protected:
    ProdutoContainer* produto;
    list<Produto> produtos;
    list<Produto>::iterator procurarProduto(string& referencia);
public:
    list<Produto>getAll();
    Produto* get(string& referencia);
    void adicionarProduto(Produto& obj);
    void eliminarProduto(string& referencia);
    void atualizarProduto(string& referencia, string& tipo);



};


#endif //HEADERS_MODEL_PRODUTOCONTAINER_H
