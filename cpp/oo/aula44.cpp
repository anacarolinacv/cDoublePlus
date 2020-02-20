#include <iostream>
#include <list>

using namespace std;


int main() {

    Aviao *av1 = new Aviao("preta");
    av1 -> defineTipoAviao(1);

    cout << av1->velMax;

    return 0;
}

class Aviao {
public:
    float velInicio = 0.0;
    float velMax;
    string id;
    string tipo;
    Aviao(int tp);

    void defineTipoAviao(int id);

    private:

}

class Aeroporto{
public:
    Aviao[10] avioes;
    
}

void Aviao :: defineTipoAviao(int tp) {
    if (tp == 1){
        this.velMax = 800.0;
        this.tipo = "Jato";
    } else {
        this.velMax = 400.0;
        this.tipo = "Comercial ";
    }
    
}

