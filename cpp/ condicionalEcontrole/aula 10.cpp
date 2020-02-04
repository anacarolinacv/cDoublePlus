#include <iostream>
#include <cstdlib>

using namespace std;

// goint to
int main() {
    system("cls");
    int nota1, nota2, res;
    char valor;
    inicio:

    cout << "Digite nota 1";
    cin >> nota1;
    cout << "Digite nota 2";
    cin >> nota2;
    
    res = nota1 + nota2;

    if (res >= 60){
       cout << "Aluno aprovado\n";
    } else {
        cout << "Aluno reprovado\n";
    }

    cout << "\nDigite outras notas?(s/n)\n";
    cin >> valor;

    if (valor == 's' or valor == 'S') {
        goto inicio:
    } 
    


    
    return 0;
}