#include <iostream>
#include <iomanip>
#include "TrabalhadorPorHora.hpp"
#include "TrabalhadorAssalariado.hpp"

using namespace std;

int main() {

        TrabalhadorPorHora * th1 = new TrabalhadorPorHora();
        th1->setNome("Fernando");
        th1->setHorasTrabalhadas(54);
        th1->setValorDaHora(8.34);


        TrabalhadorPorHora * th2 = new TrabalhadorPorHora();
        th2->setNome("Miguel");
        th2->setHorasTrabalhadas(40);
        th2->setValorDaHora(5.5);

        TrabalhadorAssalariado * t1 = new TrabalhadorAssalariado();
        t1->setNome("Debora");
        t1->setSalario(20000);

        TrabalhadorAssalariado * t2 = new TrabalhadorAssalariado();
        t2->setNome("Rakel");
        t2->setSalario(5000);

        cout << setprecision(2);
        cout << fixed;

        cout << "Nome: " << th1->getNome() << endl;
        cout << "Salario: R$" << th1->getSalario() << endl;
        cout << "Pagamento Semanal: R$" << th1->calcularPagamentoSemanal(54) << endl;
        cout << endl;

        cout << "Nome: " << th2->getNome() << endl;
        cout << "Salario: R$" << th2->getSalario() << endl;
        cout << "Pagamento Semanal: R$" << th2->calcularPagamentoSemanal(40) << endl;
        cout << endl;

        cout << "Nome: " << t1->getNome() << endl;
        cout << "Salario: R$" << t1->getSalario() << endl;
        cout << "Pagamento Semanal: R$" << t1->calcularPagamentoSemanal(35) << endl;
        cout << endl;

        cout << "Nome: " << t2->getNome() << endl;
        cout << "Pagamento Semanal: R$" << t2->calcularPagamentoSemanal(20) << endl;
        cout << "Salario: R$" << t2->getSalario() << endl;

        return 0;
}
