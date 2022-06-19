#include <iostream>
#include "Empresa.h"

#include "controller.h"

using namespace std;

int main() {

    Empresa empresa ("Empresa");

    Controller controller(empresa);
    controller.run();
    cout << "A aplicacao terminou" << endl;
    return 0;
}
