#pragma once
#include "Livro.h"

class Mala{
    private:
        Livro livros[12];   
        int Contador{0};

    public:
        Mala();
        
        void AdicionarLivro(const Livro &livro);
        void ListarLivro();        
};
