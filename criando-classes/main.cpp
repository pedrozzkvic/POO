#include <iostream>
#include <string>
#include "Livro.h"
#include "mala.h"

using namespace std;

int main() {
    Mala minhaMala;

    for (int i = 0; i < 12; i++) {
        string titulo, autor;
        
        cout << "Digite o título do livro " << i + 1 << ": ";
        getline(cin, titulo);
        
        cout << "Digite o autor do livro: ";
        getline(cin, autor);

        Livro livro;
        livro.setTitulo(titulo);
        livro.setAutor(autor);

        minhaMala.AdicionarLivro(livro);

        char opc;
        cout << "Deseja adicionar outro livro? (s/n): ";
        cin >> opc;
        cin.ignore(); // limpar o '\n' do buffer
        if (opc == 'n' || opc == 'N') {
            break;
        }
    }

    cout << "\n=== LIVROS NA MALA ===\n";
    minhaMala.ListarLivro();

    return 0;
}
