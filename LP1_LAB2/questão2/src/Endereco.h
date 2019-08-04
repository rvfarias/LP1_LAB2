#ifndef ENDERECO_H
#define ENDERECO_H

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Endereco
{
    private:

        int numero;
        string rua;
        string bairro;
        string cidade;
        string estado;
        string cep;

    public:
        Endereco();

        void setNumero(int numero);
        void setRua(string rua);
        void setBairro(string bairro);
        void setCidade(string cidade);
        void setEstado(string estado);
        void setCep(string cep);


        int getNumero();
        string getRua();
        string getBairro();
        string getCidade();
        string getEstado();
        string getCep();

        string toString();
};

#endif // ENDERECO_H
