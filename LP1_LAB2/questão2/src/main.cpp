#include <iostream>
#include "Pessoa.h"

using namespace std;

int main()
{
        Endereco e1;
        e1.setRua("Ruy carneiro");
        e1.setNumero(123);
        e1.setBairro("Bairro dos estados");
        e1.setCidade("Joao Pessoa");
        e1.setEstado("Paraiba");
        e1.setCep("58101328");

        Pessoa p1;
        p1.setNome("Jhon");
        p1.setTelefone("75879345");
        p1.setEndereco(e1);

        Endereco e2;
        e2.setRua("Governador flavio ribeiro coutinho");
        e2.setNumero(456);
        e2.setBairro("Manaira");
        e2.setCidade("Joao Pessoa");
        e2.setEstado("Paraiba");
        e2.setCep("67130130");

        Pessoa p2("Manoel");
        p2.setTelefone("47873570235");
        p2.setEndereco(e2);

        Endereco e3;
        e3.setRua("Doze de dezembro");
        e3.setNumero(199);
        e3.setBairro("Camboinha");
        e3.setCidade("Cabedelo");
        e3.setEstado("Paraiba");
        e3.setCep("58101328");

        Pessoa p3("Maria", "92334545", e3);


        cout << p1.toString2() << e1.toString() << endl;
        cout << p2.toString2() << e2.toString() << endl;
        cout << p3.toString2() << e3.toString() << endl;

        return 0;
}
