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
    
    // retorna a carta que ta na frente

    nomes.front();

    // retorna a carta que ta atras

    nomes.back();
    // nova fila
    nomes.pop();
    cout << nomes.size() << "\n";
    
    // retorna verdade ou falso pra ver se a pilha ta vazio

    cout << nomes.empty() << "\n";
    // retorna falso pois ela nao ta vazia.



    return 0;
}