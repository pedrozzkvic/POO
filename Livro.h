#pragma once
#include <string>
using namespace std;

class Livro{
    private:
        string Titulo, Autor;

    public:
        Livro();

        void setTitulo(string T);
        void setAutor(string A);

        string getTitulo();
        string  getAutor();

        void Display() const;   
};