#include <iostream>
#include <stdio.h>


using namespace std;
// \0 eh o delimitador da string.
// \n quebra o printf em dois.

int main () {

    int num;

    printf("Informe sua idade!\n");

    scanf("%d", &num);

    printf("Sua idade é %i\n", num);

    return 0;
}