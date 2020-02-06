#include <iostream>

using namespace std;

// utilizacao do break;

int main () {
    int cont;
    cont = 0;

    while (cont < 1000){
        cout << cont << "\n";

        if (cont == 200)
        {
            cout << "Meta alcançada!";
            break;
        }
        
        cont++;
    }
    
}