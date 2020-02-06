#include <iostream>

using namespace std;
// operador ternario

int main() {

    int idade;
    string saida;
    cout << "Digite a sua idade!";
    cin >> idade;
    // pode colocar o retorno em uma variavel.
    
    saida = (idade > 10) ? cout << "Massa" : cout << "Nada massa";
    
    return 0; 
}