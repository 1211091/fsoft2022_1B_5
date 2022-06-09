//
// Created by luis_ on 06/06/2022.
//
#include "ProdutoContainer.h"
#include "Referencia.h"

list<Produto>:: iterator ProdutoContainer::procurar(string referencia) {
    list<Produto>::iterator it= this->produtos.begin();
    for(it = this->produtos.begin(); it != this->produtos.end();++it){
        if((*it)== referencia){
            return
        }
    }

}







void ProdutoContainer::adicionarProduto(const Produto & obj){
        string referencia= obj.getReferencia();
        list<Produto>::iterator it= procurar(referencia);
        if(it == this->produto.end()){
            this->produto.push_back(obj); // acrescenta o funcionario para o fim da lista

}
void ProdutoContainer::eliminarProduto(string&nome){
    list<Produto>::iterator it=procurar(string referencia);
    if(it!= this->produto.end()){
        this->produto.erase(it);
        cout<<"Produto com referencia:" <<to_string(referencia)<<"removido"<<endl;

    }else{
        cout<<"Produto com referencia:" <<to_string(referencia)<<"não existe"<<endl;
    }


}
void ProdutoContainer::atualizarProduto(string&nome, int&numero){
    list<Produto>::iterator it=procurar(string referencia);


}
