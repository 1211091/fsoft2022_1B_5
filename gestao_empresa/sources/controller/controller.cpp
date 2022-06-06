//
// Created by babis on 6/6/2022.
//

#include <iostream>
#include <string>
#include "controllers.h"
#include "Utils.h"
#include "InformacaoNaoExisteException.h"
using namespace std;

Controller::Controller(Empresa& empresa){
    this->model = empresa;
}

void Controller::run(){
    int opcao = -1;
    do{
        opcao = this -> view.menuEmpresa();
        switch(opcao){
            case 1:runAdministrador();
            break;
            case 2: runFuncionario();
            break;
            case3: runCliente();
            break;
            case 4: runStock();
            break;
            case 5: runProdutos();
            break;
            default:
                break;
        }
    }while(opcao!=0);
}
void Controller::runAdministrador(){
    int opcao=-1;
    do{
        opcao = this->view.menuAdministrador();
        switch(opcao){
            case 1:
            {
                Administrador administrador = this->administradorView.getAdministrador();
                AdministradorContainer& container = this->model.getAdministradorContainer();
                break;
            }
            case 2:
            {
                cout<<this->model.getNome()<<endl;
                AdministradorContainer container = this-> model.getAdministradorContainer();
                this->administradorView.printAdministrador(administrador);
                break;
            }
            default:
                break;
        }
    }while(opcao!=0);
}

void Controller::runFuncionario(){
    int opcao=-1;
    switch(opcao){
        case 1:
        {
            Funcioanrio funcionario = this->funcioanrioView.getFuncionario();
            FuncionarioContainer& container = this->model.getFuncionarioContainer();
            container.adicionar(funcionario);
            break;
        }
        case 2:
            
    }
}