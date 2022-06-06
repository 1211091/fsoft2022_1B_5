//
// Created by clara on 01/06/2022.
//

#ifndef HEADERS_VIEWS_ADMINISTRADORVIEW_H
#define HEADERS_VIEWS_ADMINISTRADORVIEW_H

#include <list>
#include "Administrador.h"
class AdministradorView{
public:
    Administrador getAdministrador();
    void printAdministrador (Administrador *administrador);
    bool eliminar();
    bool adicionar();
};





#endif //HEADERS_VIEWS_ADMINISTRADORVIEW_H

