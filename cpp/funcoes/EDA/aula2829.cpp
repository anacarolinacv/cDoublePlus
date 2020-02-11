#include <iostream>
#include <stack>

using namespace std;

// STACK

int main() {

    stack <string> nomes;
    nomes.push("Ana");
    nomes.push("Rossana");

    cout << "Tamanho da pilha\n"
    cout << nomes.size() << "\n";
    
    // carta do topo
    cout << nomes.top();

    // nova pilha.
    nomes.pop();
    cout << nomes.size() << "\n";
    
    // nova carta do topo
    cout << nomes.top();

    // retorna verdade ou falso pra ver se a pilha ta vazio

    cout << nomes.empty() << "\n";
    // retorna falso pois ela nao ta vazia.

    return 0;

}