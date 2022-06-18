#include <iostream>
#include <gtest/gtest.h>
#include "Cliente_Teste.cpp"
//#include "Cliente_Container_Teste.cpp"
//#include "Funcionario_teste.cpp"
//#include "Funcionario_Container_Teste.cpp"
//#include "Produto_Teste.cpp"
//#include "Produto_Container_Teste.cpp"

int main(int argc, char *argv[]){
    :: testing:: InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
