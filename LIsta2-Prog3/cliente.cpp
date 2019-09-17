#include "cliente.h"

Cliente :: Cliente(string s, tm data, string rg, string cpf, string email, string end, string tel){
    this->nome = s;
    this->dataNascimento = data;
    this->RG = rg;
    this->cpf = cpf;
    this->endereco = end;
    this-> telefone = tel;
    this->email = email;

}

Cliente :: ~Cliente(){
    cout << "Destruindo cliente\n";
}