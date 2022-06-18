//
// Created by clara on 17/06/2022.
//

# include "gtest/gtest.h"
#include "InformacaoDuplicadaException.h"
#include "InformacaoNaoExisteException.h"
#include "ProdutoContainer.h"

TEST(ProdutoContainerAdicionarTeste,ProdutoValido) {

    Produto produto("r", "casacos", (int &) "1");
    ProdutoContainer container;
    bool flag = true;

    try{
        container.adicionarProduto(produto);
    }catch(InformacaoDuplicadaException& e){
        flag = false;
    }
    if(flag == true){
        int nr = produto.getNumeroProduto();
        Produto * ptr = container.get(nr);
        flag = (*ptr) == nr;
    }

    EXPECT_TRUE(flag);
}


TEST(ProdutoContainerAdicionarTeste, ProdutoDuplicado) {

    Produto produto ("r","calcas",(int &)"1");
    ProdutoContainer container;
    bool flag = true;

    //Act
    try{
        container.adicionarProduto(produto);
        container.adicionarProduto(produto);
    }catch(InformacaoDuplicadaException& e){
        flag = false;
    }


    EXPECT_FALSE(flag);
}



TEST(ProdutoContainerEliminarTeste, Naoexiste) {

    Produto produto("12","calcas",(int &)"1");
    Produto produto1 ("10","camisolas",(int &)"5");
    ProdutoContainer container;
    container.adicionarProduto(produto);
    container.adicionarProduto(produto1);
    int nr = produto1.getNumeroProduto();
    int qnt = produto.getQuantidade();
    bool flag = true;


    try{
        container.venderProduto(nr, qnt);
    }catch(InformacaoNaoExisteException& e){
        flag = false;
    }
    if(flag == true){
        Produto * ptr = container.get(nr);
        if(ptr != NULL)
            flag = false;
    }

    EXPECT_FALSE(flag);
}

TEST(ProdutoContainerEliminarTeste, Existe) {

    Produto produto ("r","calcas",(int &)"1");
    ProdutoContainer container;
    container.adicionarProduto(produto);
    int nr = produto.getNumeroProduto();
    int qnt = produto.getQuantidade();
    bool flag = true;

    try{
        container.venderProduto(nr, qnt);
    }catch(InformacaoNaoExisteException& e){
        flag = false;
    }

    EXPECT_TRUE(flag);
}

