#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

    char stateA[50], codeA[50], cityNameA[50];
    int populationA, numberTouristPointsA;
    float areaA, pibA;

    char stateB[50], codeB[50], cityNameB[50];
    int populationB, numberTouristPointsB;
    float areaB, pibB;

    int scoreA = 0;
    int scoreB = 0;

    //City A

    printf("Enter the state for city A: ");
    scanf("%s", stateA);
    printf("Enter the code for city A: ");
    scanf("%s", codeA);
    printf("Enter the city name for city A: ");
    scanf("%s", cityNameA);
    printf("Enter the population for city A: ");
    scanf("%d", &populationA);
    printf("Enter the area for city A: ");
    scanf("%f", &areaA);
    printf("Enter the pib for city A: ");
    scanf("%f", &pibA);
    printf("Enter the number of tourist points for city A: ");
    scanf("%d", &numberTouristPointsA);

    printf("City 'A' Card Stats:\n");
    printf("State: %s\n", stateA);
    printf("Code: %s\n", codeA);
    printf("City Name: %s\n", cityNameA);
    printf("Population: %d\n", populationA);
    printf("Area: %.2f\n", areaA);
    printf("PIB: %.2f\n", pibA);
    printf("Tourist areas: %d\n", numberTouristPointsA);

    //City B

    printf("Enter the state for city B: ");
    scanf("%s", stateB);
    printf("Enter the code for city B: ");
    scanf("%s", codeB);
    printf("Enter the city name for city B: ");
    scanf("%s", cityNameB);
    printf("Enter the population for city B: ");
    scanf("%d", &populationB);
    printf("Enter the area for city B: ");
    scanf("%f", &areaB);
    printf("Enter the pib for city B: ");
    scanf("%f", &pibB);
    printf("Enter the number of tourist points for city B: ");
    scanf("%d", &numberTouristPointsB);

    printf("City 'B' Card Stats:\n");
    printf("State: %s\n", stateB);
    printf("Code: %s\n", codeB);
    printf("City Name: %s\n", cityNameB);
    printf("Population: %d\n", populationB);
    printf("Area: %d\n", areaB);
    printf("PIB: %d\n", pibB);
    printf("Tourist areas: %d\n", numberTouristPointsB);
    
    if(populationA > populationB){
        scoreA++;
    }else{
        scoreB++;
    }

    if(areaA > areaB){
        scoreA += 2;
    }else{
        scoreB += 2;
    }

    if (pibA > pibB){
        scoreA += 3;
    }else{
        scoreB += 3;
    }
    
    if(numberTouristPointsA > numberTouristPointsB){
        scoreA += 3;
    }else{
        scoreB += 3;
    }
    
    if(scoreA > scoreB){
        printf("City A is the champignon hehe!!!!\n");
    }else{
        printf("City B is the champignon uauuuu :O!!!!\n");
    }

    printf("Scores: \n");
    printf("City A: %d\n", scoreA);
    printf("City B: %d\n", scoreB);
    printf("Score Table: Population +1; Area +2; PIB +3, Tourist Points +4;\n");

    return 0;
}
