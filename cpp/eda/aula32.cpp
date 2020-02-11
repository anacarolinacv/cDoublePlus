#include <iostream>
#include <list>

//  LISTA PARTE 2
using namespace std;

int main () {
    list <int> ordem;
    list <int> ordem2;
    int tamanho = 10;
    list<int>::iterator it;

   
    for ( int i = 0; i < tamanho; i++){
        ordem.push_front(i);
    }
    for ( int i = 0; i < tamanho; i++){
        ordem2.push_back(i);
    }
    
    ordem.merge(ordem1);

    it = ordem.begin();
    advance(it, 3);
    ordem.insert(it, 0);

    // remover elemento. ele usa o posicao. logo, tem que decrementar pra EXCLUIR com a ideia de indice.

    ordem.erase(--it);

    // limpeza da lista
    // ordem.clear();


    // verifica se ta vazia.
    ordem.empty();

    cout << ordem.size() << "\n";

    for ( int i = 0; i < tamanho ; i++){
        cout << ordem.front() << "\n";
        ordem.pop_front(); 
    }




}