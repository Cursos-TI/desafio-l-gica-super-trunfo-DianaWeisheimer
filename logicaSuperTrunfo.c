#include <stdio.h>

int main() {
    // Variaveis
    char stateA[50], codeA[50], cityNameA[50];
    int populationA, numberTouristPointsA;
    float areaA, pibA;

    char stateB[50], codeB[50], cityNameB[50];
    int populationB, numberTouristPointsB;
    float areaB, pibB;

    float pibPerCapitaA = 0;
    float pibPerCapitaB = 0;

    float populationDensityA = 0;
    float populationDensityB = 0;

    //Carta A

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

    populationDensityA = populationA / areaA;
    pibPerCapitaA = pibA / populationA;

    printf("City 'A' Card Stats:\n");
    printf("State: %s\n", stateA);
    printf("Code: %s\n", codeA);
    printf("City Name: %s\n", cityNameA);
    printf("Population: %d\n", populationA);
    printf("Area: %d\n", areaA);
    printf("PIB: %d\n", pibA);
    printf("Tourist areas: %d\n", numberTouristPointsA);
    printf("Population Density: %f\n", populationDensityA);
    printf("PIB per Capita: %f\n", pibPerCapitaA);

    //Carta B

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

    populationDensityB = populationB / areaB;
    pibPerCapitaB = pibB / populationB;

    printf("City 'B' Card Stats:\n");
    printf("State: %s\n", stateB);
    printf("Code: %s\n", codeB);
    printf("City Name: %s\n", cityNameB);
    printf("Population: %d\n", populationB);
    printf("Area: %d\n", areaB);
    printf("PIB: %d\n", pibB);
    printf("Tourist areas: %d\n", numberTouristPointsB);
    printf("Population Density: %f\n", populationDensityB);
    printf("PIB per Capita: %f\n", pibPerCapitaB);
    
    //Comparação de cartas

    printf("Carta 1 PIB per capita - %s (%s): %f\n", cityNameA, stateA, pibPerCapitaA);
    printf("Carta 2 PIB per capita - %s (%s): %f\n", cityNameB, stateB, pibPerCapitaB);

    //Resultado

    if(pibPerCapitaA > pibPerCapitaB){
        printf("Resultado: Carta 1 (%s) venceu!\n", cityNameA);
    } else if(pibPerCapitaA < pibPerCapitaB){
        printf("Resultado: Carta 2 (%s) venceu!\n", cityNameB);
    } else {
        printf("Empate!\n");
    }

    return 0;
}
