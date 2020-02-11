#include <iostream>

using namespace std;
void somar(float *var, float valor);
void ptar(float *v);

int main () {
    float altura = 0.0;
    float vetor[5];

    somar(&altura, 15.0);

    ptar(vetor);

    cout << altura << "\n";

    return 0;
}

// quando eu tiver trabalhando com variaveis, eu preciso usar a indicacao de ponteiro.
// quando tiver usando vetor, nao.

void somar(float *var, float valor) {

    *var += valor;
}

void ptar(float *v) {
    for (int i = 0; i < *v.size(); i++) {
       v[i] = 3;
    } 
}