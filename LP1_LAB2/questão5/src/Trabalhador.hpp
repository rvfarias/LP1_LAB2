#ifndef TRABALHADOR_HPP
#define TRABALHADOR_HPP value

#include <string>

class Trabalhador {
protected:
/* data */
std::string nome;
double salario;

public:
Trabalhador();

void setNome(std::string nome);
void setSalario(double salario);

std::string getNome();
double getSalario();
double  calcularPagamentoSemanal(int horas);

};

#endif
