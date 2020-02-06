#include <iostream>


using namespace std;

int main () {

    char palavra[30], letra[1], secreta[30];
    int chances, acertos;
    bool houveAcerto = false;

    cout << "Digite a quantidade de chances da rodada!\n";
    cin >> chances

    cout << "Digite a palavra secreta da rodada!\n";
    cin >> palavra;

    acertos = 0;
    while (chances > 0){
        cout << "Palavra secreta incompleta!";
        cout << secreta;
        cout << "Digite a letra escolhida!\n";
        cin << letra[0];

        for ( i = 0; i < strlen(palavra); i++){
            if(palavra[i] == letra[0]){
                secreta[i] = letra[0];
                acertos++;
                acerto = true;
            }         
        }
        if(palavra == secreta) {
            cout << "PALAVRA ENCONTRADA!\n"; 
        }

        if(acerto = false) {
            chances--;
        }
        acerto = false;
    }
    
    return 0;
}