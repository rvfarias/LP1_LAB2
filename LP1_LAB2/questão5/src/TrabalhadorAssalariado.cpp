#include "TrabalhadorAssalariado.hpp"

TrabalhadorAssalariado::TrabalhadorAssalariado()
        : Trabalhador()
{

        ///default

}

double TrabalhadorAssalariado::calcularPagamentoSemanal(int horas){

        return salario/4;

}
