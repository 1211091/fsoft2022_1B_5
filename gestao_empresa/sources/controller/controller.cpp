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
            case 1:runAdministrador();
            break;
            case 2:runFuncionario();
            break;
            case 3:runCliente();
            break;
            case 4:runProduto();
            break;
            default:
                break;
        }
    }while(opcao!=0);
}
void Controller::runAdministrador(){
    int opcao=-1;
    do{
        opcao = this->view.menuAdministrador();
        switch(opcao){
            case 1:
            {
                Administrador administrador = this->administradorView.getAdministrador();
                AdministradorContainer& container = this->model.getAdministradorContainer();
            }
            break;
            case 2:
            {
                cout<<this->model.getNome()<<endl;
                AdministradorContainer container = this-> model.getAdministradorContainer();
                Administrador* administrador = container.getAdministradorContainer();
                this->administradorView.printAdministrador(administrador);
            }
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
                Funcionario funcao = this->funcionarioView.getFuncao();
                FuncionarioContainer &container = this->model.getFuncionarioContainer();
                container.adicionarFuncionario(funcionario, funcao);
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
                string nome = Utils::getString("Insira o nome do funcioanrio");
                FuncionarioContainer &container = this->model.getFuncionarioContainer();
                Funcionario *ptr = container.getFuncionario(nome);
                if (ptr != NULL) {
                    this->funcionarioView.printFuncionario(ptr);
                } else {
                    cout << "O funcionario nao existe" << endl;
                }
            }
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
                Cliente *ptr = container.getCliente(nome);
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
void Controller::runProduto(){
    int opcao=-1;
    do {
        opcao=this->view.menuProduto();
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
                cout << this->model.getNome() << endl;
                ProdutoContainer container = this->model.getProdutoContainer();
                list <Produto> produtos = container.getAll();
                list <Referencia> referencias = container.getAll();
                this->produtoView.printProdutos(produtos, referencias);
            }
                break;
            case 4: {
                try {
                    string nome = Utils::getString("Insira o nome do produto");
                    int numero = Utils::getNumero("Insira a quantidade");
                    ProdutoContainer &container = this->model.getProdutoContainer();
                    container.eliminarProduto(nome);
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
/*void Controller::runStock(){
    int opcao=-1;
    do {
        opcao=this->view.menuStock();
        switch (opcao) {
            case 1: {
                Stock stock = this->stockView.getStock()(<#initializer#>,
                                                         Produto(__cxx11::basic_string(), __cxx11::basic_string()));
                StockContainer &container = this->model.getStockContainer();
                container.adicionarStock(stock);
            }
                break;
            case 2: {
                string nome = Utils::getString("Insira o tipo do produto");
                int numero = Utils::getNumero("Insira a quantidade que deseja");
                StockContainer &container = this->model.getStockContainer();
                container.atualizarStock(nome, numero);
            }
                break;
            case 3: {
                cout << this->model.getNome() << endl;
                StockContainer container = this->model.getStockContainer();
                list <Stock> stocks = container.getAll();
                this->stockView.printStock(stocks);
            }
                break;
            case 4: {
                try {
                    string nome = Utils::getString("Insira o nome do produto");
                    StockContainer &container = this->model.getStockContainer();
                    container.eliminarStock(referencia);
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
}*/