#include <iostream>
#include "Empresa.h"
#include "MockData.h"
#include "Controller.h"

using namespace std;

int main() {

    Empresa empresa ("Empresa");

    //MockData mock;
    //mock.generateData(empresa);

    Controller controller(empresa);
    controller.run();
    cout << "A aplicacao terminou" << endl;
    return 0;
}
