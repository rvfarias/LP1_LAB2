#include "Endereco.h"

Endereco::Endereco()
{
        //ctor
}

void Endereco::setNumero(int numero){

        this->numero = numero;
}

void Endereco::setRua(string rua){

        this->rua = rua;
}

void Endereco::setBairro(string bairro){

        this->bairro = bairro;
}

void Endereco::setCidade(string cidade){

        this->cidade = cidade;
}

void Endereco::setEstado(string estado){

        this->estado = estado;
}

void Endereco::setCep(string cep){

        this->cep = cep;
}


int Endereco::getNumero(){

        return numero;
}

string Endereco::getRua(){

        return rua;
}
string Endereco::getBairro(){

        return bairro;
}

string Endereco::getCidade(){

        return cidade;
}

string Endereco::getEstado(){

        return estado;
}

string Endereco::getCep(){

        return cep;
}

string Endereco::toString(){
        std::stringstream resumo;

        resumo << "Endereco: " << "Rua " << rua << " Nº " << numero << endl <<
        "Bairro: " << bairro << endl << "Cidade: " << cidade << endl <<
        "Cep: " << cep << endl;

        return resumo.str();
}
