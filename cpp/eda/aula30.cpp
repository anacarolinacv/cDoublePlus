#include <iostream>
#include <queue>

using namespace std;

// QUEUE

int main() {

    queue <string> nomes;
    nomes.push("Ana");
    nomes.push("Rossana");

    cout << "Tamanho da pilha\n"
    cout << nomes.size() << "\n";
    
    // retorna o elemento da frente

    cout << nomes.front();

    // retorna o ultimo elemento.

    cout << nome.back();
    
    // nova fila.
    nomes.pop();
    cout << nomes.size() << "\n";

    // retorna verdade ou falso pra ver se a fila ta vazia

    cout << nomes.empty() << "\n";
    // retorna falso pois ela nao ta vazia.

    return 0;
}