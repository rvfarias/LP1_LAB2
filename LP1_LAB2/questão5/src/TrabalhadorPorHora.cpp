#include "TrabalhadorPorHora.hpp"

TrabalhadorPorHora::TrabalhadorPorHora(){

        nome = " ";
        salario = 0;
        horasTrabalhadas = 0;
        valorDaHora = 0;
}

void TrabalhadorPorHora::setValorDaHora(double valorDaHora){

        this->valorDaHora = valorDaHora;

}

void TrabalhadorPorHora::setHorasTrabalhadas(float horas){

        float excedente;

        if(horas <= 40) {

                horasTrabalhadas = horas;

        }else{

                excedente = horas - 40;
                horasTrabalhadas = horas - excedente;
                excedente *= 1.5;
                horasTrabalhadas += excedente;

        }

}

float TrabalhadorPorHora::getHorasTrabalhadas(){

        return horasTrabalhadas;

}

double TrabalhadorPorHora::getValorDaHora(){

        return valorDaHora;

}

double TrabalhadorPorHora::getSalario(){

        salario = valorDaHora * horasTrabalhadas;

        return salario*4;
}

double TrabalhadorPorHora::calcularPagamentoSemanal(int horas){

        salario = valorDaHora * horas;

        return salario;

}
