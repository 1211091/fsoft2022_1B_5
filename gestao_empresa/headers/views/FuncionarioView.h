//
// Created by clara on 01/06/2022.
//

#ifndef HEADERS_VIEWS_FUNCIONARIOVIEW_H
#define HEADERS_VIEWS_FUNCIONARIOVIEW_H

#include <list>
#include "Funcionario.h"

class FuncionarioView{
public:

    Funcionario getFuncionario();
    void printFuncionario(Funcionario *funcionario);
    void printFuncionarios (list<Funcionario>& funcionarios);

};


#endif //HEADERS_VIEWS_FUNCIONARIOVIEW_H
