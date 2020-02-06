#include <iostream>

// arrays vetores
using namespace std;

int main () {
    // array do tipo inteiro
    int vetor[15];
    int i;

    // adicionando valores em posicoes especificas.
    
    vetor[0] = 10;

    cout << vetor[0] << "\n"; 

    for ( i = 0; i < 14; i++) {
        if(vetor[i] != 0) {
            cout << vetor[i];
        }
    }

}