//
// Created by clara on 17/06/2022.
//

# include "gtest/gtest.h"
#include <tuple>
#include "InformacaoDuplicadaException.h"
#include "InformacaoNaoExisteException.h"
#include "FuncionarioContainer.h"

TEST(FuncionarioContainerAdicionarTeste, FuncionarioValido) {

    Funcionario funcionarios("Joao", "Diretor");
    FuncionarioContainer container;
    bool flag = true;

    try{
         container.adicionarFuncionario(funcionarios);
    }catch(InformacaoDuplicadaException& e){
         flag = false;
    }
    if(flag == true){
        int numerofuncionario = funcionarios.getNumeroFuncionario();
         Funcionario * ptr = container.get(numerofuncionario);
         flag = (*ptr) == funcionarios;
    }

    EXPECT_TRUE(flag);
}


TEST(FuncionarioContainerAdicionarTeste, FuncionarioDuplicado) {

    Funcionario funcionario ("Ricardo","Secretário");
    FuncionarioContainer container;
    bool flag = true;

    //Act
    try{
        container.adicionarFuncionario(funcionario);
    }catch(InformacaoDuplicadaException& e){
        flag = false;
    }


    EXPECT_FALSE(flag);
}



TEST(FuncionarioContainerEliminarTeste, Naoexiste) {

    Funcionario funcionario("Mariana", "Secretária");
    Funcionario funcionario1 ("Beatriz", "Supervisora");
    FuncionarioContainer container;
    container.adicionarFuncionario(funcionario);
    container.adicionarFuncionario(funcionario1);
    int numerofuncionario = funcionario1.getNumeroFuncionario();
    bool flag = true;


    try{
         container.eliminarFuncionario(numerofuncionario);
    }catch(InformacaoNaoExisteException& e){
         flag = false;
    }
    if(flag == true){ //check if it actually was removed
        Funcionario * ptr = container.get(numerofuncionario);
    if(ptr != NULL)
        flag = false;
}

    EXPECT_TRUE(flag);
}

TEST(FuncionarioContainerEliminarTeste, Existe) {

    Funcionario funcionario ("Inês","chefe de recursos humanos");
    FuncionarioContainer container;
    container.adicionarFuncionario(funcionario);
    int numerofuncionario = funcionario.getNumeroFuncionario();
    bool flag = true;

    try{
        container.eliminarFuncionario(numerofuncionario);
    }catch(InformacaoNaoExisteException& e){
        flag = false;
    }

    EXPECT_FALSE(flag);
}

