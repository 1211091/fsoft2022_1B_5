//
// Created by luis_ on 06/06/2022.
//
#include "ClienteContainer.h"
#include "InformacaoDuplicadaExpection.h"
#include <string>
#include <tuple>
using namespace std;

list<Cliente>::iterator ClienteContainer::procura(string nomeLoja){
    list<Cliente>::iterator str = this->clientes.begin();
    for(str != this->clientes.end();it++){
        if(str.compare(nomeLoja)!= 0){
        return str; }
    }
    return str;
}
list<CLiente> ClienteContainer::getAll(){
    list<Cliente> novalist(this-> clientes);
    return novalist;
}
list<Cliente>::iterator ClienteContainer procura(string nomeLoja){
    list<Cliente>::iterator string str
}
Cliente* ClienteContainer::get(string nomeLoja){
    list<CLiente>::iterator str= procura(nomeLoja);
    if(str != this-> clientes.end()){
        return &(*it);
    }
    return NULL;
}
void ClienteContainer:: adicionarCliente(const Cliente& obj){
    list<Cliente>::iterator str= procura(obj.getNome());
    if (str== this->clientes.end()) {
        this->clientes.push_back(obj);
    }else{ string msg = "Cliente: " + str;
        throw InformacaoDuplicadaExpection(msg);
    }
}
void ClienteContainer::removerCliente(const string nomeLoja){
    list<Cliente> ::iterator str =procura(nomeLoja);
    if(str!= this-> students.end()){
        if(str,size()==0){
            this-> Cliente.erase(str);

        }else {
            string msg="Cliente: " + str;
        throw InformacaoNaoExisteExpection(msg);
        }
    }

}