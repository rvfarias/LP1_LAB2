#ifndef TRIANGULO_HPP
#define TRIANGULO_HPP value

#include "FiguraGeometrica.hpp"

class Triangulo : public FiguraGeometrica{
private:
  /* data */
float altura;
float base;

public:
  Triangulo();

  void setBase(float base);
  void setAltura(float altura);
  float calculaArea();

};

#endif
