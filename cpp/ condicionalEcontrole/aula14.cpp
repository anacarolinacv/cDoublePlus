#include <iostream>

using namespace std;
// estruturas de controle - while.
int main() {

    bool control = true;
    int idade;
    cout << "Digite sua idade!\n";
    cin >> idade;

    while (control = true) {
        if (idade > 0 && idade < 10) {
            idade++;
            cout << "Idade aceita!\n";
        } else {
            cout << "Idade nao aceita\n";
            control = false;
        }   
    }
    return 0;
}