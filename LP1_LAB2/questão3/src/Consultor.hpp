#ifndef CONSULTOR_HPP
#define CONSULTOR_HPP value

#include "Funcionario.hpp"

class Consultor : public Funcionario {
private:
/* data */
float percentual;

public:
Consultor();

double getSalario();
double getSalario(float percentual);

};

#endif
