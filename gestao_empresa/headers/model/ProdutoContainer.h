//
// Created by bilax on 01/06/2022.
//

#ifndef HEADERS_MODEL_PRODUTOCONTAINER_H
#define HEADERS_MODEL_PRODUTOCONTAINER_H

#include "Produto.h"
#include <list>

class ProdutoContainer {
    private:
    list<Produto> produto;
    list<Produto> produtos;
    list<Produto>::iterator procurar(string referencia);
public:
    list<Produto>getAll (string tipo);
    Produto* get(string tipo);
    void adicionarProduto(string&produto);
    void eliminarProduto(string&nome);
    void atualizarProduto(string&nome, int&numero);

};


#endif //HEADERS_MODEL_PRODUTOCONTAINER_H
