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
        cout << "Día 1: Ejercicios de fuerza" << endl;
        cout << "1. Levantamiento de pesas con mancuernas: 3 series de 10 repeticiones." << endl;
        cout << "Puedes comenzar con un peso ligero y aumentar progresivamente a medida que te sientas más cómodo." << endl;
        cout << "2. Flexiones de pecho: 3 series de 10 repeticiones." << endl;
        cout << "Si no puedes hacer flexiones completas, puedes hacerlas en tus rodillas o apoyarte en una superficie elevada, como una silla." << endl;
        cout << "3. Sentadillas con peso corporal: 3 series de 12 repeticiones. " << endl;
        cout << "Mantén la espalda recta y baja lentamente, manteniendo los talones en el suelo." << endl;
        cout << "4. Curl de bíceps con mancuernas: 3 series de 10 repeticiones." << endl;
        cout << "Utiliza un peso adecuado para tu nivel de fuerza." << endl;
        cout << "Día 2: Ejercicios cardiovasculares" << endl;
        cout << "1. Carrera o trote: 20-30 minutos." << endl;
        cout << "Puedes correr al aire libre o en una cinta de correr si tienes acceso a una." << endl;
        cout << "2. Salto de cuerda: 3 series de 1 minuto cada una." << endl;
        cout << "Puedes ajustar la velocidad para que sea un desafío adecuado para ti." << endl;
        cout << "3. Burpees: 3 series de 10 repeticiones." << endl;
        cout << "Comienza en posición de cuclillas, luego lleva los pies hacia atrás para hacer una flexión de brazos, salta hacia adelante y salta hacia arriba con los brazos extendidos." << endl;
        cout << "Día 3: Día de descanso o actividad recreativa" << endl;
        cout << "Es importante descansar y permitir que tu cuerpo se recupere." << endl;
        cout << "Puedes aprovechar este día para hacer alguna actividad recreativa que te guste, como jugar fútbol, ​​nadar o andar en bicicleta." << endl;
    } else if (peso >= 40 && peso <= 65 && sexo == "f" && edad >= 12 && edad <= 14 && altura >= 1.40 && altura <= 1.65) {
        cout << "Día 1: Entrenamiento cardiovascular" << endl;
        cout << "1. Calentamiento: 5-10 minutos de trote ligero, saltar la cuerda o bailar." << endl;
        cout << "2. Actividad cardiovascular: 20-30 minutos de actividad cardiovascular moderada, como correr, andar en bicicleta, nadar o practicar deportes como fútbol o baloncesto." << endl;
        cout << "3. Enfriamiento: 5-10 minutos de estiramientos suaves." << endl;
        cout << "Día 2: Entrenamiento de fuerza" << endl;
        cout << "1. Calentamiento: 5-10 minutos de actividad cardiovascular suave." << endl;
        cout << "2. Ejercicios de fuerza: Realice 2-3 series de 10-15 repeticiones de cada uno de los siguientes ejercicios, usando un peso adecuado o el peso corporal:" << endl;
        cout << "3. Sentadillas" << endl;
        cout << "4. Flexiones de brazos (adaptadas o de rodillas si es necesario)" << endl;
        cout << "5. Peso muerto con mancuernas (opcional)" << endl;
        cout << "6. Remo con mancuernas (opcional)" << endl;
        cout << "7. Plancha (para fortalecer el core)" << endl;
        cout << "8. Enfriamiento: 5-10 minutos de estiramientos suaves." << endl;
        cout << "Día 3: Descanso activo o actividad recreativa" << endl;
        cout << "1. Descanso activo: Paseo en bicicleta, caminata o yoga suave para ayudar a recuperarse del ejercicio y mantener activa." << endl;
        cout << "2. Actividad recreativa: Participar en actividades recreativas al aire libre, como jugar al fútbol, ​​andar en patineta o patinar en línea." << endl;
        cout << "Día 4: Entrenamiento cardiovascular" << endl;
        cout << "1. Calentamiento: 5-10 minutos de actividad cardiovascular suave." << endl;
        cout << "2. Actividad cardiovascular: 20-30 minutos de actividad cardiovascular moderada, como correr, andar en bicicleta, nadar o practicar deportes como fútbol o baloncesto." << endl;
        cout << "3. Enfriamiento: 5-10 minutos de estiramientos suaves." << endl;
        cout << "Día 5: Entrenamiento de flexibilidad y equilibrio" << endl;
        cout << "1. Calentamiento: 5-10 minutos de actividad cardiovascular suave." << endl;
        cout << "2. Ejercicios de flexibilidad: Realice ejercicios de estiramientos estáticos para los principales grupos musculares, como piernas, brazos, espalda y torso. Mantener cada estiramiento durante 15-30 segundos." << endl;
        cout << "3. Ejercicios de equilibrio: Practicar ejercicios de equilibrio, como estar parada en un solo pie o hacer yoga, para mejorar la estabilidad y la coordinación." << endl;
        cout << "4. Enfriamiento: 5-10 minutos de estiramientos suaves." << endl;

    } else if (peso >= 66 && peso <= 80 && sexo == "m" && edad >= 15 && edad <= 20 && altura >= 1.66 && altura <= 1.90) {
        cout << "Día 1: Rutina de entrenamiento con pesas (parte superior del cuerpo)" << endl;
        cout << "1. Prensa de banca: 3-4 series de 8-10 repeticiones" << endl;
        cout << "2. Dominadas o jalones de polea: 3-4 series de 8-10 repeticiones" << endl;
        cout << "3. Press de hombros con mancuernas: 3-4 series de 8-10 repeticiones" << endl;
        cout << "4. Remo con barra: 3-4 series de 8-10 repeticiones" << endl;
        cout << "5. Curl de bíceps con mancuernas: 3 series de 10-12 repeticiones" << endl;
        cout << "7. Extensión de tríceps con polea: 3 series de 10-12 repeticiones" << endl;
        cout << "Día 2: Rutina de entrenamiento con pesas (parte inferior del cuerpo)" << endl;
        cout << "1. Sentadillas con barra: 3-4 series de 8-10 repeticiones" << endl;
        cout << "2. Peso muerto: 3-4 series de 8-10 repeticiones" << endl;
        cout << "3. Zancadas con mancuernas: 3-4 series de 10-12 repeticiones (cada pierna)" << endl;
        cout << "4. Elevacion de pantorrillas en maquina: 3-4 series de 12-15 repeticiones" << endl;
        cout << "5. Abdominales: 3 series de 15-20 repeticiones (puedes elegir el ejercicio de abdominales que prefieres, como crunches, Russian twists, etc.)" << endl;
        cout << "Día 3: Rutina de entrenamiento cardiovascular" << endl;
        cout << "1. Correr o hacer jogging en una cinta de correr: 30-40 minutos" << endl;
        cout << "2. Ciclismo en bicicleta estática: 30-40 minutos" << endl;
        cout << "3. Saltar la cuerda: 10-15 minutos" << endl;
        cout << "4. Otra actividad cardiovascular de tu elección, como nadar, practicar deportes de equipo, etc.: 30-40 minutos" << endl;
        cout << "Día 4: Descanso activo o yoga" << endl;
        cout << "5. Realice actividades de baja intensidad como caminar, estirar o hacer yoga para ayudar en la recuperación muscular y reducir el estrés." << endl;

    } else if (peso >= 66 && peso <= 75 && sexo == "f" && edad >= 15 && edad <= 20 && altura >= 1.61 && altura <= 1.80)
        cout << "Día 1: Entrenamiento de fuerza" << endl;
        cout << "1. Calentamiento: 5-10 minutos de cardio ligero, como saltar a la cuerda o hacer jogging en su lugar." << endl;
        cout << "2. Flexiones de brazos: 3 series de 10-12 repeticiones." << endl;
        cout << "3. Flexiones de brazos: 3 series de 10-12 repeticiones." << endl;
        cout << "4. Peso muerto con mancuernas: 3 series de 10-12 repeticiones." << endl;
        cout << "5. Press de hombros con mancuernas: 3 series de 10-12 repeticiones." << endl;
        cout << "Plancha: 3 series de 30-60 segundos." << endl;
        cout << "1. Enfriamiento: Estiramientos estáticos de los principales grupos musculares durante 5-10 minutos." << endl;
        cout << "Día 2: Cardio y entrenamiento de intervalos" << endl;
        cout << "2. Calentamiento: 5-10 minutos de cardio moderado, como correr o andar en bicicleta." << endl;
        cout << "3. Entrenamiento de intervalos: 30 segundos de actividad de alta intensidad, como saltar o correr en su lugar, seguido de 30 segundos de descanso. Repite durante 15-20 minutos." << endl;
        cout << "4. Ejercicio de cardio de elección: Correr, andar en bicicleta, nadar u otra actividad cardiovascular de tu elección durante 20-30 minutos." << endl;
        cout << "5. Enfriamiento: Estiramientos dinámicos y estáticos durante 5-10 minutos." << endl;
        cout << "Día 3: Entrenamiento de cuerpo completo" << endl;
        cout << "1. Calentamiento: 5-10 minutos de cardio ligero." << endl;
        cout << "2. Burpees: 3 series de 10-12 repeticiones." << endl;
        cout << "3. Levantamiento de piernas en posición supina: 3 series de 12-15 repeticiones." << endl;
        cout << "4. Pull-ups asistidos o remo con mancuernas: 3 series de 10-12 repeticiones." << endl;
        cout << "5. Curl de bíceps con mancuernas: 3 series de 10-12 repeticiones." << endl;
        cout << "7. Extensión de tríceps con mancuernas: 3 series de 10-12 repeticiones." << endl;
        cout << "8. Abdominales: 3 series de 15-20 repeticiones." << endl;
        cout << "9. Enfriamiento: Estiramientos estáticos durante 5-10 minutos." << endl;
        cout << "Día 4: Descanso activo o actividad de baja intensidad, como yoga o caminatas suaves." << endl;
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