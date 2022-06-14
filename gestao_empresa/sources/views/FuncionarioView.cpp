//
// Created by babis on 6/1/2022.
//
#include <iostream>
#include "FuncionarioView.h"
#include "Utils.h"
#include "InformacaoInvalidaException.h"
#include "Funcionario.h"
using namespace std;

Funcionario FuncionarioView::getFuncionario(){
    Funcionario funcionario ("Nome" , "Funcao");
    bool flag = false;
    do{
        try{
            flag = false;
            cout<<"Funcionario"<<endl;
            string nome = Utils::getString("Nome");
            funcionario.setNomeFuncionario(nome);
            string funcao = Utils::getString("Funcao");
            funcionario.setFuncao(funcao);
        }catch(InformacaoInvalidaException& e){
            flag = true;
        }
    }while(flag == true);
    return funcionario;
}
void FuncionarioView::printFuncionario(Funcionario *funcionario) {
    cout << funcionario->getNomeFuncionario() <<" - " <<funcionario->getFuncao()<< endl;
}
void FuncionarioView::printFuncionarios(list<Funcionario>& funcionarios){
    for (list<Funcionario>::iterator it=funcionarios.begin(); it != funcionarios.end(); ++it){
        printFuncionario(&*it);
    }
}
