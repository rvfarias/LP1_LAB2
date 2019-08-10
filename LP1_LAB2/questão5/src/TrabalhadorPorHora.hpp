#ifndef TRABALHADORPORHORA_HPP
#define TRABALHADORPORHORA_HPP value

#include "Trabalhador.hpp"

class TrabalhadorPorHora : public Trabalhador {
private:
/* data */
double valorDaHora;
float horasTrabalhadas;

public:
TrabalhadorPorHora ();

void setValorDaHora(double valorDaHora);
void setHorasTrabalhadas(float horasTrabalhadas);

float getHorasTrabalhadas();
double getValorDaHora();
double getSalario();
double calcularPagamentoSemanal();

};

#endif
