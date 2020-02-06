#include <iostream>


using namespace std;

// recursividade.
void contador (int num, int cont=0);
void fatorial(int num, int fat, int cont=0);
void fibonacci(int num, int temp, int =1);

int main () {

    contador(20);

    return 0;
}


void contador (int num, int cont) {
    cout << cont << "\n";

    if(num > cont) {
        // acrescentou antes para usar o valor ja modificado.

        contador(num, ++cont);
    }

}


void fatorial(int num) {
    if(num == 0) {
        return 1;
    }
    return num * fatorial(n-1);
    
}

void fibonacci(int num) {
    cout << cont << "\n";

    if(num == 1 || num == 2) {
        return 1;

    } else {
        return fibonacci(num -1) + fibonacci(num-2);
    }

}