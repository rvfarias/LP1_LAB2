#ifndef RESTAURANTECASEIRO
#define RESTAURANTECASEIRO value

#include "MesaDeRestaurante.hpp"

class RestauranteCaseiro {
private:
/* data */
MesaDeRestaurante mesas[MAX];
int indMesa;

public:
RestauranteCaseiro();
void adicionaPedido(Pedido p, int indMesa);
double calculaTotalRestaurante();

};

#endif
