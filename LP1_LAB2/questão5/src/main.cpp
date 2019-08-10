#include <iostream>
#include <iomanip>
#include "TrabalhadorPorHora.hpp"
#include "TrabalhadorAssalariado.hpp"

using namespace std;

int main() {

        Trabalhador * t1 = new Trabalhador();
        t1->setNome("Carlos");
        t1->setSalario(4000);

        Trabalhador * t2 = new Trabalhador();
        t2->setNome("Ana");
        t2->setSalario(2500);

        TrabalhadorPorHora * th1 = new TrabalhadorPorHora();
        th1->setNome("Fernando");
        th1->setHorasTrabalhadas(20);
        th1->setValorDaHora(8.34);


        TrabalhadorPorHora * th2 = new TrabalhadorPorHora();
        th2->setNome("Miguel");
        th2->setHorasTrabalhadas(50);
        th2->setValorDaHora(5.5);

        TrabalhadorAssalariado * ta1 = new TrabalhadorAssalariado();
        ta1->setNome("Debora");
        ta1->setSalario(20000);

        TrabalhadorAssalariado * ta2 = new TrabalhadorAssalariado();
        ta2->setNome("Rakel");
        ta2->setSalario(5000);

        cout << setprecision(2);
        cout << fixed;

        cout << "Nome: " << t1->getNome() << endl;
        cout << "Salario: " << t1->getSalario() << endl;
        cout << "Pagamento Semanal: " << t1->calcularPagamentoSemanal(44) << endl;
        cout << endl;

        cout << "Nome: " << t2->getNome() << endl;
        cout << "Salario: " << t2->getSalario() << endl;
        cout << "Pagamento Semanal: " << t2->calcularPagamentoSemanal(35) << endl;
        cout << endl;

        cout << "Nome: " << th1->getNome() << endl;
        cout << "Salario: " << th1->getSalario() << endl;
        cout << "Pagamento Semanal: " << th1->calcularPagamentoSemanal() << endl;
        cout << endl;

        cout << "Nome: " << th2->getNome() << endl;
        cout << "Salario: " << th2->getSalario() << endl;
        cout << "Pagamento Semanal: " << th2->calcularPagamentoSemanal() << endl;
        cout << endl;

        cout << "Nome: " << ta1->getNome() << endl;
        cout << "Salario: " << ta1->getSalario() << endl;
        cout << "Pagamento Semanal: " << ta1->calcularPagamentoSemanal(10) << endl;
        cout << endl;

        cout << "Nome: " << ta2->getNome() << endl;
        cout << "Salario: " << ta2->getSalario() << endl;
        cout << "Pagamento Semanal: " << ta2->calcularPagamentoSemanal(20) << endl;

        return 0;
}
