//
// Created by clara on 17/06/2022.
//

# include "gtest/gtest.h"
# include "Funcionario.h"
# include "InformacaoInvalidaException.h"




TEST(FuncionarioConstructorTeste, NomeFuncaoValido) {

    bool flag = false;
    try{
        Funcionario funcionario ("Mariana","Controlo de qualidade");
    }catch(InformacaoInvalidaException& e){
        flag = true;
    }

    EXPECT_FALSE(flag);
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
        Funcionario funcionario ("Miguel", "chefe");
    }catch(InformacaoInvalidaException& e){
         flag = true;
    }

    EXPECT_FALSE(flag);
}

TEST(FuncionarioOperadorIgualTeste, NrsIguais) {

    Funcionario funcionario ("André", "Diretor");
    int nr = funcionario.getNumeroFuncionario();
    bool flag = funcionario==nr;

    EXPECT_TRUE(flag);
}
TEST(FuncionarioOperadorIgualTeste, NrsDiferentes) {

    Funcionario funcionario ("André", "supervisor");
    int nr =funcionario.getNumeroFuncionario() +1;
    bool flag = funcionario==nr;

    EXPECT_FALSE(flag);
}

/*TEST(FuncionarioConstructorTeste, NomeFuncaoInvalido) {

    bool flag = false;
    try{
        Funcionario funcionario ("g", "desempregada");
    }catch(InformacaoInvalidaException& e){
        flag = true;
    }

    EXPECT_TRUE(flag);
}*/