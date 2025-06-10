#include <iostream>
#include <string>

#include  "Animal.h"
using namespace std;

Animal::Animal(){
    Nome = "";
    Raca = "";
    Caminha = "";
}

void Animal::setNome(string N){
    Nome = N;
}

void Animal::setRaca(string R){
    Raca = R;
}

void Animal::setCaminha(string C){
    Caminha = C;
}

string Animal::getNome(){
    return Nome;
}

string Animal::getRaca(){
    return Raca;
}

string Animal::getCaminha(){
    return Caminha;
}

void Animal::Display() const{
    cout << "Meu bixinho se chama:" << Nome << endl;
    cout << "Ele eh um(a): " << Raca << endl;

    if(Caminha == "S" || Caminha == "s"){
        cout << "Ele consegue caminhar." << endl;
    }
    else{
        cout << "Ele nao consegue caminhar." << endl;
    }
}