//
// Created by babis on 6/9/2022.
//
#include "FuncionarioContainer.h"
#include "InformacaoDuplicadaException.h"
#include "InformacaoNaoExisteException.h"
#include <iostream>
bool Funcionario::operator == (const Funcionario& obj) const{
    if(this->nomeFuncionario == obj.nomeFuncionario){
        return true;
    }
    return false;
}
bool Funcionario::operator == (string nf) const{
    if(this->nomeFuncionario == nf){
        return true;
    }
    return false;
}
list<Funcionario>::iterator FuncionarioContainer::procurarFuncionario(string&nomeFuncionario, string&funcao){
    list<Funcionario>::iterator it = this->funcionarios.begin();
    for(it = this->funcionarios.begin(); it != this->funcionarios.end(); ++it){
        if((*it) == nomeFuncionario){
            return it;
        }
    }
    return it;
}

list<Funcionario> FuncionarioContainer::getAll(){
    list<Funcionario> lista(this->funcionarios);
    return lista;
}
void FuncionarioContainer::adicionarFuncionario(Funcionario nomeFuncionario, Funcionario funcao){
    string nomedoFuncionario =  nomeFuncionario.getNomeFuncionario();
    string funcaodofuncionario =  funcao.getFuncao();
    list<Funcionario>::iterator it = procurarFuncionario(nomedoFuncionario, funcaodofuncionario);
    if(it == this->funcionarios.end()){
        this->funcionarios.push_back(nomeFuncionario);
        this->funcionarios.push_back(funcao);
    }
}
void FuncionarioContainer::eliminarFuncionario(string&nomeFuncionario){
    list<Funcionario>::iterator it = procurarFuncionario(nomeFuncionario);
    if(it != this->funcionarios.end()){
        this->funcionarios.erase(it);
        cout <<"O cliente: "<<nomeFuncionario<<"foi removido" <<endl;
    }else{
        cout<<"O cliente"<<nomeFuncionario<<"nao existe"<<endl;
    }
}
void FuncionarioContainer::atualizar(string&nomeFuncionario, string&funcao){
    list<Funcionario>::iterator it = procurarFuncionario(nomeFuncionario);
    list<Funcionario>::iterator its = procurarFuncionario(funcao);
    if(it != this->funcionarios.end()){
        it->setNomeFuncionario(nomeFuncionario);
        its->setFuncao(funcao);

    }
}