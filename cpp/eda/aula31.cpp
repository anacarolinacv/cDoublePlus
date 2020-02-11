#include <iostream>
#include <list>

using namespace std;

// LISTAS

int main() {

    list <int> ordem;
    int tamanho = 10;
    list<int>::iterator it;

    // it eh o interator para saber onde quer add o elemento
    // inicialmente comecasse no inicio da lista, mas com advance escolhe-se onde vai ficar
    // insert mostra a posicao e qual elemento sera adicionado nela.

    it = ordem.begin();
    advance(it, 5);
    ordem.insert(it, 0);

    // adicionando um elemento, nao ficou ordenado;

    ordem.sort();
    // serve pra reverter. ordem decrescente.

    //ordem.reverse();

    for ( i = 0; i < tamanho; i++){
        ordem.push_front(i);
    }

    cout << ordem.size() << "\n";

    for ( i = 0; i < tamanho; i++){
        cout << ordem.front() << "\n";
        ordem.pop_front(); 
    }

    
    
    return 0;
}