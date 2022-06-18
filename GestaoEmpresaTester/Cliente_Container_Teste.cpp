//
// Created by clara on 17/06/2022.
//

# include "gtest/gtest.h"
#include <tuple>
#include "InformacaoDuplicadaException.h"
#include "InformacaoNaoExisteException.h"
#include "ClienteContainer.h"

TEST(ClienteContainerAdicionarTeste, ClienteValido) {

    Cliente cliente("Adidas");
    ClienteContainer container;
    bool flag = true;

    try{
    container.adicionarCliente(cliente);
    }catch(InformacaoDuplicadaException& e){
        flag = false;
    }
    if(flag == true){
        int numero = cliente.getNumeroCliente();
        Cliente * ptr = container.get(numero);
        flag = (*ptr) == cliente;
    }

    EXPECT_TRUE(flag);
}


TEST(ClienteContainerAdicionarTeste, ClienteDuplicado) {

    Cliente cliente ("Adidas");
    ClienteContainer container;
    bool flag = true;

    //Act
    try{
        container.adicionarCliente(cliente);
        container.adicionarCliente(cliente);
    }catch(InformacaoDuplicadaException& e){
        flag = false;
    }


    EXPECT_FALSE(flag);
}



TEST(ClienteContainerEliminarTeste, Naoexiste) {

    Cliente cliente("Adidas");
    Cliente cliente1 ("Snipes");
    ClienteContainer container;
    container.adicionarCliente(cliente);
    container.adicionarCliente(cliente1);
    int numero = cliente1.getNumeroCliente();
    bool flag = true;


    try{
        container.eliminarCliente(numero);
    }catch(InformacaoNaoExisteException& e){
        flag = false;
    }
    if(flag == true){ //check if it actually was removed
        Cliente * ptr = container.get(numero);
    if(ptr != NULL)
        flag = false;
    }

    EXPECT_TRUE(flag);
}

TEST(ClienteContainerEliminarTeste, Existe) {

    Cliente cliente ("Tiffosi");
    ClienteContainer container;
    container.adicionarCliente(cliente);
    int numero = cliente.getNumeroCliente();
    bool flag = true;

    try{
        container.eliminarCliente(numero);
    }catch(InformacaoNaoExisteException& e){
        flag = false;
    }

    EXPECT_TRUE(flag);
}

