#include <iostream>

using namespace std;

// for basico

int main() {
    int x;
    cin >> x;
    int y;
    cin >> y;


    for (i = 0; i < 10 ; i++){

        if (i < 5) {
           cout << x << "\n";
        } else if (i == 5) {
            cout << x  << y << "\n";
        } else {
            cout << "Repeat!";
            break;
        }
    }
 
   return 0;  
}