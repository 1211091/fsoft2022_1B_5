//
// Created by clara on 17/06/2022.
//

# include "gtest/gtest.h"
# include "Produto.h"
# include "InformacaoInvalidaException.h"


TEST(ProdutoConstructorTeste, ReferenciaTipoQuantidadeInvalido) {

    bool flag = false;
    try{
        Produto produto ("r", "casacas", (int &) "1");
    }catch(InformacaoInvalidaException& e){
        flag = true;
    }

    EXPECT_FALSE(flag);
}

TEST(ProdutoConstructorTeste, ReferenciaTipoQuantidadeValido) {

    bool flag = false;
    try{
        Produto produto ("Calças", "123", (int &) "5");
    }catch(InformacaoInvalidaException& e){
        flag = true;
    }

    EXPECT_TRUE(flag);
}

TEST(ProdutoSetTeste, ReferenciaTipoQuantidadeInvalido) {

    Produto produto ("M", "C", (int &) "0");
    bool flag = false;
    try{
        produto.setReferencia("b");
        produto.setTipo("c");
        produto.setQuantidade((int &) "0");
    }catch(InformacaoInvalidaException& e){
        flag = true;
    }

    EXPECT_FALSE(flag);
}

TEST(ProdutoSetTeste, ReferenciaTipoQuantidadeValido) {
    Produto produto  ("12", "calcas", (int &) "5");
    bool flag = false;
    try{
        Produto produto  ("13", "camisolas", (int &) "2");
    }catch(InformacaoInvalidaException& e){
        flag = true;
    }

    EXPECT_TRUE(flag);
}

TEST(ProdutoOperadorIgualTeste, Iguais) {

    Produto produto  ("12", "calcas", (int &) "5");
    int nr = produto.getNumeroProduto();
    bool flag = produto==nr;

    EXPECT_TRUE(flag);
}
TEST(ProdutoOperadorIgualTeste, Diferentes) {

    Produto produto("12", "calcas", (int &) "5");
    int nr = produto.getNumeroProduto() + 1;
    bool flag = produto == nr;

    EXPECT_FALSE(flag);
}