#include "cliente.h"
#include "funcionario.h"
#include "itemdepedido.h"
#include "pedidos.h"
#include <iostream>

int main(){

    cout << "Funciono\n";
    Cliente *p; 
    p = new Cliente("Julio", {0, 0, 0, 23, 9,2019}, "54678-ES", "14091138764", "julio@gmail.com","brasil-vila velha", "981089210");
    delete p;
    return 0;
}