//
// Created by clara on 01/06/2022.
//

#ifndef MAIN_CPP_ADMINISTRADORVIEW_H
#define MAIN_CPP_ADMINISTRADORVIEW_H

#include <list>
#include "Administrador.h"
class AdministradorView{
public:
    Administrador getAdministrador();
    void printAdministrador (Administrador *administrador);
    bool eliminar();
    bool adicionar();
};





#endif //MAIN_CPP_ADMINISTRADORVIEW_H
