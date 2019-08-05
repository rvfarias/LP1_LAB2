#ifndef PEDIDO__HPP
#define PEDIDO__HPP value

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Pedido {
private:
/* data */
int numero;
int quant;
double preco;
string descri;

public:
Pedido();
void setNumero(int numero);
void setQuant(int Quant);
void setPreco(double preco);
void setDescri(string descri);

int getNumero();
int getQuant();
double getPreco();
string getDescri();

};

#endif
