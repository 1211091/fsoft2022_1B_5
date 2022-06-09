//
// Created by clara on 09/06/2022.
//

#ifndef HEADERS_MODEL_PRODUTOCONTAINER_H
#define HEADERS_MODEL_PRODUTOCONTAINER_H

#include "Produto.h"
#include <list>

class ProdutoContainer {
    private:
    list<Produto> produto;
    list<Produto> produtos;
    string referencia;
    string tipo;

public:
    list<Produto>getAll();
    void adicionarProduto(Produto referencia1);
    void eliminarProduto(const string& referencia);
    void atualizarProduto(const string& referencia, const string &tipo);
    list<Produto>::iterator procurarProduto(Produto referencia);
    void setReferencia(const string &referencia);
    void setTipo(const string &tipo);

}


#endif //HEADERS_MODEL_PRODUTOCONTAINER_H
