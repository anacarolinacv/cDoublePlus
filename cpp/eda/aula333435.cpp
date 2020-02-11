#include <iostream>

// STRUCT

using namespace std;

struct cachorro {
    string raca;
    string cor;
    int tamanho;

    void insere(string straca, string stcor, int sttamanho) {
        nome = straca;
        cor = stcor;
        tamanho = sttamanho;
    }

    void mostraValores() {
    cout << "Raça" << raca << "\n";
    cout << "Cor" << cor << "\n";
    cout << "Tamanho" << tamanho << "\n";
    }
};

int main() {

    cachorro dog1;
    
    dog1.insere("viralata", "marrom", 1.23 );
    dog1.mostraValores();

    return 0;
}