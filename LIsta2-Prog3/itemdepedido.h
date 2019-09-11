#ifndef _CLIENTE_H
#define _CLIENTE_H

#include <iostream>
#include <string>
#include <ctime>
#include <vector>
#include "pedidos.h"

using namespace std;

class ItemPedidos{
    private:
        int quantidade;
        float precoVenda;

    public:

    Pedido pedido; 

	 int getQuantidade() {
		return this.quantidade;
	}

	void setQuantidade(int quantidade) {
		this.quantidade = quantidade;
	}

	 float getPrecoVenda() {
		return this.precoVenda;
	}

     void setPrecoVenda(float precoVenda) {
		this.precoVenda = precoVenda;
	}

    ItemPedidos();
    ~ItemPedidos();


}

#endif 