//
// Created by luis_ on 08/06/2022.
//

#include "StockContainer.h"
#include "InformacaoDuplicadaException.h"
#include "InformacaoNaoExisteException.h"


int StockContainer::procurar(const Produto& produto){
    for (unsigned i=0; i<this->produtos.size(); ++i){
        if( this->produtos[i] == produto){
            return i;
        }
    }
    return -1;
}

list<Stock> StockContainer::getAll(){
    list<Stock> list;
    for (vector<Stock>::iterator it = this->produtos.begin(); it != this->produtos.end(); ++it){
        list.push_back(*it);
    }
    return list;
}

Stock* StockContainer::get(const Produto& referencia){
    Stock* Stock = NULL;
    int i = procurar(referencia);
    if(i != -1){
        Stock= &this->produtos[i];
    }
    return Stock;
}

void StockContainer::adicionarStock(const Stock& obj) {
    int i = procurar(obj.getReferencia());
    if(i == -1){
        this->produtos.push_back(obj);
    }else{
        string msg = "Stock: " + obj.getReferencia();
        throw InformacaoNaoExisteException(msg);
    }

}

void StockContainer::eliminarStock(const Produto& referencia){
    list<Produto*> listStock;
    int i = procurar(referencia);
    if(i != -1){
        listStock = this->produtos->getProduto();
        if(listStock.size() == 0 ){
            this->produtos.erase(this->produtos.begin() + i);
        }else{
            string msg = "Subject: " + referencia;
            throw InformacaoNaoExisteException(msg);

        }
    }
}

void StockContainer::atualizarStock(const int quantidade,const Produto& referencia){
    int i = procurar(referencia);
    if(i != -1){
        this->produtos[i].setQuantidade(quantidade);
    }
}

