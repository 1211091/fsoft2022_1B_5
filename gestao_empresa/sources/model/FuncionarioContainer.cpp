//
// Created by babis on 6/9/2022.
//
#include "FuncionarioContainer.h"
#include "InformacaoDuplicadaException.h"
#include "InformacaoNaoExisteException.h"
#include <iostream>

list<Funcionario>::iterator FuncionarioContainer::procurarFuncionario(string&nomeFuncionario){
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
void FuncionarioContainer::adicionarFuncionario(const Cliente& nomeFuncionario){
    string nomedoFuncionario = nomeFuncionario.getCliente();
    list<Cliente>::iterator it = procurarFuncionario(nomeFuncionario);
    if(it == this->funcionarios.end()){
        this->funcionarios.push_back(nomeFuncionario);
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
        it->setNome(nomeFuncionario);
        its->setNome(funcao);

    }
}