#ifndef CIRCULO_HPP
#define CIRCULO_HPP value

#include "FiguraGeometrica.hpp"

class Circulo : public FiguraGeometrica{
private:
  /* data */
float raio;
float pi = 3.14;

public:
  Circulo();

  void setRaio(float raio);
  float calculaArea();

};

#endif
