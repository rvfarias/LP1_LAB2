#ifndef TRABALHADORASSALARIADO_HPP
#define TRABALHADORASSALARIADO_HPP value

#include "Trabalhador.hpp"

class TrabalhadorAssalariado : public Trabalhador {
private:
/* data */

public:
TrabalhadorAssalariado();

double  calcularPagamentoSemanal(int horas);

};

#endif
