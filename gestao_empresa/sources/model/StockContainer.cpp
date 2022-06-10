//
// Created by luis_ on 08/06/2022.
//

#include "StockContainer.h"
#include "InformacaoDuplicadaException.h"
#include "InformacaoNaoExisteException.h"
#include "Stock.h"


int StockContainer::procurar(const string &produto){
    for (unsigned int i=0; i<this->produtos.size(); ++i){
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

vector<Stock> StockContainer::get(const string& referencia){
    Stock*subject = NULL;
    int i = procurar(referencia);
    if(i != -1){
        subject= &this->produtos[i];
    }
    return produtos;
}

void StockContainer::adicionarStock(Stock obj) {
    int i = procurar(obj.getTipo());
    if(i == -1){
        this->produtos.push_back(obj);
    }else{
        string msg = "Stock: " + obj.getTipo();
        throw InformacaoNaoExisteException(msg);
    }

}

void StockContainer::removerStock(const string& referencia){
    vector<Stock>::iterator it = procurar(referencia);
    if(it != this->produtos.end()){
        this->produtos.erase(it);
    }
}
void StockContainer::atualizarStock(const int quantidade, const string& referencia){
    int i = procurar(referencia);
    if(i != -1){
        this->produtos[i].setQuantidade(quantidade);
    }
}

