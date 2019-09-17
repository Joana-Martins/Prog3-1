#ifndef FUNCIONARIO_H_
#define FUNCIONARIO_H_
#include <iostream>
#include <string>
#include <ctime>
#include <vector>
#include "pedidos.h"

using namespace std;

class Funcionario{

private:
    string nome;
    tm dataNascimento;
    string RG;
    string cpf;
    string endereco;
    string telefone;
    string email;
    string matricula;

    

public:   
     Funcionario();
    ~Funcionario();
    vector<Pedido*> Pedidos;
 
string getNome()
    {
        return this->nome;
    }

    void setNome(string nome)
    {
        this->nome = nome;
    }

    tm getDataNascimento()
    {
        return this->dataNascimento;
    }

    void setDataNascimento(tm dataNascimento)
    {
        this->dataNascimento = dataNascimento;
    }

    string getRG()
    {
        return this->RG;
    }

    void setRG(string RG)
    {
        this->RG = RG;
    }

    string getCpf()
    {
        return this->cpf;
    }

    void setCpf(string cpf)
    {
        this->cpf = cpf;
    }


    string getEndereco()
    {
        return this->endereco;
    }

    void setEndereco(string endereco)
    {
        this->endereco = endereco;
    }

    string getTelefone()
    {
        return this->telefone;
    }

    void setTelefone(string telefone)
    {
        this->telefone = telefone;
    }

    string getEmail()
    {
        return this->email;
    }

    void setEmail(string email)
    {
        this->email = email;
    }

    string getMatricula()
    {
        return this->matricula;
    }

    void setMatricula(string matricula)
    {
        this->matricula = matricula;
    };

   
    

};
#endif