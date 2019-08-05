#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP value

#include <string>

using namespace std;

class Funcionario {
protected:
/* data */
string nome;
int matricula;
double salario;

public:
Funcionario();

void setNome(string nome);
void setMatricula(int matricula);
void setSalario(double salario);

string getNome();
int getMatricula();
double getSalario();

};

#endif
