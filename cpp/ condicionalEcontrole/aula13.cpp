#include <iostream>

using namespace std;

// switch case

int main () {

    int idade;
    cout << "Digite sua idade!\n";
    cin >> idade;

    switch (idade) {
    case (idade > 17):
        cout << "Idade aceita!\n";
        break;
    
    default:
        cout << "Idade inválida!\n";
        break;
    }
    return 0;
}