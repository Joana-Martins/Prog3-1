#ifndef _PEDIDOS_H
#define _PEDIDOS_H_
#include <iostream>
#include <string>
#include <ctime>
#include <vector>
#include "funcionario.h"
#include "cliente.h"

using namespace std;

class Pedido{
private:
    float valorTotal;
    tm data;
    string status;
    string formaPgto;


public:
    static int qtdPedidos;
    Funcionario funcionario;
    Cliente cliente;
    vector <ItemPedidos> itempedidos; 
    Pedido();
    ~Pedido();
    
    float getValorTotal()
    {
        return this.valorTotal;
    }

    void setValorTotal(float valorTotal)
    {
        this.valorTotal = valorTotal;
    }

    tm getData()
    {
        return this.data;
    }

    void setData(tm data)
    {
        this.data = data;
    }

    string getStatus()
    {
        return this.status;
    }

    void setStatus(string status)
    {
        this.status = status;
    }

    string getFormaPgto()
    {
        return this.formaPgto;
    }

    void setFormaPgto(string formaPgto)
    {
        this.formaPgto = formaPgto;
    }


};

#endif