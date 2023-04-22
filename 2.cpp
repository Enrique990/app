#include <iostream>

using namespace std;

void calcularDieta(int peso, string sexo, int edad, double altura) {
    if (peso >= 45 && peso <= 65 && sexo == "m" && edad >= 12 && edad <= 14 && altura >= 1.45 && altura <= 1.65) {
        cout << "Desayuno:" << endl;
        cout << "1 taza de leche baja en grasa" << endl;
        cout << "1 porción de cereales integrales (como avena, trigo integral o arroz integral)" << endl;
        cout << "1 porción de frutas frescas (como una manzana, una naranja o un plátano)" << endl;
        cout << "Merienda de la mañana:" << endl;
        cout << "1 yogur bajo en grasa" << endl;
        cout << "1 porción de nueces o semillas (como almendras, nueces o semillas de chía)" << endl;
        cout << "Almuerzo:" << endl;
        cout << "1 porción de proteína magra (como pollo, pescado, pavo o legumbres)" << endl;
        cout << "1 porción de verduras (como zanahorias, brócoli o espinacas)" << endl;
        cout << "1 porción de carbohidratos complejos (como arroz integral, quinoa o pasta de trigo integral)" << endl;
        cout << "Merienda de la tarde:" << endl;
        cout << "1 porción de yogur bajo en grasa" << endl;
        cout << "1 porción de frutas frescas (como uvas, melocotones o peras)" << endl;
        cout << "Cena:" << endl;
        cout << "1 porción de proteína magra (como carne magra, pescado o tofu)" << endl;
        cout << "1 porción de vegetales (como judías verdes, zanahorias o coliflor)" << endl;
        cout << "1 porción de carbohidratos complejos (como patatas, batatas o arroz integral)" << endl;
        cout << "Merienda nocturna:" << endl;
        cout << "1 porción de frutas frescas (como manzanas, uvas o kiwis)" << endl;
        cout << "1 porción de nueces o semillas (como nueces, pistachos o semillas de girasol)" << endl;
    } else if (peso >= 40 && peso <= 65 && sexo == "f" && edad >= 12 && edad <= 14 && altura >= 1.40 && altura <= 1.65) {
        cout << "Desayuno:" << endl;
        cout << "1 taza de leche baja en grasa o leche vegetal fortificada con calcio" << endl;
        cout << "1 porción de cereal integral bajo en azúcar" << endl;
        cout << "1 porción de fruta fresca, como una manzana o una banana" << endl;
        cout << "Merienda de media mañana:" << endl;
        cout << "1 yogur bajo en grasa o yogur griego con frutas frescas" << endl;
        cout << "Almuerzo:" << endl;
        cout << "1 porción de proteína magra, como pollo a la parrilla, pescado o tofu" << endl;
        cout << "1 porción de verduras, como zanahorias, brócoli o ensalada mixta con aderezo bajo en grasa" << endl;
        cout << "1 porción de carbohidratos complejos, como arroz integral, quinoa o pasta integral" << endl;
        cout << "Merienda de la tarde:" << endl;
        cout << "1 porción de nueces o semillas, como almendras, nueces o semillas de chía" << endl;
        cout << "Cena:" << endl;
        cout << "1 porción de proteína magra, como carne magra, pescado o legumbres" << endl;
        cout << "1 porción de verduras al vapor o asadas" << endl;
        cout << "1 porción de carbohidratos complejos, como patatas o batatas" << endl;
        cout << "Merienda nocturna:" << endl;
        cout << "1 porción de fruta fresca o frutos secos, como una naranja o una porción de pasas" << endl;
    } else if (peso >= 66 && peso <= 80 && sexo == "m" && edad >= 15 && edad <= 20 && altura >= 1.66 && altura <= 1.90) {
        cout << "Desayuno:" << endl;
        cout << "1 taza de avena cocida con frutas frescas (como plátano o manzana) y nueces." << endl;
        cout << "1 vaso de leche descremada o leche vegetal." << endl;
        cout << "1 rebanada de pan integral con mantequilla de maní o aguacate." << endl;
        cout << "Merienda de la mañana:" << endl;
        cout << "1 yogur bajo en grasa o yogur griego con frutas frescas (como fresas o arándanos)." << endl;
        cout << "1 puñado de almendras o nueces." << endl;
        cout << "Almuerzo:" << endl;
        cout << "1 porción de pollo a la parrilla o pescado a la plancha." << endl;
        cout << "1 porción de arroz integral o quinoa." << endl;
        cout << "Verduras al vapor (como brócoli, zanahorias y judías verdes)." << endl;
        cout << "Merienda de la tarde:" << endl;
        cout << "1 batido de proteínas con frutas (como plátano o mango)." << endl;
        cout << "1 porción de yogur bajo en grasa." << endl;
        cout << "1 porción de salmón a la parrilla o pechuga de pollo a la parrilla." << endl;
        cout << "1 ración de pasta integral o patatas al horno." << endl;
        cout << "Ensalada mixta con verduras frescas (como lechuga, espinacas, tomate y pepino) aderezada con aceite de oliva y vinagre." << endl;
        cout << "Merienda nocturna:" << endl;
        cout << "1 porción de frutas frescas (como manzana, pera o naranja)." << endl;
        cout << "1 porción de nueces o almendras." << endl;
    } else if (peso >= 66 && peso <= 75 && sexo == "f" && edad >= 15 && edad <= 20 && altura >= 1.66 && altura <= 1.80) {
        cout << "Desayuno:" << endl;
        cout << "Desayuno:" << endl;
        cout << "1 porción de cereal integral con leche baja en grasa" << endl;
        cout << "1 fruta fresca, como una manzana o una naranja" << endl;
        cout << "1 vaso de agua" << endl;
        cout << "Merienda de la mañana:" << endl;
        cout << "1 porción de frutas frescas, como una banana o una pera" << endl;
        cout << "1 puñado de nueces o almendras" << endl;
        cout << "Almuerzo:" << endl;
        cout << "1 porción de proteína magra, como pollo a la parrilla, pescado o tofu" << endl;
        cout << "1 porción de verduras frescas, como ensalada de espinacas o zanahorias crudas" << endl;
        cout << "1 porción de carbohidratos complejos, como arroz integral o quinoa" << endl;
        cout << "1 fruta fresca" << endl;
        cout << "1 vaso de agua" << endl;
        cout << "Merienda de la tarde:" << endl;
        cout << "1 yogur bajo en grasa" << endl;
        cout << "1 porción de frutas frescas, como uvas o fresas" << endl;
        cout << "Cena:" << endl;
        cout << "1 porción de proteína magra, como carne magra, pescado o legumbres" << endl;
        cout << "1 porción de verduras al vapor, como brócoli o coliflor" << endl;
        cout << "1 porción de carbohidratos complejos, como patatas o batatas" << endl;
        cout << "1 vaso de agua" << endl;
        cout << "Merienda nocturna:" << endl;
        cout << "1 porción de frutas frescas, como piña o melón" << endl;
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
    } else if (peso >= 66 && peso <= 75 && sexo == "f" && edad >= 15 && edad <= 20 && altura >= 1.61 && altura <= 1.80)
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

        if (opcion == 1 || opcion == 2) {
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