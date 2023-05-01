#include <iostream>
using namespace std;

#include <iostream>

using namespace std;

void calcularDieta(int peso, string sexo, int edad, double altura) {
    if (peso >= 35 && peso <= 65 && sexo == "m" && edad >= 12 && edad <= 14 && altura >= 1.45 && altura <= 1.70) {
        cout << "Breakfast\n:" << endl;
        cout << "1 cup low-fat milk" << endl;
        cout << "1 serving of whole grains (such as oatmeal, whole wheat, or brown rice)" << endl;
        cout << "1 serving of fresh fruit (such as an apple, orange, or banana)" << endl;
        cout << "Morning snack:" << endl;
        cout << "1 yogur bajo en grasa" << endl;
        cout << "1 porción de nueces o semillas (como almendras, nueces o semillas de chía\n)" << endl;
        cout << "Lunch\n:" << endl;
        cout << "1 serving of lean protein (such as chicken, fish, turkey, or legumes)" << endl;
        cout << "1 serving of vegetables (such as carrots, broccoli, or spinach)" << endl;
        cout << "1 serving of complex carbohydrates (such as brown rice, quinoa, or whole wheat pasta)\n" << endl;
        cout << "afternoon snack:\n" << endl;
        cout << "1 serving of low-fat yogurt" << endl;
        cout << "1 serving of fresh fruit (such as grapes, peaches, or pears)\n" << endl;
        cout << "Dinner\n:" << endl;
        cout << "1 serving of lean protein (such as lean meat, fish, or tofu)" << endl;
        cout << "1 serving of vegetables (such as green beans, carrots, or cauliflower)" << endl;
        cout << "1 serving of complex carbohydrates (such as potatoes, sweet potatoes, or brown rice)\n" << endl;
        cout << "late night snack:\n" << endl;
        cout << "1 serving of fresh fruit (such as apples, grapes, or kiwis)" << endl;
        cout << "1 serving of nuts or seeds (such as walnuts, pistachios, or sunflower seeds\n)" << endl;
    } else if (peso >= 35 && peso <= 65 && sexo == "f" && edad >= 12 && edad <= 14 && altura >= 1.40 && altura <= 1.70) {
        cout << "Breakfast\n:" << endl;
        cout << "1 cup low-fat milk or calcium-fortified non-dairy milk" << endl;
        cout << "1 serving of low-sugar whole grain cereal" << endl;
        cout << "1 serving of fresh fruit, such as an apple or banana\n" << endl;
        cout << "Morning snack\n:" << endl;
        cout << "1 low-fat yogurt or Greek yogurt with fresh fruit\n" << endl;
        cout << "Lunch:\n" << endl;
        cout << "1 serving of lean protein, such as grilled chicken, fish, or tofu" << endl;
        cout << "1 serving of vegetables, such as carrots, broccoli, or mixed salad with low-fat dressing" << endl;
        cout << "1 serving of complex carbohydrates, such as brown rice, quinoa, or whole wheat pasta\n" << endl;
        cout << "afternoon snack:\n" << endl;
        cout << "1 serving of nuts or seeds, such as almonds, walnuts, or chia seeds\n" << endl;
        cout << "Dinner:\n" << endl;
        cout << "1 serving of lean protein, such as lean meat, fish, or beans" << endl;
        cout << "1 serving of steamed or roasted vegetables" << endl;
        cout << "1 serving of complex carbohydrates, such as potatoes or sweet potatoes\n" << endl;
        cout << "late night snack:\n" << endl;
        cout << "1 serving of complex carbohydrates, such as potatoes or sweet potatoes\n" << endl;
    } else if (peso >= 66 && peso <= 100 && sexo == "m" && edad >= 15 && edad <= 50 && altura >= 1.66 && altura <= 1.90) {
        cout << "Breakfast:\n" << endl;
        cout << "1 cup of cooked oatmeal with fresh fruits (such as banana or apple) and nuts." << endl;
        cout << "1 glass of skim milk or vegetable milk." << endl;
        cout << "1 slice of whole wheat bread with peanut or avocado butter.\n" << endl;
        cout << "Morning snack:\n" << endl;
        cout << "1 low-fat yogurt or Greek yogurt with fresh fruit (such as strawberries or blueberries)." << endl;
        cout << "1 handful of almonds or walnuts.\n" << endl;
        cout << "Lunch:\n" << endl;
        cout << "1 portion of grilled chicken or grilled fish." << endl;
        cout << "1 serving of brown rice or quinoa." << endl;
        cout << "Steamed vegetables (such as broccoli, carrots, and green beans).\n" << endl;
        cout << "afternoon snack:\n" << endl;
        cout << "1 protein shake with fruit (such as banana or mango)." << endl;
        cout << "1 serving of low-fat yogurt.\n" << endl;
        cout << "Dinner:\n" << endl;
        cout << "1 serving of grilled salmon or grilled chicken breast." << endl;
        cout << "1 serving of whole wheat pasta or baked potatoes." << endl;
        cout << "Mixed salad with fresh vegetables (such as lettuce, spinach, tomato and cucumber) dressed with olive oil and vinegar.\n" << endl;
        cout << "late night snack:\n" << endl;
        cout << "1 serving of fresh fruit (such as apple, pear, or orange)." << endl;
        cout << "1 serving of walnuts or almonds.\n" << endl;
    } else if (peso >= 66 && peso <= 100 && sexo == "f" && edad >= 15 && edad <= 50 && altura >= 1.66 && altura <= 1.90) {
        cout << "Breakfast:\n" << endl;
        cout << "1 serving of whole grain cereal with low-fat milk" << endl;
        cout << "1 fresh fruit, such as an apple or orange" << endl;
        cout << "1 glass of water\n" << endl;
        cout << "Morning snack:\n" << endl;
        cout << "1 serving of fresh fruit, such as a banana or pear" << endl;
        cout << "1 handful of walnuts or almonds\n" << endl;
        cout << "Lunch:\n" << endl;
        cout << "1 serving of lean protein, such as grilled chicken, fish, or tofu" << endl;
        cout << "1 serving of fresh vegetables, such as spinach salad or raw carrots" << endl;
        cout << "1 serving of complex carbohydrates, such as brown rice or quinoa" << endl;
        cout << "1 fresh fruit" << endl;
        cout << "1 glass of water\n" << endl;
        cout << "afternoon snack:\n" << endl;
        cout << "1 low-fat yogurt" << endl;
        cout << "1 serving of fresh fruit, such as grapes or strawberries\n" << endl;
        cout << "Dinner:\n" << endl;
        cout << "1 serving of lean protein, such as lean meat, fish, or beans" << endl;
        cout << "1 serving of steamed vegetables, such as broccoli or cauliflower" << endl;
        cout << "1 serving of complex carbohydrates, such as potatoes or sweet potatoes" << endl;
        cout << "1 glass of water\n" << endl;
        cout << "late night snack:\n" << endl;
        cout << "1 serving of fresh fruit, such as pineapple or cantaloupe\n" << endl;
    } else {
        cout << "No dietary recommendation was found for the entered data.\n" << endl;
    }
}

void calcularRutina(int peso, string sexo, int edad, double altura) {
    if (peso >= 35 && peso <= 65 && sexo == "m" && edad >= 12 && edad <= 14 && altura >= 1.45 && altura <= 1.70) {
        cout << "Day 1: Strength exercises\n" << endl;
        cout << "1. Weight lifting with dumbbells: 3 series of 10 repetitions." << endl;
        cout << "You can start with a light weight and gradually increase as you feel more comfortable." << endl;
        cout << "2. Push-ups: 3 series of 10 repetitions." << endl;
        cout << "If you can't do full pushups, you can do them on your knees o apoyarte en una superficie elevada, como una silla." << endl;
        cout << "3. Bodyweight Squats: 3 sets of 12 reps. " << endl;
        cout << "Keeping your back straight, lower yourself slowly, keeping your heels on the ground." << endl;
        cout << "4. Dumbbell biceps curl: 3 sets of 10 repetitions." << endl;
        cout << "Use an appropriate weight for your strength level.\n" << endl;
        cout << "Day 2: Cardiovascular exercises\n" << endl;
        cout << "1. Run or jog: 20-30 minutes." << endl;
        cout << "You can run outside or on a treadmill if you have access to one." << endl;
        cout << "2. Jump rope: 3 series of 1 minute each." << endl;
        cout << "You can adjust the speed to make it a suitable challenge for you.\n" << endl;
        cout << "3. Burpees: 3 series of 10 repetitions.\n" << endl;
        cout << "Begin in a squat position, then bring your feet back to do a push-up, jump forward, and jump up with your arms extended.\n" << endl;
        cout << "Day 3: Rest day or recreational activity\n" << endl;
        cout << "It is important to rest and allow your body to recover." << endl;
        cout << "You can take advantage of this day to do some recreational activity that you like, such as playing soccer, swimming or biking.\n" << endl;
    } else if (peso >= 35 && peso <= 65 && sexo == "f" && edad >= 12 && edad <= 14 && altura >= 1.40 && altura <= 1.70) {
        cout << "Day 1: Cardio Training\n" << endl;
        cout << "1. Warm-up: 5-10 minutes of light jogging, jumping rope, or dancing." << endl;
        cout << "2. Cardiovascular Activity: 20-30 minutes of moderate cardiovascular activity such as running, biking, swimming, or playing sports such as soccer or basketball." << endl;
        cout << "3. Cool down: 5-10 minutes of light stretching.\n" << endl;
        cout << "Day 2: Strength training\n" << endl;
        cout << "1. Warm up: 5-10 minutes of light cardiovascular activity." << endl;
        cout << "2. Strength exercises: Perform 2-3 sets of 10-15 repetitions of each of the following exercises, using an appropriate weight or body weight: " << endl;
        cout << "3. squats" << endl;
        cout << "4. Push-ups (adapted or kneeling if necessary)" << endl;
        cout << "5. Dumbbell deadlift (optional)" << endl;
        cout << "6. Dumbbell row (optional)" << endl;
        cout << "7. Plank (to strengthen the core)" << endl;
        cout << "8. Cool down: 5-10 minutes of light stretching.\n" << endl;
        cout << "Day 3: Active rest or recreational activity\n" << endl;
        cout << "1. Active rest: Bike ride, walk or gentle yoga to help recover from exercise and keep active." << endl;
        cout << "2. Recreational Activity: Participating in outdoor recreational activities such as playing soccer, skateboarding, or rollerblading.\n" << endl;
        cout << "Day 4: Cardio Training\n" << endl;
        cout << "1. Warm up: 5-10 minutes of light cardiovascular activity." << endl;
        cout << "2. Cardiovascular Activity: 20-30 minutes of moderate cardiovascular activity such as running, biking, swimming, or playing sports such as soccer or basketball." << endl;
        cout << "3. Cool down: 5-10 minutes of light stretching.\n" << endl;
        cout << "Day 5: Flexibility and balance trainingg\n" << endl;
        cout << "1. Warm up: 5-10 minutes of light cardiovascular activity." << endl;
        cout << "2. Flexibility exercises: Perform static stretching exercises for major muscle groups such as legs, arms, back, and core. Hold each stretch for 15-30 seconds." << endl;
        cout << "3. Balance exercises: Practice balance exercises, such as standing on one foot or doing yoga, to improve stability and coordination.\n" << endl;
        cout << "4. Cool down: 5-10 minutes of light stretching.\n" << endl;

    } else if (peso >= 66 && peso <= 100 && sexo == "m" && edad >= 15 && edad <= 50 && altura >= 1.66 && altura <= 1.90) {
        cout << "Day 1: Weight training routine (upper body)\n" << endl;
        cout << "1. Bench press: 3-4 series of 8-10 repetitions" << endl;
        cout << "2. Pulldowns or Pulldowns: 3-4 sets of 8-10 reps" << endl;
        cout << "3. Dumbbell Shoulder Press: 3-4 sets of 8-10 reps" << endl;
        cout << "4. Barbell Row: 3-4 sets of 8-10 reps" << endl;
        cout << "5. Dumbbell biceps curl: 3 sets of 10-12 reps" << endl;
        cout << "7. Cable Triceps Extension: 3 sets of 10-12 reps\n" << endl;
        cout << "Day 2: Weight Training Routine (Lower Body)\n" << endl;
        cout << "1. Barbell squats: 3-4 sets of 8-10 reps" << endl;
        cout << "2. Deadlift: 3-4 series of 8-10 repetitions" << endl;
        cout << "3. Dumbbell lunges: 3-4 sets of 10-12 repetitions (each leg)" << endl;
        cout << "4. Machine calf raises: 3-4 sets of 12-15 repetitions" << endl;
        cout << "5. Abdominals: 3 series of 15-20 repetitions (you can choose the abdominal exercise you prefer, such as crunches, Russian twists, etc.)\n" << endl;
        cout << "Day 3: Cardio Training Routine\n" << endl;
        cout << "1. Running or jogging on a treadmill: 30-40 minutes" << endl;
        cout << "2. Cycling on a stationary bike: 30-40 minutes" << endl;
        cout << "3. Jump rope: 10-15 minutes" << endl;
        cout << "4. Other cardiovascular activity of your choice, such as swimming, team sports, etc.: 30-40 minutes\n" << endl;
        cout << "Day 4: Active rest or yoga\n" << endl;
        cout << "5. Engage in low-intensity activities such as walking, stretching, or yoga to aid muscle recovery and reduce stress." << endl;

    } else if (peso >= 66 && peso <= 100 && sexo == "f" && edad >= 15 && edad <= 50 && altura >= 1.61 && altura <= 1.90)
        cout << "Day 1: Strength training\n" << endl;
        cout << "1. Warm up: 5-10 minutes of light cardio, like jumping rope or jogging in place." << endl;
        cout << "2. Push-ups: 3 series of 10-12 repetitions." << endl;
        cout << "3. Push-ups: 3 sets of 10-12 repetitions." << endl;
        cout << "4. Deadlift with dumbbells: 3 series of 10-12 repetitions." << endl;
        cout << "5. Dumbbell Shoulder Press: 3 sets of 10-12 repetitions." << endl;
        cout << "Iron: 3 series of 30-60 seconds." << endl;
        cout << "1. Cool down: Static stretching of the main muscle groups for 5-10 minutes.\n" << endl;
        cout << "Day 2: Cardio and interval training\n" << endl;
        cout << "2. Warm up: 5-10 minutes of moderate cardio, such as running or biking." << endl;
        cout << "3. Entrenamiento de intervalos: 30 segundos de actividad de alta intensidad, como saltar o correr en su lugar, seguido de 30 segundos de descanso. Repite durante 15-20 minutos." << endl;
        cout << "4. Cardio exercise of choice: Run, bike, swim or other cardiovascular activity of your choice for 20-30 minutes." << endl;
        cout << "5. Cool down: Dynamic and static stretching for 5-10 minutes.\n" << endl;
        cout << "Day 3: Full Body Workout\n" << endl;
        cout << "1. Warm up: 5-10 minutes of light cardio." << endl;
        cout << "2. Burpees: 3 series of 10-12 repetitions." << endl;
        cout << "3. Supine leg raises: 3 sets of 12-15 repetitions." << endl;
        cout << "4. Assisted Pull-ups or Dumbbell Rows: 3 sets of 10-12 reps." << endl;
        cout << "5. Dumbbell biceps curl: 3 sets of 10-12 repetitions." << endl;
        cout << "7. Dumbbell Triceps Extension: 3 sets of 10-12 repetitions." << endl;
        cout << "8. Abdominals: 3 series of 15-20 repetitions." << endl;
        cout << "9. Cool down: Static stretching for 5-10 minutes.\n" << endl;
        cout << "Day 4: Active rest or low-intensity activity, such as yoga or easy walks.\n" << endl;
}

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