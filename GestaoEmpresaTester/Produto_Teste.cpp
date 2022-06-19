//
// Created by clara on 17/06/2022.
//

# include "gtest/gtest.h"
# include "Produto.h"
# include "InformacaoInvalidaException.h"

TEST(ProdutoConstructorTeste, ProdutoValido) {

    bool flag = false;
    try{
        Produto produto ("123", "calcas", (int &) "5");
    }catch(InformacaoInvalidaException& e){
        flag = true;
    }

    EXPECT_FALSE(flag);
}

TEST(ProdutoSetTeste, ProdutoInvalido) {

    Produto produto ("10", "CALCAS", (int &) "2");
    bool flag = false;
    try{
        produto.setReferencia("b");
        produto.setTipo("c");
        produto.setQuantidade((int &) "0");
    }catch(InformacaoInvalidaException& e){
        flag = true;
    }

    EXPECT_TRUE(flag);
}

TEST(ProdutoSetTeste, ProdutoValido) {
    Produto produto  ("12", "calcas", (int &) "5");
    bool flag = false;
    try{
        Produto produto  ("13", "camisolas", (int &) "2");
    }catch(InformacaoInvalidaException& e){
        flag = true;
    }

    EXPECT_FALSE(flag);
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

/*TEST(ProdutoConstructorTeste, ProdutoInvalido) {

    bool flag = false;
    try{
        Produto produto ("12", "cs", (int &) "10");
    }catch(InformacaoInvalidaException& e){
        flag = true;
    }

    EXPECT_TRUE(flag);
}*/