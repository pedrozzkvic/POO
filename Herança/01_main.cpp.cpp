#include <iostream>
#include <string>
#include "Animal.h"
#include "Gato.h"
#include "Cachorro.h"

using namespace std;

int main(){
    string Nome, Raca, Caminha;
    
    cout << "Digite o nome do seu bixinho:" << endl;
    getline(cin, Nome);

    cout << "Digite a raca do seu bixinho" << endl;
    getline(cin, Raca);

    cout << "Seu bixinho caminha?, digite S ou N" << endl;
    getline(cin, Caminha);

    if(Raca == "cachorro"){
        Cachorro cachorro;
        cachorro.setNome(Nome);
        cachorro.setRaca(Raca);
        cachorro.setCaminha(Caminha);
        cachorro.Display();
        cachorro.Latir();
    }
    else if(Raca == "gato"){
        Gato gato;
        gato.setNome(Nome);
        gato.setRaca(Raca);
        gato.setCaminha(Caminha);
        gato.Display();
        gato.Miar();
    }

    else{
        Animal animal;
        animal.setNome(Nome);
        animal.setRaca(Raca);
        animal.setCaminha(Caminha);

        cout << endl;
        animal.Display();
    }


    return 0;
}
