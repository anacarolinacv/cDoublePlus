#include <iostream>


using namespace std;

// ENUM
   
int main() {
    enum armas(fusil, revolver, escopeta);
    // podem ser relacionadas a qualquer um dos resultados relacionados.

    armas arma1;
    int num;

    arma1 = fusil;
    // sai o indice, ṕor default
    // se vc colocar uma das possibilidades relacionada em um valor, as demais sao sequenciais.
    
    cout << arma1 << "\n";
     

    return 0;
}