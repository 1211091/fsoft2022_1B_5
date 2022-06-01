//
// Created by clara on 01/06/2022.
//

#include <iostream>
#include "AdministradorView.h"
#include "Utils.h"
#include "InvalidDataException.h"
using namespace std;


Administrador AdministradorView::getAdministrador(){
    Administrador administrador ("Nome");
    bool flag = false;
    do{
        try{
            flag = false;
            cout<<"Administrador"<<endl;
            string name = Utils::getString("Name");
            instructor.setName(name);
        }catch(InformacaoInvalidaException& e){
            flag = true;
        }
    }while(flag == true);
    return administrador;
}
void AdministradorView::printAdministrador(Administrador *administrador) {
    cout << administrador->getName() << endl;
}

bool AdministradorView::adicionar(){

}
