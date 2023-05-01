#include <iostream>
#include "funciones.cpp"
using namespace std;

int main() {
    float peso;
    string sexo;
    int edad;
    float altura;
    int opcion;

    while (true) {
        cout << "Select an option:" << endl;
        cout << "1. Diet" << endl;
        cout << "2. Exercise routine" << endl;
        cout << "3. Exit" << endl;
        cout << "Option: ";
        cin >> opcion;

        if (opcion == 1 || opcion == 2) {
            cout << "Enter your weight: ";
            cin >> peso;
            cout << "Enter your gender (M/F): ";
            cin >> sexo;
            cout << "Enter your age: ";
            cin >> edad;
            cout << "Enter your height (in meters): ";
            cin >> altura;
        }

        switch (opcion) {
            case 1:
                calcularDieta(peso, sexo, edad, altura);
                break;
            case 2:
                calcularRutina(peso, sexo, edad, altura);
                break;
            case 3:
                cout << "Leaving the program..." << endl;
                return 0;
            default:
                cout << "Invalid option. Try again." << endl;
        }
    }
    return 0;
}