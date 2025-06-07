#include <iostream>
using namespace std;

int main() {
    int dia;

    cout << "Ingrese un número del 1 al 7 representando un día de la semana (1 = Lunes, 7 = Domingo): ";
    cin >> dia;

    if (dia >= 1 && dia <= 5) {
        cout << "Es un día de semana." << endl;
    } else if (dia == 6 || dia == 7) {
        cout << "Es fin de semana." << endl;
    } else {
        cout << "Número inválido. Por favor ingrese un número del 1 al 7." << endl;
    }
    
    return 0;
}