#include "Funcionario.hpp"

Funcionario::Funcionario(){
//default

}

void Funcionario::setNome(string nome){

        this->nome = nome;

}

void Funcionario::setMatricula(int matricula){

        this->matricula = matricula;

}

void Funcionario::setSalario(double salario){

        this->salario = salario;

}

string Funcionario::getNome(){

        return nome;

}

int Funcionario::getMatricula(){

        return matricula;

}

double Funcionario::getSalario(){

        return salario;

}
