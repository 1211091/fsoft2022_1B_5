//
// Created by luis_ on 08/06/2022.
//

#include "StockContainer.h"
#include "InformacaoDuplicadaException.h"
#include "InformacaoNaoExisteException.h"

bool Stock::operator == (const Stock& obj) const{
    if(this->tipo == obj.tipo){
        return true;
    }
    return false;
}
bool Stock::operator == (string tp) const{
    if(this->tipo == tp){
        return true;
    }
    return false;
}
int StockContainer::procurar(const string &produto){
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

vector<Stock> StockContainer::get(const string& initials){
    Stock*subject = NULL;
    int i = procurar(initials);
    if(i != -1){
        subject= &this->produtos[i];
    }
    return produtos;
}

void StockContainer::adicionar(Stock obj) {
    int i = procurar(obj.getTipo());
    if(i == -1){
        this->produtos.push_back(obj);
    }else{
        string msg = "Stock: " + obj.getTipo();
        throw InformacaoNaoExisteException(msg);
    }

}

void StockContainer::remover(const string& tipo){
    list<Stock *> listEnrolls;
    bool exist;
    int i = procurar(tipo);
    if(i != -1){
        listEnrolls = this->->getStudents(initials);
        exist = this->instructors->isThereSubject(initials);
        if(listEnrolls.size() == 0 && exist==false){
            this->subjects.erase(this->subjects.begin() + i);
        }else{
            string msg = "Subject: " + initials;
            throw DataConsistencyException(msg);

        }
    }
}