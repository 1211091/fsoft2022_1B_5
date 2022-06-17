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
     Cliente cliente ("Zara");
    }catch(InformacaoInvalidaException& e){
        flag = true;
    }

    EXPECT_TRUE(flag);
}

TEST(ClienteSetNomeLojaTeste, NomeInvalido) {

    Cliente cliente ("Zara");
    bool flag = false;
    try{
        cliente.setNomeLoja("b");
    }catch(InformacaoinvalidaException& e){
        flag = true;
    }

        EXPECT_TRUE(flag);
}

TEST(ClienteSetNomeLojaTeste, NomeValido) {
    Cliente cliente ("Zara");
    bool flag = false;
    try{
        Cliente cliente ("Nike");
    }catch(InformacaoinvalidaException& e){
         flag = true;
    }

    EXPECT_FALSE(flag);
}


