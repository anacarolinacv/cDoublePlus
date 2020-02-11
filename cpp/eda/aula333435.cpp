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

    carro carros = new carro[2];

    cachorro dog1;
    cachorro dog2;
    
    dog1.insere("viralata", "marrom", 1.23 );
    dog1.insere("labrador", "marrom", 1.50 );

    for (int i = 0; i < carros.size(); i++) {
        cout << carros[i].mostraValores() << "\n";
    }
    
    dog1.mostraValores();

    return 0;
}