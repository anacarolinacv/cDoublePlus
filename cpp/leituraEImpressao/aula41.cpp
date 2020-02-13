#include <iostream>
#include <stdio.h>
#include<math.h>
#include <iomanip>


using namespace std;


int main () {

    float pi = M_PI;

    // definir a casa decimal.

    printf("Valor de pi: %.2f\n", pi);

    printf("Valor de pi: %07.1f\n", pi);


    // trocando a base

    cout << "Valor em hexadecimal" << hex << "\n";
    cout << "Valor em octadecimal" << oct << "\n";
    cout << "Valor em hexadecimal" << setbase(16) << "\n";

    // precisao

    cout.precision(3);
    // soma +1 a quantidade de casas que vc quer 
    cout << "Valor de pi" << pi << "\n";

    // voltando a precisao
    cout.precision(-1);

    cout << "Valor de pi" << pi << "\n";

    // notacao cientifica

    cout << "Valor de pi" << std:scientific << pi << "\n";

    return 0;
}