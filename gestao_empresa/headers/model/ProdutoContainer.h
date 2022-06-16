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
    list<Produto>::iterator procurarProduto(int &numeroproduto);
public:
    list<Produto>getAll();
    Produto* get(int numeroproduto);
    void adicionarProduto(Produto& obj);
    void venderProduto(int numeroproduto, int quantidade);
    void atualizarProduto(string& referencia, string& tipo, int quantidade, int numeroproduto);
    void atualizarQuantidade(int numeroproduto, int q);

};


#endif //HEADERS_MODEL_PRODUTOCONTAINER_H
