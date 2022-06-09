//
// Created by clara on 09/06/2022.
//
#include "ProdutoContainer.h"
#include "Referencia.h"

list<Produto>:: iterator ProdutoContainer::procurarProduto(string&referencia) {
    list<Produto>::iterator it= this->produtos.begin();
    for(it = this->produtos.begin(); it != this->produtos.end();++it){
        if((*it)== referencia){
            return it;
        }
    }
    return it;
}

list<Produto> ProdutoContainer::getAll(){
    list<Produto> lista(this->produtos);
    return lista;
}

void ProdutoContainer::adicionarProduto(const Produto & referencia){
        string referencia1= referencia.getReferencia();
        list<Produto>::iterator it= procurarProduto(referencia);
        if(it == this->produto.end()){
            this->produto.push_back(referencia); // acrescenta o funcionario para o fim da lista

}
void ProdutoContainer::eliminarProduto(const string& referencia){
    list<Produto>::iterator it = procurarProduto( referencia);
    if (it != this->produto.end()) {
        this->produto.erase(it);
        cout << "Produto com referencia:" << to_string(referencia) << "removido" << endl;

    } else {
        cout << "Produto com referencia:" << to_string(referencia) << "não existe" << endl;
    }

}
void atualizarProduto(const string& referencia){
    list<Produto>:: iterator it = procurarProduto(referencia);
    if( it!= this->produtos.end()){
        it->setProduto
    }
        }


}

