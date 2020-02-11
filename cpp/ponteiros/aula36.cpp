#include <iostream>

using namespace std;
// PONTEIROS
// armazenam o endereco de memoria de outra variavel

int main () {
    string num;
    // * mostra que eh um ponteiro.
    string *ponteiro;
    // relaciona com o endereco de memoria.

    ponteiro = &num;
    cout << *ponteiro << "\n";
    
    // editando o endereco de memoria.
    *ponteiro = "oioi";

    cout << ponteiro << "\n"; 


    return 0; 
}