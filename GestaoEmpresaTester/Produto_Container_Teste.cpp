//
// Created by clara on 17/06/2022.
//

# include "gtest/gtest.h"
#include <tuple>
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
        int numeroproduto = produto.getNumeroProduto();
        Produto * ptr = container.get(numeroproduto);
        flag = (*ptr) == produto;
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
    }catch(InformacaoDuplicadaException& e){
        flag = false;
    }


    EXPECT_FALSE(flag);
}



TEST(ProdutoContainerEliminarTeste, Naoexiste) {

    Produto produto("r","calcas",(int &)"1");
    Produto produto1 ("f","camisolas",(int &)"5");
    ProdutoContainer container;
    container.adicionarProduto(produto);
    container.adicionarProduto(produto1);
    int numeroproduto = produto1.getNumeroProduto();
    int quantidade = produto.getQuantidade();
    bool flag = true;


    try{
        container.venderProduto(numeroproduto, quantidade);
    }catch(InformacaoNaoExisteException& e){
        flag = false;
    }
    if(flag == true){ //check if it actually was removed
        Produto * ptr = container.get(numeroproduto);
        if(ptr != NULL)
            flag = false;
    }

    EXPECT_TRUE(flag);
}

TEST(ProdutoContainerEliminarTeste, Existe) {

    Produto produto ("r","calcas",(int &)"1");
    ProdutoContainer container;
    container.adicionarProduto(produto);
    int numeroproduto = produto.getNumeroProduto();
    int quantidade = produto.getQuantidade();
    bool flag = true;

    try{
        container.venderProduto(numeroproduto, quantidade);
    }catch(InformacaoNaoExisteException& e){
        flag = false;
    }

    EXPECT_FALSE(flag);
}

