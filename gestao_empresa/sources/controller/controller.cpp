//
// Created by babis on 6/6/2022.
//

#include <iostream>
#include <string>
#include "controller.h"
#include "Utils.h"
#include "InformacaoNaoExisteException.h"
#include "Empresa.h"
#include "FuncionarioContainer.h"


using namespace std;

Controller::Controller(Empresa& empresa){
    this->model = empresa;
}



void Controller::run(){
    int opcao = -1;
    do{
        opcao = this -> view.menuEmpresa();
        switch(opcao){
            case 1:runFuncionario();
            break;
            case 2:runCliente();
            break;
            case 3:runProduto();
            break;
            default:
                break;
        }
    }while(opcao!=0);
}

void Controller::runFuncionario(){
    int opcao=-1;
    do {
        opcao=this->view.menuFuncionario();
        switch (opcao) {
            case 1: {
                Funcionario funcionario = this->funcionarioView.getFuncionario();
                FuncionarioContainer &container = this->model.getFuncionarioContainer();
                container.adicionarFuncionario(funcionario);
            }
                break;
            case 2: {
                string nome = Utils::getString("Insira o nome do funcionario");
                string funcao = Utils::getString("Insira a funcao do funcionario");
                FuncionarioContainer &container = this->model.getFuncionarioContainer();
                container.atualizarFuncionario(nome, funcao);
            }
                break;
            case 3: {
                cout << this->model.getNome() << endl;
                FuncionarioContainer container = this->model.getFuncionarioContainer();
                list <Funcionario> funcionarios = container.getAll();
                this->funcionarioView.printFuncionarios(funcionarios);
            }
                break;
            case 4: {
                string nomedofuncionario = Utils::getString("Insira o nome do funcionario");
                FuncionarioContainer& container = this->model.getFuncionarioContainer();
                Funcionario *ptr = container.get(nomedofuncionario);
                if (ptr != NULL) {
                    this->funcionarioView.printFuncionario(ptr);
                } else {
                    cout << "O funcionario nao existe" << endl;
                }

            }
                break;
                break;
            case 5: {
                try {
                    string nome = Utils::getString("Insira o nome do funcionario");
                    FuncionarioContainer &container = this->model.getFuncionarioContainer();
                    container.eliminarFuncionario(nome);
                } catch (InformacaoNaoExisteException &e) {
                    string str(e.what());
                    cout << str << endl;
                }
            }
                break;
            default:
                break;
        }
    }while (opcao != 0);
}

void Controller::runCliente(){
    int opcao=-1;
    do {
        opcao=this->view.menuCliente();
        switch (opcao) {
            case 1: {
                Cliente cliente = this->clienteView.getCliente();
                ClienteContainer &container = this->model.getClienteContainer();
                container.adicionarCliente(cliente);
            }
                break;
            case 2: {
                string nomeLoja = Utils::getString("Insira o nome da loja");
                ClienteContainer &container = this->model.getClienteContainer();
                container.atualizarCliente(nomeLoja);
            }
                break;
            case 3: {
                cout << this->model.getNome() << endl;
                ClienteContainer container = this->model.getClienteContainer();
                list <Cliente> clientes = container.getAll();
                this->clienteView.printClientes(clientes);
            }
                break;
            case 4: {
                string nome = Utils::getString("Insira o nome da loja");
                ClienteContainer &container = this->model.getClienteContainer();
                Cliente *ptr = container.get(nome);
                if (ptr != NULL) {
                    this->clienteView.printCliente(ptr);
                } else {
                    cout << "O cliente nao existe" << endl;
                }
            }
                break;
            case 5: {
                try {
                    string nome = Utils::getString("Insira o nome do cliente");
                    ClienteContainer &container = this->model.getClienteContainer();
                    container.eliminarCliente(nome);
                } catch (InformacaoNaoExisteException &e) {
                    string str(e.what());
                    cout << str << endl;
                }
            }
                break;
            default:
                break;
        }
    }while (opcao != 0);
}
void Controller::runProduto() {
    int opcao = -1;
    do {
        opcao = this->view.menuProduto();
        switch (opcao) {
            case 1: {
                Produto produto = this->produtoView.getProduto();
                ProdutoContainer &container = this->model.getProdutoContainer();
                container.adicionarProduto(produto);
            }
                break;
            case 2: {
                string nomeProduto = Utils::getString("Insira o tipo do produto");
                string referencia = Utils::getString("Insira a referência");
                ProdutoContainer &container = this->model.getProdutoContainer();
                container.atualizarProduto(nomeProduto, referencia);
            }
                break;
            case 3: {
                try {
                    string nomedoproduto = Utils::getString("Insira o nome do produto");
                    ProdutoContainer &container = this->model.getProdutoContainer();
                    container.eliminarProduto(nomedoproduto);
                } catch (InformacaoNaoExisteException &e) {
                    string str(e.what());
                    cout << str << endl;
                }
            }
                break;
            case 4: {
                cout << this->model.getNome() << endl;
                ProdutoContainer container = this->model.getProdutoContainer();
                list<Produto> produtos = container.getAll();
                this->produtoView.printProdutos(produtos);
            }
            case 5:{
                string nomedoproduto = Utils::getString("Insira o nome da produto");
                ProdutoContainer& container = this->model.getProdutoContainer();
                Produto *ptr = container.get(nomedoproduto);
                if (ptr != NULL) {
                    this->produtoView.printProduto(ptr);
                } else {
                    cout << "O produto nao existe" << endl;
                }

            }
            break;
            default:
                break;
            }
        }

        while (opcao != 0);
    }

