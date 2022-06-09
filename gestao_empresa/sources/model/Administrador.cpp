//
// Created by clara on 08/06/2022.
//

#include "Administrador.h"
#include "InformacaoInvalidaException.h"

bool Administrador::ValidacaoNome(const string& nome){
    if(nome.length() != 2){
        return false;
    }
    return true;
}

Administrador::Administrador(const string& nome) : Nome(nome){
    setNome(nome);
}

Administrador::Administrador(const Administrador &obj) : Nome(nome) {
    setNome(obj.nome);
}

Administrador::~Administrador(){

}

const string& Administrador::getNome() const {
    return nome;
}

void Administrador::setNome(const string &nome) {

    if(ValidacaoNome(nome)){
        this->nome = nome;
    }else{

        string msg = "Administrador: " + nome;
        throw InformacaoInvalidaException(msg);
    }
}

bool Administrador::operator == (const Administrador& obj) const{
    if(this->nome == obj.nome){
        return true;
    }
    return false;
}

bool Administrador::operator == (const string nome) const{
    if(this->nome == nome){
        return true;
    }
    return false;
}

