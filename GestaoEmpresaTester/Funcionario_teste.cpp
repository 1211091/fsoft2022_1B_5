//
// Created by clara on 17/06/2022.
//

# include "gtest/gtest.h"
# include "Funcionario.h"
# include "InformacaoInvalidaException.h"


TEST(FuncionarioConstructorTeste, NomeFuncaoInvalido) {

    bool flag = false;
    try{
        Funcionario funcionario ("c", "desempregado");
    }catch(InformacaoInvalidaException& e){
        flag = true;
    }

    EXPECT_FALSE(flag);
}

TEST(FuncionarioConstructorTeste, NomeFuncaoValido) {

    bool flag = false;
    try{
        Funcionario funcionario ("Mariana","Controlo de qualidade");
    }catch(InformacaoInvalidaException& e){
        flag = true;
    }

    EXPECT_TRUE(flag);
}

TEST(FuncionarioSetNomeTeste, NomeFuncaoInvalido) {

    Funcionario funcionario ("Mariana", "Controlo de qualidade");
    bool flag = false;
    try{
        funcionario.setNomeFuncionario("b");
        funcionario.setFuncao("f");
    }catch(InformacaoInvalidaException& e){
         flag = true;
    }

    EXPECT_TRUE(flag);
}

TEST(FuncionarioSetNomeTeste, NomeFuncaoValido) {
    Funcionario funcionario ("Francisca","diretora");
    bool flag = false;
    try{
        Funcionario funcionario ("Miguel");
    }catch(InformacaoInvalidaException& e){
         flag = true;
    }

    EXPECT_FALSE(flag);
}

TEST(FuncionarioConstructorTeste, FuncaoInvalido) {

    bool flag = false;
    try{
        Funcionario funcionario ("");
    }catch(InformacaoInvalidaException& e){
        flag = true;
    }

    EXPECT_FALSE(flag);
}