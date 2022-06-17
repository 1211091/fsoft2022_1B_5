//
// Created by clara on 17/06/2022.
//
# include "gtest/gtest.h"
# include "Cliente.h"
# include "InformacaoInvalidaException.h"


TEST(ClienteConstructorTeste, NomeInvalido) {

    bool flag = false;
    try{
        Cliente cliente ("b");
    }catch(InformacaoInvalidaException& e){
        flag = true;
    }

    EXPECT_FALSE(flag);
}

TEST(ClienteConstructorTeste, NomeValido) {

    bool flag = false;
    try{
     Cliente  ("Zara");
    }catch(InformacaoInvalidaException& e){
        flag = true;
    }

    EXPECT_FALSE(flag);
}

TEST(ClienteSetNomeTeste, NomeInvalido) {

    Cliente cliente ("Zara");
    bool flag = false;
    try{
        cliente.setCliente("a");
    }catch(InformacaoInvalidaException& e){
        flag = true;
    }

        EXPECT_FALSE(flag);
}

TEST(ClienteSetNomeTeste, NomeValido) {
    Cliente cliente ("Zara");
    bool flag = false;
    try{
        Cliente cliente ("Nike");
    }catch(InformacaoInvalidaException& e){
         flag = true;
    }

    EXPECT_FALSE(flag);
}

TEST(ClienteOperadorIgualTeste, NrsIguais) {

    Cliente cliente ("Nike");
    int nr = cliente.getNumeroCliente();

    bool flag = cliente==nr;

    EXPECT_TRUE(flag);
}
TEST(ClienteOperadorIgualTeste, Nrsdiferentes) {

    Cliente cliente ("Nike");
    int nr = cliente.getNumeroCliente() +1;

    bool flag = cliente==nr;

    EXPECT_FALSE(flag);
}
