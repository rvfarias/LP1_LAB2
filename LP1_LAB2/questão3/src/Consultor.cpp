#include "Consultor.hpp"

Consultor::Consultor(){

//default

}

double Consultor::getSalario(float percentual){

        return salario + (salario*percentual);

}

double Consultor::getSalario(){

        return salario + (salario*0.1);

}
