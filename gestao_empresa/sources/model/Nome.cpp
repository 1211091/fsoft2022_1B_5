//
// Created by bilax on 06/06/2022.
//

#include "Nome.h"
#include "InformacaoInvalidaException.h"



bool Nome::ValidacaoNome(const string& nome) {

    if (nome.length() < 2) {
        return false;
    }
    return true;
}

Nome::Nome(const string& nome){
    setNome(nome);
}

void Nome::setNome(const string &nome){
    if(ValidacaoNome(nome)){
        this->nome=nome;
    }else{
        string msg="Nome "+nome;
    throw InformacaoInvalidaException(msg);
    }
}

string Nome::getNome() {
    return this->nome;
}


