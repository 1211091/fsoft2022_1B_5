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
    string tipo;

public:
    list<Produto>getAll();
    void adicionarProduto(Produto referencia1);
    void eliminarProduto(const string& referencia);
    void atualizarProduto(const string& referencia, const string &tipo);
<<<<<<< HEAD
    list<Produto>::iterator procurarProduto(Produto referencia);
=======
    list<Produto>::iterator procurarProduto(const string&referencia);
>>>>>>> 8ecce03757338d7c25649082cac7c1187621c50e
    void setReferencia(const string &referencia);
    void setTipo(const string &tipo);
    Produto* getProduto(string referencia,const string &tipo);

}


#endif //HEADERS_MODEL_PRODUTOCONTAINER_H
