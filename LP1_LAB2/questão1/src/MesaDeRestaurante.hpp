#ifndef MESADERESTAURANTE_HPP
#define MESADERESTAURANTE_HPP value

#include "Pedido.hpp"
#define MAX 20

class MesaDeRestaurante {
private:
/* data */
Pedido pedidos[MAX];
int pos;

public:
MesaDeRestaurante();
void adicionaAoPedido(Pedido p);
void zeraPedidos();
void print();
double calculaTotal();

};

#endif
