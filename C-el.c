#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void displayHeader();
void displayHome();
void displayMenu();
void displayFooter();
void handleOption(int choice);
void pauseExecution();
void vectorAddDot();
void ortho();
void orthonormal();
void Probability();
long long int factorial(int num);
void HyperGeometric();
int binomialCoefficient(int total, int choose);

int main() {
    int choice;
system("clear"); // For Unix-based systems; use "cls" for Windows
        displayHome();
    while (1) {
        
 system("clear"); // For Unix-based systems; use "cls" for Windows
       
        displayHeader();
        displayMenu();
        displayFooter();

        printf("\n\t\t\t\t\t\t\t\033[1;33mEnter your choice (1-5, 0 to Exit): \033[0m");
        scanf("%d", &choice);
        printf("\n============================================================================================================================================================\n");

        if (choice == 0) {
            system("clear"); // For Unix-based systems; use "cls" for Windows
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\033[1;96m    ███        ▄█    █▄       ▄████████ ███▄▄▄▄      ▄█   ▄█▄      ▄██   ▄    ▄██████▄  ███    █▄  \033[0m\n");
    printf("\t\t\t\t\033[1;96m▀█████████▄   ███    ███     ███    ███ ███▀▀▀██▄   ███ ▄███▀      ███   ██▄ ███    ███ ███    ███ \033[0m\n");
    printf("\t\t\t\t\033[1;96m   ▀███▀▀██   ███    ███     ███    ███ ███   ███   ███▐██▀        ███▄▄▄███ ███    ███ ███    ███ \033[0m\n");
    printf("\t\t\t\t\033[1;96m    ███   ▀  ▄███▄▄▄▄███▄▄   ███    ███ ███   ███  ▄█████▀         ▀▀▀▀▀▀███ ███    ███ ███    ███ \033[0m\n");
    printf("\t\t\t\t\033[1;96m    ███     ▀▀███▀▀▀▀███▀  ▀███████████ ███   ███ ▀▀█████▄         ▄██   ███ ███    ███ ███    ███ \033[0m\n");
    printf("\t\t\t\t\033[1;96m    ███       ███    ███     ███    ███ ███   ███   ███▐██▄        ███   ███ ███    ███ ███    ███ \033[0m\n");
    printf("\t\t\t\t\033[1;96m    ███       ███    ███     ███    ███ ███   ███   ███ ▀███▄      ███   ███ ███    ███ ███    ███ \033[0m\n");
    printf("\t\t\t\t\033[1;96m   ▄████▀     ███    █▀      ███    █▀   ▀█   █▀    ███   ▀█▀       ▀█████▀   ▀██████▀  ████████▀  \033[0m\n");
    printf("\t\t\t\t\033[1;96m                                                    ▀                                               \033[0m\n\n\n\n\n\n\n\n\n\n\n\n");

break;
        }

        handleOption(choice);
    }

    return 0;
}



void displayHome(){
    printf("\n\n\n\n\n\t\t          _____                            _____                            _____                            _____          \n");
    printf("\t\t         /\\    \\                          /\\    \\                          /\\    \\                          /\\    \\         \n");
    printf("\t\t        /::\\    \\                        /::\\____\\                        /::\\    \\                        /::\\    \\        \n");
    printf("\t\t       /::::\\    \\                      /:::/    /                       /::::\\    \\                      /::::\\    \\       \n");
    printf("\t\t      /::::::\\    \\                    /:::/    /                       /::::::\\    \\                    /::::::\\    \\      \n");
    printf("\t\t     /:::/\\:::\\    \\                  /:::/    /                       /:::/\\:::\\    \\                  /:::/\\:::\\    \\     \n");
    printf("\t\t    /:::/__\\:::\\    \\                /:::/____/                       /:::/  \\:::\\    \\                /:::/__\\:::\\    \\    \n");
    printf("\t\t   /::::\\   \\:::\\    \\               |::|    |                       /:::/    \\:::\\    \\              /::::\\   \\:::\\    \\   \n");
    printf("\t\t  /::::::\\   \\:::\\    \\              |::|    |     _____            /:::/    / \\:::\\    \\            /::::::\\   \\:::\\    \\  \n");
    printf("\t\t /:::/\\:::\\   \\:::\\____\\             |::|    |    /\\    \\          /:::/    /   \\:::\\    \\          /:::/\\:::\\   \\:::\\    \\ \n");
    printf("\t\t/:::/  \\:::\\   \\:::|    |            |::|    |   /::\\____\\        /:::/____/     \\:::\\____\\        /:::/__\\:::\\   \\:::\\____\\\n");
    printf("\t\t\\::/   |::::\\  /:::|____|            |::|    |  /:::/    /        \\:::\\    \\      \\::/    /        \\:::\\   \\:::\\   \\::/    / \n");
    printf("\t\t \\/____|:::::\\/:::/    /             |::|    | /:::/    /          \\:::\\    \\      \\/____/          \\:::\\   \\:::\\   \\/____/  \n");
    printf("\t\t       |:::::::::/    /              |::|____|/:::/    /            \\:::\\    \\                       \\:::\\   \\:::\\    \\     \n");
    printf("\t\t       |::|\\::::/    /               |:::::::::::/    /              \\:::\\    \\                       \\:::\\   \\:::\\____\\    \n");
    printf("\t\t       |::| \\::/____/                \\::::::::::/____/                \\:::\\    \\                       \\:::\\   \\::/    /    \n");
    printf("\t\t       |::|  ~|                       ~~~~~~~~~~                       \\:::\\    \\                       \\:::\\   \\/____/     \n");
    printf("\t\t       |::|   |                                                         \\:::\\    \\                       \\:::\\    \\         \n");
    printf("\t\t       \\::|   |                                                          \\:::\\____\\                       \\:::\\____\\        \n");
    printf("\t\t        \\:|   |                                                           \\::/    /                        \\::/    /        \n");
    printf("\t\t         \\|___|                                                            \\/____/                          \\/____/         \n");
 
   printf("\n\033[32m\t\t\t\t\t\t\t\t\t WELCOME \n\n\n\n\033[0m\t\t\t\t\t\t\t\tPress Enter to continue...\n");
    getchar();
}

void displayHeader() {

    printf("============================================================================================================================================================\n");
    printf("\n\t\t\t\033[1;32m             (   )                                                       (   )                      (   )           \n");
    printf("\t\t\t  .---.    .-.| |   ___  ___    .---.   ___ .-.     .--.      .--.     .-.| |      .--.      .---.   | |    .--.    \n");
    printf("\t\t\t / .-, \\  /   \\ |  (   )(   )  / .-, \\ (   )   \\   /    \\    /    \\   /   \\ |     /    \\    / .-, \\  | |   /    \\   \n");
    printf("\t\t\t(__) ; | |  .-. |   | |  | |  (__) ; |  |  .-. .  |  .-. ;  |  .-. ; |  .-. |    |  .-. ;  (__) ; |  | |  |  .-. ;  \n");
    printf("\t\t\t  .'`  | | |  | |   | |  | |    .'`  |  | |  | |  |  |(___) |  | | | | |  | |    |  |(___)   .'`  |  | |  |  |(___) \n");
    printf("\t\t\t / .'| | | |  | |   | |  | |   / .'| |  | |  | |  |  |      |  |/  | | |  | |    |  |       / .'| |  | |  |  |      \n");
    printf("\t\t\t| /  | | | |  | |   | |  | |  | /  | |  | |  | |  |  | ___  |  ' _.' | |  | |    |  | ___  | /  | |  | |  |  | ___  \n");
    printf("\t\t\t; |  ; | | '  | |   ' '  ; '  ; |  ; |  | |  | |  |  '(   ) |  .'.-. | '  | |    |  '(   ) ; |  ; |  | |  |  '(   ) \n");
    printf("\t\t\t' `-'  | ' `-'  /    \\ `' /   ' `-'  |  | |  | |  '  `-' |  '  `-' / ' `-'  /    '  `-' |  ' `-'  |  | |  '  `-' |  \n");
    printf("\t\t\t`.__.'_.  `.__,'      '_.'    `.__.'_. (___)(___)  `.__,'    `.__.'   `.__,'      `.__,'   `.__.'_. (___)  `.__,'   \n");
    printf("\t\t\t                                                                                                                     \033[0m\n");
  

    printf("============================================================================================================================================================\n");
    printf("\t\t\t\t\t\t\033[1;35m\t   Your companion for Vectors and Probability Calculations\033[0m\n");
    printf("============================================================================================================================================================\n");

}


void displayMenu() {
    printf("\n\t\t\t\t\t\t\t\t\t📌 \033[1;4;33mMAIN MENU\033[0m 📌\n\n");
    printf("\t\t\t\t\t\t\033[1;32m1.   \033[0;1m Vector Addition and Dot Product of Two Vectors\n \t\t\t\t\t\t\t   \033[0;90m(Add two vectors and calculate their dot product)\033[0m\n\n");
    printf("\t\t\t\t\t\t\033[1;32m2.   \033[0;1m Check Whether Two Vectors are Orthogonal \n \t\t\t\t\t\t\t   \033[0;90m(Determine if two vectors are orthogonal)\033[0m\n\n");
    printf("\t\t\t\t\t\t\033[1;32m3.   \033[0;1m Check Whether a Vector is Orthonormal\n \t\t\t\t\t\t\t   \033[0;90m(Determine if a vector is orthonormal)\033[0m\n\n");
    printf("\t\t\t\t\t\t\033[1;32m4.   \033[0;1m Probability: Combinations & Permutations\n \t\t\t\t\t\t\t   \033[0;90m(Calculate nCr and nPr)\033[0m\n\n");
    printf("\t\t\t\t\t\t\033[1;32m5.   \033[0;1m Hypergeometric Distribution \n\t\t\t\t\t\t\t   \033[0;90m(Calculate probabilities)\033[0m\n\n");
    printf("\t\t\t\t\t\t\033[1;32m0.   \033[0;1m Exit\n");
}

void displayFooter() {
    printf("\n\n============================================================================================================================================================\n");
    printf("\t\t\t\t\t\t\t\033[1;35mChoose an option to perform calculations.\033[0m\n");
    printf("============================================================================================================================================================\n");
}

void handleOption(int choice) {
    system("clear");

    displayHeader();

    switch (choice) {
        case 1:
            vectorAddDot();
            break;
        case 2:
            ortho();
            break;
        case 3:
            orthonormal();
            break;
        case 4:
            Probability();
            break;
        case 5:
            HyperGeometric();
            break;
        default:
            printf("\n\t\t\t\t\t\t\t\033[1;31m    ❌ Invalid choice! Please try again.\033[0m\n");
            break;
    }

    pauseExecution();
}



void pauseExecution() {
    printf("\n\n\n============================================================================================================================================================\n");
    printf("\n\t\t\t\t\t\t\t\033[1;36mPress Enter to return to the main menu...\033[0m");
    printf("\n\n============================================================================================================================================================\n");
    getchar();
    getchar();
}
void vectorAddDot() {
    int sizeFirst, sizeSecond;

    printf("\n\t\t\t\t\t\t\033[1;33m    🧮 VECTOR ADDITION and 🔗 DOT PRODUCT OF TWO VECTORS\n");
    printf("\t\t\t\t\t\t \033[1;37mPerform addition of two vectors and calculate dot product.\033[0m\n\n");

    printf("\t\t\t\t\t\t \033[3m  Enter the size of the First vector: ");
    scanf("%d", &sizeFirst);
    if (sizeFirst < 0) {
        printf("\t\t\t\t\t\033[1;31m⚠️  Error: Invalid size for the First vector. Please enter a positive integer.\033[0m\n");
        return;
    }

    printf("\t\t\t\t\t\t \033[3m  Enter the size of the Second vector: ");
    scanf("%d", &sizeSecond);
    if (sizeSecond < 0) {
        printf("\t\t\t\t\t\033[1;31m⚠️  Error: Invalid size for the Second vector. Please enter a positive integer.\033[0m\n");
        return;
    }

    float firstVector[sizeFirst], secondVector[sizeSecond];

    printf("\n\t\t\t\t\t\t  \033[1;37m Enter the elements of the First vector:\n\t\t\t\t\t\t\t");
    for (int i = 0; i < sizeFirst; i++) {
        scanf("%f", &firstVector[i]);
    }

    printf("\t\t\t\t\t\t  \033[1;37m Enter the elements of the Second vector:\n\t\t\t\t\t\t\t");
    for (int i = 0; i < sizeSecond; i++) {
        scanf("%f", &secondVector[i]);
    }

    int maxSize = (sizeFirst > sizeSecond ? sizeFirst : sizeSecond);
    float addedVector[maxSize];
    float dotProduct = 0;

    for (int i = 0; i < maxSize; i++) {
        float valFirst = (i < sizeFirst) ? firstVector[i] : 0;
        float valSecond = (i < sizeSecond) ? secondVector[i] : 0;
        addedVector[i] = valFirst + valSecond;
    }

    for (int i = 0; i < maxSize; i++) {
        float valFirst = (i < sizeFirst) ? firstVector[i] : 0;
        float valSecond = (i < sizeSecond) ? secondVector[i] : 0;
        dotProduct += valFirst * valSecond;
    }

    printf("\n\t\t\t\t\t\t\t\033[1;32m✅ Resultant Added Vector:\033[0m\n \t\t\t\t\t\t\t\t  ");
    for (int i = 0; i < maxSize; i++) {
        printf("%.2f ", addedVector[i]);
    }

    printf("\n\t\t\t\t\t\t\t\033[1;32m✅ Resultant Dot Product:\033[0m  %.2f\n", dotProduct);
}

void ortho() {
    float dotProduct = 0;
    int sizeFirst, sizeSecond;

    printf("\n\t\t\t\t\t\t\t\t \033[1;33m📐 CHECK ORTHOGONAL VECTORS\n");
    printf("\t\t\t\t\t\t\t   \033[1;37mDetermine if two vectors are orthogonal.\033[0m\n\n");

    printf("\t\t\t\t\t\t\t \033[3m  Enter the size of the First vector: ");
    scanf("%d", &sizeFirst);
    if (sizeFirst <= 0) {
       printf("\t\t\t\t\t\033[1;31m⚠️  Error: Invalid size for the First vector. Please enter a positive integer.\033[0m\n");
         return;
    }

     printf("\t\t\t\t\t\t\t \033[3m  Enter the size of the Second vector: ");
   scanf("%d", &sizeSecond);
    if (sizeSecond <= 0) {
         printf("\t\t\t\t\t\033[1;31m⚠️  Error: Invalid size for the Second vector. Please enter a positive integer.\033[0m\n");
       return;
    }

    float firstVector[sizeFirst], secondVector[sizeSecond];

    printf("\n\t\t\t\t\t\t\t  \033[1;37m Enter the elements of the First vector:\n\t\t\t\t\t\t\t\t");
    for (int i = 0; i < sizeFirst; i++) {
        scanf("%f", &firstVector[i]);
    }

     printf("\t\t\t\t\t\t\t  \033[1;37m Enter the elements of the Second vector:\n\t\t\t\t\t\t\t\t");
   for (int i = 0; i < sizeSecond; i++) {
        scanf("%f", &secondVector[i]);
    }

    int maxSize = (sizeFirst > sizeSecond ? sizeFirst : sizeSecond);
    for (int i = 0; i < maxSize; i++) {
        float valFirst = (i < sizeFirst) ? firstVector[i] : 0;
        float valSecond = (i < sizeSecond) ? secondVector[i] : 0;
        dotProduct += valFirst * valSecond;
    }

    if (dotProduct == 0) {
        printf("\n\t\t\t\t\t\t\t\033[1;32m✅ The vectors are Orthogonal.\033[0m\n");
    } else {
        printf("\n\t\t\t\t\t\t\t\t\033[1;31m❌ The vectors are NOT Orthogonal.\033[0m\n");
    }
}

void orthonormal() {
    int sizeVector;
    float norm = 0;

    printf("\n\t\t\t\t\t\t\t\t \033[1;33m📏 CHECK ORTHONORMAL VECTOR\n");
    printf("\t\t\t\t\t\t\t   \033[1;37mDetermine if a vector is orthonormal.\033[0m\n");

    printf("\t\t\t\t\t\t\t \033[3m  Enter the size of the vector: ");
    scanf("%d", &sizeVector);
    if (sizeVector <= 0) {
        printf("\t\t\t\t\t\033[1;31m⚠️  Error: Invalid size for the vector. Please enter a positive integer.\033[0m\n");
        return;
    }

    float vector[sizeVector];

    printf("\n\t\t\t\t\t\t\t  \033[1;37m Enter the elements of the vector:\n\t\t\t\t\t\t\t\t");
    for (int i = 0; i < sizeVector; i++) {
        scanf("%f", &vector[i]);
    }

    for (int i = 0; i < sizeVector; i++) {
        norm += vector[i] * vector[i];
    }

    if (norm == 1) {
        printf("\n\t\t\t\t\t\t\t\033[1;32m✅ The vector is Orthonormal.\033[0m\n");
    } else {
        printf("\n\t\t\t\t\t\t\t\033[1;31m❌ The vector is NOT Orthonormal.\033[0m\n");
    }
}

void Probability() {
    printf("\n\t\t\t\t\t\t\t\033[1;33m🎲 PROBABILITY: COMBINATIONS & PERMUTATIONS\n");
    printf("\t\t\t\t\t\t    \033[1;37mCalculate combinations (nCr) and permutations (nPr).\033[0m\n");
    int n, r;

    printf("\n\n\t\t\t\t\t\t\t   Enter value of n (total item): ");
    scanf("%d", &n);
    printf("\n\t\t\t\t\t\t      Enter value of r (items to choose or arrange): ");
    scanf("%d", &r);

    if (r > n) {
        printf("\n\t\t\t\t\t\t\t\t\033[1;31mError: r cannot be greater than n.\033[0m\n");
        return;
    }

    printf("\n\t\t\t\t\t\t\t\t\033[1;32mPermutations (nPr) = %lld\033[0m\n", factorial(n) / factorial(n - r));
    printf("\t\t\t\t\t\t\t\t\033[1;34mCombinations (nCr) = %lld\033[0m\n", factorial(n) / (factorial(r) * factorial(n - r)));
}

long long int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    }
    return num * factorial(num - 1);
}

int binomialCoefficient(int total, int choose) {
    if (choose > total) {
        return 0;
    }
    return factorial(total) / (factorial(choose) * factorial(total - choose));
}
void HyperGeometric() {
    int populationSize, successPopulation, sampleSize, successSample;

    printf("\n\t\t\t\t\t\t\t\t\033[1;33m📊 HyperGeometric Distribution\n");
    printf("\t\t\t\t\t\t \033[1;37mStuck in hyper-geometric distribution? Use our Calculator!\033[0m\n");

    // Input for population size
    printf("\n\n\t\t\t\t\t\t\t   Enter the population size (N): ");
    scanf("%d", &populationSize);
    if (populationSize <= 0) {
        printf("\t\t\t\t\t\t   \033[1;31mError: Population size must be a positive integer.\033[0m\n");
        return;
    }

    // Input for number of successes in the population
    printf("\t\t\t\t\t\t    Enter the number of successes in the population (K): ");
    scanf("%d", &successPopulation);
    if (successPopulation < 0 || successPopulation > populationSize) {
        printf("\t\t\t\t\t\t\033[1;31mError: Number of successes in the population must be between 0 and %d.\033[0m\n", populationSize);
        return;
    }

    // Input for sample size
    printf("\t\t\t\t\t\t\t\tEnter the sample size (r): ");
    scanf("%d", &sampleSize);
    if (sampleSize < 0 || sampleSize > populationSize) {
        printf("\t\t\t\t\t\t\t   \033[1;31mError: Sample size must be between 0 and %d.\033[0m\n", populationSize);
        return;
    }

    // Input for number of successes in the sample
    printf("\t\t\t\t\t\t      Enter the number of successes in the sample (k): ");
    scanf("%d", &successSample);
    if (successSample < 0 || successSample > successPopulation) {
        printf("\t\t\t\t\t\t\033[1;31mError: Number of successes in the sample must be between 0 and %d.\033[0m\n", successPopulation);
        return;
    }
    if (successSample > sampleSize) {
        printf("\t\t\t\t\t\t\033[1;31mError: Number of successes in the sample cannot exceed the sample size (%d).\033[0m\n", sampleSize);
        return;
    }

    // Calculate binomial coefficients
    int binomSuccess = binomialCoefficient(successPopulation, successSample);
    int binomFailure = binomialCoefficient(populationSize - successPopulation, sampleSize - successSample);
    int binomTotal = binomialCoefficient(populationSize, sampleSize);

    // Check if the binomial coefficient calculations succeeded
    if (binomTotal == 0) {
        printf("\t\t\t\t\t\t\t   \033[1;31mError: Binomial coefficient calculation failed. Check input values.\033[0m\n");
        return;
    }

    // Calculate probability
    int numerator = binomSuccess * binomFailure;
    double probability = (double)numerator / binomTotal;

    printf("\n\t\t\t\t\t\t\t   \033[1;34mThe probability of (X=%d) =\033[0m %.5lf\033[0m\n", successSample, probability);
}
