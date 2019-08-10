#include "Circulo.hpp"

Circulo::Circulo(){

  //default
}

void Circulo::setRaio(float raio){

  this->raio = raio;

}

float Circulo::calculaArea(){

  return area = pi*raio*raio;

}
