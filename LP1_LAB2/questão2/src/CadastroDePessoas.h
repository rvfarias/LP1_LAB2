#ifndef CADASTRODEPESSOAS_H
#define CADASTRODEPESSOAS_H

#include "Pessoa.h"

class CadastroDePessoas
{
    private:
        Pessoa pessoas[20];

    public:
        //CadastroDePessoas();
        void setPessoa(Pessoa p, int pos);
};

#endif // CADASTRODEPESSOAS_H
