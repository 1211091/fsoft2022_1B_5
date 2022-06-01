//
// Created by clara on 01/06/2022.
//

#ifndef MAIN_CPP_FUNCIONARIOVIEW_H
#define MAIN_CPP_FUNCIONARIOVIEW_H

#include <list>
#include "Funcionario.h"

class FuncionarioView{
public:

    Funcionario getFuncionario();
    void printFuncionario(Funcionario *funcionario);
    void printFuncionario(list<Funcionario>& funcionarios);

};


#endif //MAIN_CPP_FUNCIONARIOVIEW_H
