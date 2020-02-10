#include <iostream>

using namespace std;

void texto();

int main () {
    int resul;

    resul = somaInteiro(1, 2);

    texto();
    soma(2, 4);

    return 0;
}


void texto() {
    cout << "Eu sou abestalhada\n";
}

void soma(int n1, int n2) {
    cout << "soma" << n1 + n2 << "\n";
}

int somaInteiro(int n1, int n2) {
    return n1 + n2;
}