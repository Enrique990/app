#include <iostream>

using namespace std;

void calcularDieta(float peso, char sexo, int edad, float altura) {
    cout << "Recomendacion de dieta: ... (segun los datos ingresados)" << endl;
}

void calcularRutina(float peso, char sexo, int edad, float altura) {
    cout << "Recomendacion de rutina de ejercicios: ... (segun los datos ingresados)" << endl;
}

void calcularAmbas(float peso, char sexo, int edad, float altura) {
    cout << "Recomendacion de dieta: ... (segun los datos ingresados)" << endl;
    cout << "Recomendacion de rutina de ejercicios: ... (segun los datos ingresados)" << endl;
}

int main() {
    float peso;
    char sexo;
    int edad;
    float altura;
    int opcion;

    while (true) {
        cout << "Seleccione una opcion:" << endl;
        cout << "1. Dieta" << endl;
        cout << "2. Rutina de ejercicios" << endl;
        cout << "3. Ambas" << endl;
        cout << "4. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        if (opcion == 1 || opcion == 2 || opcion == 3) {
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
                calcularAmbas(peso, sexo, edad, altura);
                break;
            case 4:
                cout << "Saliendo del programa..." << endl;
                return 0;
            default:
                cout << "Opción invalida. Intente de nuevo." << endl;
        }
    }

    return 0;
}