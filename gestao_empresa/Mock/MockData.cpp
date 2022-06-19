//
// Created by luis_ on 19/06/2022.
//

#include "MockData.h"
#include "InformacaoDuplicadaException.h"

void MockData::inserirFuncionario(FuncionarioContainer &container) {

    for (size_t  i = 0; i < this->nomeFuncionarios.size();i++){
        Funcionario obj(this->nomeFuncionarios[i],this->funcaoFuncionarios[i]);
        try{
            container.adicionarFuncionario(obj);
        }   catch(InformacaoDuplicadaException& e){

        }
    }
}

void MockData::inserirCliente(ClienteContainer &container) {
    for (size_t  i = 0; i < this->nomeClientes.size();i++){
        Cliente obj(this->nomeClientes[i]);
        try{
            container.adicionarCliente(obj);
        }catch(InformacaoDuplicadaException& e){
        }
    }
}

void MockData::inserirProduto(ProdutoContainer &container) {
    for (size_t  i = 0; i < this->tipoProdutos.size();i++){
        Produto obj(this->Referencia[i],this->tipoProdutos[i], this->QuantidadeProdutos[i]);
        try{
            container.adicionarProduto(obj);
        }catch(InformacaoDuplicadaException& e){
        }
    }
}
void MockData::gerarDados(Empresa &empresa) {
    srand (time(NULL));
    inserirCliente(empresa.getClienteContainer());
    inserirFuncionario(empresa.getFuncionarioContainer());
    inserirProduto(empresa.getProdutoContainer());
}




