#include <iostream>

using namespace std;

void calcularDieta(int peso, string sexo, int edad, double altura) {
    if (peso >= 45 && peso <= 65 && sexo == "m" && edad >= 12 && edad <= 14 && altura >= 1.45 && altura <= 1.65) {
        cout << "Recomendación de dieta para hombre de 12-14 años, peso 45-65 kg y altura 1.45-1.65 m" << endl;
    } else if (peso >= 40 && peso <= 65 && sexo == "f" && edad >= 12 && edad <= 14 && altura >= 1.40 && altura <= 1.65) {
        cout << "Recomendación de dieta para mujer de 12-14 años, peso 40-60 kg y altura 1.40-1.60 m" << endl;
    } else if (peso >= 66 && peso <= 80 && sexo == "m" && edad >= 15 && edad <= 20 && altura >= 1.66 && altura <= 1.90) {
        cout << "Recomendación de dieta para hombre de 15-20 años, peso 67-80 kg y altura 1.66-1.90 m" << endl;
    } else if (peso >= 66 && peso <= 75 && sexo == "f" && edad >= 15 && edad <= 20 && altura >= 1.66 && altura <= 1.80) {
        cout << "Recomendación de dieta para mujer de 15-20 años, peso 66-75 kg y altura 1.61-1.80 m" << endl;
    } else {
        cout << "No se encontró una recomendación de dieta para los datos ingresados." << endl;
    }
}

void calcularRutina(int peso, string sexo, int edad, double altura) {
    if (peso >= 45 && peso <= 65 && sexo == "m" && edad >= 12 && edad <= 14 && altura >= 1.45 && altura <= 1.65) {
        cout << "Recomendación de rutina de ejercicios para hombre de 12-14 años, peso 45-65 kg y altura 1.45-1.65 m" << endl;
    } else if (peso >= 40 && peso <= 65 && sexo == "f" && edad >= 12 && edad <= 14 && altura >= 1.40 && altura <= 1.65) {
        cout << "Recomendación de rutina de ejercicios para mujer de 12-14 años, peso 40-60 kg y altura 1.40-1.60 m" << endl;
    } else if (peso >= 66 && peso <= 80 && sexo == "m" && edad >= 15 && edad <= 20 && altura >= 1.66 && altura <= 1.90) {
        cout << "Recomendación de rutina de ejercicios para hombre de 15-20 años, peso 67-80 kg y altura 1.66-1.90 m" << endl;
    } else if (peso >= 66 && peso <= 75 && sexo == "f" && edad >= 15 && edad <= 20 && altura >= 1.66 && altura <= 1.80)
        cout << "Recomendación de rutina de ejercicios para hombre de 15-20 años, peso 67-80 kg y altura 1.66-1.90 m" << endl;
}

int main() {
    float peso;
    string sexo;
    int edad;
    float altura;
    int opcion;

    while (true) {
        cout << "Seleccione una opcion:" << endl;
        cout << "1. Dieta" << endl;
        cout << "2. Rutina de ejercicios" << endl;
        cout << "3. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        if (opcion == 1 || opcion == 2 ) {
            cout << "Ingrese su peso: ";
            cin >> peso;
            cout << "Ingrese su sexo (M/F): ";
            cin >> sexo;
            cout << "Ingrese su edad: ";
            cin >> edad;
            cout << "Ingrese su altura (en metros): ";
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
                cout << "Saliendo del programa..." << endl;
                return 0;
            default:
                cout << "Opción invalida. Intente de nuevo." << endl;
        }
    }

    return 0;
}