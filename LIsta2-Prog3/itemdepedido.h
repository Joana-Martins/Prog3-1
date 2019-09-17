#ifndef ITEMDEPEDIDO_H_
#define ITEMDEPEDIDO_H_

#include <iostream>
#include <string>
#include <ctime>
#include <vector>

using namespace std;
#include <iostream>
class ItemPedidos{
    private:
        int quantidade;
        float precoVenda;

    public:
	
	 int getQuantidade() {
		return this->quantidade;
	}

	void setQuantidade(int quantidade) {
		this->quantidade = quantidade;
	}

	 float getPrecoVenda() {
		return this->precoVenda;
	}

     void setPrecoVenda(float precoVenda) {
		this->precoVenda = precoVenda;
	}

    ItemPedidos();
    ~ItemPedidos();


};

#endif 