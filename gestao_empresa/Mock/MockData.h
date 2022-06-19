//
// Created by luis_ on 19/06/2022.
//

#ifndef MAIN_CPP_MOCKDATA_H
#define MAIN_CPP_MOCKDATA_H
#include <string>
#include <vector>
#include "Empresa.h"
using namespace std;



class MockData {
private:
    const vector<string> nomeFuncionarios = {"Jose Miguel Moreira da Silva", "Luis Manuel Marques Passos", "Clara Sofia Ribeiro Coelho", "Barbara Oliveira Santos", "Francisco Casais Salgueiro da Silva", "Leandro Filipe da Costa Gomes", "Ana Rita Maia Barbosa da Silva","Nuno Gabriel Fernando Teixeira", "Hugo Carlos Almeida Alves", "Joaquina Happyberta"};
    const vector<string> nomeClientes = {"ZARA","STRADIVARIUS", "NIKE", "ADIDAS","TIFFOSI", "GUCCI", "PULLANDBEAR","INTIMISSIMI","CALZEDONIA","SUITSINC"};
    const vector<string> funcaoFuncionarios = {"Chefe", "CEO", "Supervisora", "Fundadora","Diretor de Recursos Humanos", "Secretario", "Informatica","Seguranca","Diretor Financeiro","Operaria"};
    const vector<string> tipoProdutos = {"calcas","camisolas","casacos","t-shirts","calcoes", "camisas", "sapatos", "sapatilhas", "polos", "blazers"};
    const vector<string> Referencia ={"12","123","13","134", "132", "210", "213", "2568","5612","489165"};
    const vector<int> QuantidadeProdutos = {1,2,3,4,5,6,7,8,9,10};


    void inserirFuncionario(FuncionarioContainer& container);
    void inserirCliente(ClienteContainer& container);
    void inserirProduto(ProdutoContainer& container);

public:
    void gerarDados(Empresa& empresa);

};


#endif //MAIN_CPP_MOCKDATA_H
