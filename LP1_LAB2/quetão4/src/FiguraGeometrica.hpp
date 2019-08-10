#ifndef FIGURAGEOMETRICA_HPP
#define FIGURAGEOMETRICA_HPP value

#include <string>

using namespace std;

class FiguraGeometrica {
protected:
/* data */
string nome;
float area;

public:
FiguraGeometrica();

void setNome(string nome);
string getNome();
float calculaArea();

};

#endif
