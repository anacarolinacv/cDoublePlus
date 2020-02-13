#include <iostream>
#include <vector>

using namespace std;
// VECTOR

int main () {

    // alocacao dinamica de memoria.
    vector<int> idades;
    int tam;
    tam = 5;

    for (int i = 0; i < tam; i++){
        idades.push_back(i+1);
        cout << idades[i] << "\n";
    } 
    tam = idades.size();

    // idades.swap(outroVector); usado para trocar os elementos entre os vectos.
    idades.insert(idades.begin()+1, 444);

    cout << "Tamanho do meu vector " << tam << "\n";
    cout << "Ultimo elemento é.... " << idades.back() << "\n";
    cout << "Primeiro elemento é..." << idades.front() << "\n";
    cout << "Elemento do meio é ..." << idades.at(tam/2) << "\n";


    while(!idades.empty) {
        idades.pop_back();

    }
    // idades.clear();

    tam = idades.size();

    return 0; 
}