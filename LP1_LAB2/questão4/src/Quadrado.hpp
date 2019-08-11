#ifndef QUADRADO_HPP
#define QUADRADO_HPP value

#include "FiguraGeometrica.hpp"

class Quadrado : public FiguraGeometrica{
private:
  /* data */
float lado;

public:
  Quadrado();

  void setLado(float lado);
  float calculaArea();

};

#endif
