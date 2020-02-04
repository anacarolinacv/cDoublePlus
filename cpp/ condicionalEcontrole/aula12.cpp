#include <iostream>

using namespace std;
// operador ternario

int main() {

    int idade;
    cout << "Digite a sua idade!";
    cin >> idade;

    (idade > 10) ? cout << "Massa" : cout << "Nada massa";
    
    return 0; 
}