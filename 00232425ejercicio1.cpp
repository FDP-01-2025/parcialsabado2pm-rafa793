#include <iostream>
using namespace std;

int main() {
    const int tamano = 12;
    int numeros[tamano];

    // Lectura de los 12 números
    cout << "Ingrese 12 números:" << endl;
    for (int i = 0; i < tamano; i++) {
        cout << "Número " << i + 1 << ": ";
        cin >> numeros[i];
    }
    cout << "\nNúmeros en orden inverso:" << endl;
    for (int i = tamano - 1; i >= 0; i--) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}