//
// Created by clara on 09/06/2022.
//

#ifndef HEADERS_MODEL_PRODUTOCONTAINER_H
#define HEADERS_MODEL_PRODUTOCONTAINER_H
#include "Stock.h"
#include "Produto.h"
#include <list>

class ProdutoContainer {
    private:
    list<Produto> produto;
    list<Produto> produtos;
    string referencia;

public:
    list<Produto>getAll();
    void adicionarProduto(const Produto& referencia1);
    void eliminarProduto(const string& referencia);
    void atualizarProduto(const string& referencia, const string &tipo);
    list<Produto>::iterator procurarProduto(const string&referencia);
    void setReferencia(const string &referencia);
    void setTipo(const string &tipo);
    Produto* getProduto(string referencia,const string &tipo);

}


#endif //HEADERS_MODEL_PRODUTOCONTAINER_H
