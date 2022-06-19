//
// Created by clara on 17/06/2022.
//

# include "gtest/gtest.h"
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
        int nr = funcionarios.getNumeroFuncionario();
         Funcionario * ptr = container.get(nr);
         flag = (*ptr) == funcionarios;
    }

    EXPECT_TRUE(flag);
}


TEST(FuncionarioContainerAdicionarTeste, FuncionarioDuplicado) {

    Funcionario funcionario ("Ricardo","Secretário");
    FuncionarioContainer container;
    bool flag = true;

    try{
        container.adicionarFuncionario(funcionario);
        container.adicionarFuncionario(funcionario);
    }catch(InformacaoDuplicadaException& e){
        flag = false;
    }


    EXPECT_FALSE(flag);
}


TEST(FuncionarioContainerEliminarTeste, NaoexisteProblema) {

    Funcionario funcionario ("Inês","chefe de recursos humanos");
    Funcionario funcionario1 ("Ana","chefe de caixa");
    FuncionarioContainer container;
    container.adicionarFuncionario(funcionario);
    container.adicionarFuncionario(funcionario1);
    int nr = funcionario1.getNumeroFuncionario();
    bool flag = true;

    try{
        container.eliminarFuncionario(nr);
    }catch(InformacaoNaoExisteException& e){
        flag = false;
    }
    if(flag == true){
        Funcionario * ptr = container.get(nr);
        if(ptr != NULL)
            flag = false;
    }


    EXPECT_TRUE(flag);
}

TEST(FuncionarioContainerEliminarTeste, ExisteProblema) {

    Funcionario funcionario("Mariana", "Secretária");
    FuncionarioContainer container;
    container.adicionarFuncionario(funcionario);
    int nr = funcionario.getNumeroFuncionario();
    bool flag = true;
    try{
         container.eliminarFuncionario(nr);
    }catch(InformacaoNaoExisteException& e){
         flag = false;
    }
    EXPECT_FALSE(flag);
}