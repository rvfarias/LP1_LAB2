#include <iostream>
#include "Consultor.hpp"

int main(int argc, char const *argv[]) {

        Funcionario f1;
        f1.setNome("Jose");
        f1.setMatricula(345253);
        f1.setSalario(1500);

        Funcionario f2;
        f2.setNome("Joana");
        f2.setMatricula(24799);
        f2.setSalario(3300);

        Consultor * c1 = new Consultor();
        c1->setNome("Rodolfo");
        c1->setMatricula(86520);
        c1->setSalario(2400);

        Consultor * c2 = new Consultor();
        c2->setNome("Fernanda");
        c2->setMatricula(9579803);
        c2->setSalario(1200);

        Consultor * c3 = new Consultor();
        c3->setNome("Rafael");
        c3->setMatricula(9579803);
        c3->setSalario(2000);

        cout << "Nome: " << f1.getNome() << endl;
        cout << "Matricula: " << f1.getMatricula() << endl;
        cout << "Salario: " << f1.getSalario() << endl << endl;

        cout << "Nome: " << f2.getNome() << endl;
        cout << "Matricula: " << f2.getMatricula() << endl;
        cout << "Salario: " << f2.getSalario() << endl << endl;

        cout << "Nome: " << c1->getNome() << endl;
        cout << "Matricula: " << c1->getMatricula() << endl;
        cout << "Salario: " << c1->getSalario() << endl << endl;


        cout << "Nome: " << c2->getNome() << endl;
        cout << "Matricula: " << c2->getMatricula() << endl;
        cout << "Salario: " << c2->getSalario() << endl << endl;

        cout << "Nome: " << c3->getNome() << endl;
        cout << "Matricula: " << c3->getMatricula() << endl;
        cout << "Salario: " << c3->getSalario(0.5) << endl << endl;

        return 0;
}
