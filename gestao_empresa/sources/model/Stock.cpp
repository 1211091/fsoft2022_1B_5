//
// Created by luis_ on 08/06/2022.
//

#include "Stock.h"
bool Stock::produto_existe(int qualidade){
    if(quantidade<0){
        bool resultado = false;
    }
    bool resultado=true;
    return resultado;
}
int Stock::Quantidade(int quantidade){
    if(produto_existe(quantidade)){
        this->quantidade = quantidade;
    }else{
        string str = "Quantidade de produto inválida"
    }
    this->quantidade = quantidade;
}
int getQuantidade(){
    return this->quantidade;
}
const string &getTipo(){
    return this->tipo;
}