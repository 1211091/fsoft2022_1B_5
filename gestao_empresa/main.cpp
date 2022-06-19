#include <iostream>
#include "Empresa.h"
#include "MockData.h"
#include "controller.h"

using namespace std;

int main() {

    Empresa empresa ("Empresa");

    MockData mock;
    mock.gerarDados(empresa);

    Controller controller(empresa);
    controller.run();
    cout << "A aplicacao terminou" << endl;
    return 0;
}
