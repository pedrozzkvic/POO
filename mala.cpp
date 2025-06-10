#include <iostream>
#include <string>

#include "mala.h"

using namespace std;

Mala::Mala(){
    Contador = 0;
}

void Mala::AdicionarLivro(const Livro &livro){
    if(Contador < 12){
        livros[Contador]  = livro;
        Contador++;
    }
    else{
        cout << "A MALA ESTA CHEIA" << endl;
    }      
}

void Mala::ListarLivro(){
    for(int i = 0; i++, i ; i < 12){
        livros[i].Display();
    }
}