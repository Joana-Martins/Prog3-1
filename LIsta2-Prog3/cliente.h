#ifndef _CLIENTE_H
#define _CLIENTE_H

#include <iostream>
#include <string>
#include <ctime>
#include <vector>
#include "pedidos.h"

using namespace std;

class Cliente{

private:
    string nome;
    tm dataNascimento;
    string RG;
    string cpf;
    string endereco;
    string telefone;
    string email;

public:

    Cliente();
    ~Cliente();

    vector<Pedido*> Pedidos;

    string getNome()
    {
        return this.nome;
    }


    void setNome(string nome)
    {
        this.nome = nome;
    }

    tm getDataNascimento()
    {
        return this.dataNascimento;
    }

    void setDataNascimento(tm dataNascimento)
    {
        this.dataNascimento = dataNascimento;
    }

    string getRG()
    {
        return this.RG;
    }

    void setRG(string RG)
    {
        this.RG = RG;
    }

    string getCpf()
    {
        return this.cpf;
    }

    void setCpf(string cpf)
    {
        this.cpf = cpf;
    }

    string getEndereco()
    {
        return this.endereco;
    }

    void setEndereco(string endereco)
    {
        this.endereco = endereco;
    }

    string getTelefone()
    {
        return this.telefone;
    }

    void setTelefone(string telefone)
    {
        this.telefone = telefone;
    }

    string getEmail()
    {
        return this.email;
    }

    void setEmail(string email)
    {
        this.email = email;
    }
};

#endif 