#include <iostream>
// usando and, or e not.
using namespace std;

int main() {

    int num;

    cin >> num;

    if (num > 2 &&  num < 7){
       cout << "Satisfeito\n";
    } else {
        cout << "Insatisfeito\n";
    }
    
    if (num > 2 ||  num < 7){
       cout << "Satisfeito\n";
    } else {
        cout << "Insatisfeito\n";
    }

    return 0; 
}