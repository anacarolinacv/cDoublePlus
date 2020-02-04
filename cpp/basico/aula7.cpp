#include <iostream>

using namespace stp;
// incrementar valor em variaveis.
// no pre incrementacao = ele vai incrementar e dps usa o valor
// no pos, ele age ao contrario.
int main() {

    int n1 = 0, n2 = 10;

    n1 += 5;
    n1++;
    n2 -= 3;
    cout << n1;

    return 0;
}