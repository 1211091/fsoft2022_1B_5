//
// Created by luis_ on 08/06/2022.
//

#include "Stock.h"

bool Stock::produto_existe(int quantidade){
    if(quantidade<0){
        bool resultado = false;
    }
    bool resultado=true;
    return resultado;
}
int Stock::setQuantidade(int quantidade){
    if(produto_existe(quantidade)){
        this->quantidade = quantidade;
    }else{
        string str = "Quantidade de produto inválida";

    }
    this->quantidade = quantidade;
}
int Stock::getQuantidade(){
    return quantidade;
}

void Stock::setTipo( string &tipo){
    this->tipo = tipo;
}

string Stock::getTipo(){
    return tipo;
}

Stock::Stock (string &tipo, Referencia *referencia) {
    this->setReferencia(referencia);
    this->setTipo(tipo);
}

Referencia* Stock::getReferencia() const {
    return referencia;
}