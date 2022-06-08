//
// Created by babis on 6/6/2022.
//

#include <iostream>
#include <string>
#include "controller.h"
#include "Utils.h"
#include "InformacaoNaoExisteException.h"
#include "Empresa.h"

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
            case 4:runStock();
            break;
            case 5:runProduto();
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
                FuncionarioContainer &container = this->model.getFuncionarioContainer();
                container.adicionar(funcionario);
            }
                break;
            case 2: {
                string nome = Utils::getString("Insira o nome do funcionario");
                string funcao = Utils::getString("Insira a funcao do funcionario");
                FuncionarioContainer &container = this->model.getFuncionarioContainer();
                container.atualizar(nome, funcao);
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
                Funcionario *ptr = container.get(nome);
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
                    container.eliminar(nome);
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
                container.adicionar(cliente);
            }
                break;
            case 2: {
                string nome = Utils::getString("Insira o nome da loja");
                string nome_1 = Utils::getString("Insira o nome do gerente");
                ClienteContainer &container = this->model.getClienteContainer();
                container.atualizar(nome, nome_1);
            }
                break;
            case 3: {
                cout << this->model.getNome() << endl;
                ClienteContainer container = this->model.getClienteContainer();
                list <Cliente> clientes = container.getAll();
                this->clienteView.printCliente(clientes);
            }
                break;
            case 4: {
                string nome = Utils::getString("Insira o nome da loja");
                CLienteContainer &container = this->model.getClienteContainer();
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
                    ClienteContainer &container = this->model.getCLienteContainer();
                    container.eliminar(nome);
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
                Produto produto = this->ProdutoView.getProduto();
                ProdutoContainer &container = this->model.getProdutoContainer();
                container.adicionar(produto);
            }
                break;
            case 2: {
                string nome = Utils::getString("Insira o tipo do produto");
                int numero = Utils::getNumero("Insira a referência");
                ProdutoContainer &container = this->model.getProdutoContainer();
                container.atualizar(nome, numero);
            }
                break;
            case 3: {
                cout << this->model.getNome() << endl;
                ProdutoContainer container = this->model.getProdutoContainer();
                list <Produto> produtos = container.getAll();
                this->produtosView.printProduto(produtos);
            }
                break;
            case 4: {
                try {
                    string nome = Utils::getString("Insira o nome do produto");
                    int numero = Utils::getNumero("Insira a quantidade");
                    ProdutoContainer &container = this->model.getProdutoContainer();
                    container.eliminar(nome);
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
void Controller::runStock(){
    int opcao=-1;
    do {
        opcao=this->view.menuStock();
        switch (opcao) {
            case 1: {
                Stock stock = this->StockView.getStock();
                StockContainer &container = this->model.getStockContainer();
                container.adicionar(stock);
            }
                break;
            case 2: {
                string nome = Utils::getString("Insira o tipo do produto");
                int numero = Utils::getNumero("Insira a quantidade que deseja");
                StockContainer &container = this->model.getStockContainer();
                container.update(nome, numero);
            }
                break;
            case 3: {
                cout << this->model.getNome() << endl;
                StockContainer container = this->model.getStockContainer();
                list <Stock> stocks = container.getAll();
                this->stockView.printStock(stock);
            }
                break;
            case 4: {
                try {
                    string nome = Utils::getString("Insira o nome do produto");
                    StockContainer &container = this->model.getStockContainer();
                    container.remove(nome);
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