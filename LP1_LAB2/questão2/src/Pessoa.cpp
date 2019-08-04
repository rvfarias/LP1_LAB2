#include "Pessoa.h"

Pessoa::Pessoa(){

}

Pessoa::Pessoa(string nome){

    this->nome = nome;
}

Pessoa::Pessoa(string nome, string telefone, Endereco ende){

    this->nome = nome;
    this->telefone = telefone;
    endereco = ende;
}

void Pessoa::setNome(string nome){

    this->nome = nome;
}

void Pessoa::setTelefone(string telefone){

    this->telefone = telefone;

}

void Pessoa::setEndereco(Endereco ende){

    endereco = ende;
}

string Pessoa::getNome(){

    return nome;
}

string Pessoa::getTelefone(){

    return telefone;
}

string Pessoa::toString2(){
    std::stringstream resumo;

    resumo << "------Dados------\n" << "Nome: " << nome << endl << "Telefone: "<<
    telefone << endl;// << endl;

    return resumo.str();
}
