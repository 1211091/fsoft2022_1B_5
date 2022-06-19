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
                Funcionario funcionarios = this->funcionarioView.getFuncionario();
                FuncionarioContainer &container = this->model.getFuncionarioContainer();
                container.adicionarFuncionario(funcionarios);
            }
                break;
            case 2: {
                int numero = Utils::getNumero("Insira o numero do funcionario a alterar");
                string nome = Utils::getString("Insira o nome do funcionario");
                string funcao = Utils::getString("Insira a funcao do funcionario");
                FuncionarioContainer &container = this->model.getFuncionarioContainer();
                container.atualizarFuncionario(nome, funcao, numero);
            }
                break;
            case 3: {
                cout <<"******** Lista de Funcionarios ********"<< endl;
                FuncionarioContainer container = this->model.getFuncionarioContainer();
                list <Funcionario> funcionarios = container.getAll();
                this->funcionarioView.printFuncionarios(funcionarios);
            }
                break;
            case 4: {
                int numerodofuncionario = Utils::getNumero("Insira o numero do funcionario");
                FuncionarioContainer& container = this->model.getFuncionarioContainer();
                Funcionario *ptr = container.get(numerodofuncionario);
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
                    int numero = Utils::getNumero("Insira o numero do funcionario");
                    FuncionarioContainer &container = this->model.getFuncionarioContainer();
                    container.eliminarFuncionario(numero);
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
                string nome = Utils::getString("Insira o novo nome da loja");
                int numero = Utils::getNumero("Insira o numero do cliente");
                ClienteContainer &container = this->model.getClienteContainer();
                container.atualizarCliente(nome, numero);
            }
                break;
            case 3: {
                cout <<"******** Lista de Clientes ********"<< endl;
                ClienteContainer container = this->model.getClienteContainer();
                list <Cliente> clientes = container.getAll();
                this->clienteView.printClientes(clientes);
            }
                break;
            case 4: {
                int numero = Utils::getNumero("Insira o numero do cliente");
                ClienteContainer &container = this->model.getClienteContainer();
                Cliente *ptr = container.get(numero);
                if (ptr != NULL) {
                    this->clienteView.printCliente(ptr);
                } else {
                    cout << "O cliente nao existe" << endl;
                }
            }
                break;
            case 5: {
                try {
                    int numero = Utils::getNumero("Insira o numero do cliente a eliminar");
                    ClienteContainer &container = this->model.getClienteContainer();
                    container.eliminarCliente(numero);
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
                int numero = Utils::getNumero("Insira o numero do produto a atualizar");
                string tipo = Utils::getString("Insira o tipo do produto");
                string referencia = Utils::getString("Insira a referencia");
                int quantidade = Utils::getNumero("Insira a quantidade");
                ProdutoContainer &container = this->model.getProdutoContainer();
                container.atualizarProduto(referencia, tipo, quantidade, numero);
            }
                break;
            case 3: {
                try {
                    int numeroproduto = Utils::getNumero("Insira o numero do produto a vender");
                    int quantidade = Utils::getNumero("Insira a quantidade de produto a vender");
                    ProdutoContainer &container = this->model.getProdutoContainer();
                    container.venderProduto(numeroproduto, quantidade);
                } catch (InformacaoNaoExisteException &e) {
                    string str(e.what());
                    cout << str << endl;
                }
            }
                break;
            case 4: {
                cout <<"******** Lista de Produtos em Stock ********"<< endl;
                ProdutoContainer container = this->model.getProdutoContainer();
                list<Produto> produtos = container.getAll();
                this->produtoView.printProdutos(produtos);
            }

            break;
            case 5:{
                int numeroproduto = Utils::getNumero("Insira o numero do produto");
                ProdutoContainer& container = this->model.getProdutoContainer();
                Produto *ptr = container.get(numeroproduto);
                if (ptr != NULL) {
                    cout << "O produto foi encontrado: " << endl;
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

