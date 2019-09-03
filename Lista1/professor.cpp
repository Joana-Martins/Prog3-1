#include <iostream>
#include <ctime>

using namespace std;

class Professor{
  private:
      tm dataAdmissao;
      tm dataDEmissao;
      string endereco;
      string telefone;
      string email;
      string telefone;
      int qtdProfessores;

  public
      tm getDataAdmissao()
      {
          return this.dataAdmissao;
      }

  public
      void setDataAdmissao(tm dataAdmissao)
      {
          this.dataAdmissao = dataAdmissao;
      }

  public
      tm getDataDEmissao()
      {
          return this.dataDEmissao;
      }

  public
      void setDataDEmissao(tm dataDEmissao)
      {
          this.dataDEmissao = dataDEmissao;
      }

  public
      string getEndereco()
      {
          return this.endereco;
      }

  public
      void setEndereco(string endereco)
      {
          this.endereco = endereco;
      }

  public
      string getTelefone()
      {
          return this.telefone;
      }

  public
      void setTelefone(string telefone)
      {
          this.telefone = telefone;
      }

  public
      string getEmail()
      {
          return this.email;
      }

  public
      void setEmail(string email)
      {
          this.email = email;
      }

  public
      string getTelefone()
      {
          return this.telefone;
      }

  public
      void setTelefone(string telefone)
      {
          this.telefone = telefone;
      }

  public
      int getQtdProfessores()
      {
          return this.qtdProfessores;
      }

  public
      void setQtdProfessores(int qtdProfessores)
      {
          this.qtdProfessores = qtdProfessores;
      }
}; 
