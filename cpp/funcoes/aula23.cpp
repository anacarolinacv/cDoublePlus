#include <iostream>

using namespace std;

// sobrecarga de funcoes;

int soma();
int soma(int n1, int n2);

int main () {


    return 0;

}
void soma (int n1, int n2) {
    int re;
    re = n1 + n2;

    cout << re << "\n";
}

void soma() {
    int n1, n2;

    cout << n1 + n2 << "\n";
}