#ifndef PESSOA_H
#define PESSOA_H

#include "Endereco.h"

class Pessoa
{
    private:
        Endereco endereco;
        string nome;
        string telefone;

    public:
      Pessoa();
        Pessoa(string nome);
        Pessoa(string nome, string telefone, Endereco ende);

        void setNome(string nome);
        void setTelefone(string telefone);
        void setEndereco(Endereco endereco);

        string getNome();
        string getTelefone();
        string toString2();

};

#endif // PESSOA_H
