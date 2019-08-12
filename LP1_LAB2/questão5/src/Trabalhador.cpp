#include "Trabalhador.hpp"

Trabalhador::Trabalhador(){

    nome = " ";
    salario = 0;

}

void Trabalhador::setNome(std::string nome){

        this->nome =nome;

}

void Trabalhador::setSalario(double salario){

        this->salario = salario;

}

std::string Trabalhador::getNome(){

        return nome;

}

double Trabalhador::getSalario(){

        return salario;

}

double Trabalhador::calcularPagamentoSemanal(int horas){

        return salario/horas;

}
