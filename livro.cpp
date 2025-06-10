#include <iostream>
#include <string>

#include "Livro.h"
using namespace std;

Livro::Livro(){
    Titulo = "";
    Autor = "";
}

void Livro::setTitulo(string T){
    Titulo = T;
}

void Livro::setAutor(string A){
    Autor = A;
}

string Livro::getTitulo(){
    return Titulo;
}

string Livro::getAutor(){
    return Autor;
}

void Livro::Display() const{
    cout << "==================================" << endl;
    cout << "======INFORMACOES DO LIVRO========" << endl;
    cout << "==================================" << endl;
    cout << "Nome do Livro: " << Titulo << endl;
    cout << "Autor do Livro: " << Autor << endl;
    cout << "==================================" << endl;
}

