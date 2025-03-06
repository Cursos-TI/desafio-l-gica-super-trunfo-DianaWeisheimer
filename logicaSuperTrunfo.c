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

    int choice;

    //Carta A

    printf("Enter the state for city A: ");
    scanf("%s", stateA);
    printf("Enter the code for city A: ");
    scanf("%s", codeA);
    printf("Enter the city name for city A: ");
    scanf(" %s", cityNameA);
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
    printf("Area: %.2f\n", areaA);
    printf("PIB: %.2f\n", pibA);
    printf("Tourist areas: %d\n", numberTouristPointsA);
    printf("Population Density: %.2f\n", populationDensityA);
    printf("PIB per Capita: %.2f\n", pibPerCapitaA);

    //Carta B

    printf("Enter the state for city B: ");
    scanf("%s", stateB);
    printf("Enter the code for city B: ");
    scanf("%s", codeB);
    printf("Enter the city name for city B: ");
    scanf(" %s", cityNameB);
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
    printf("Area: %.2f\n", areaB);
    printf("PIB: %.2f\n", pibB);
    printf("Tourist areas: %d\n", numberTouristPointsB);
    printf("Population Density: %.2f\n", populationDensityB);
    printf("PIB per Capita: %.2f\n", pibPerCapitaB);
    
    // Loop para escolha de atributos
    while (1) {
        printf("Choose an attribute to compare:\n");
        printf("1. Population\n");
        printf("2. Area\n");
        printf("3. PIB\n");
        printf("4. Number of Tourist Points\n");
        printf("5. Population Density\n");
        printf("6. PIB per Capita\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Comparação de cartas
        switch(choice) {
            case 1:
                if(populationA > populationB) {
                    printf("Resultado: Carta 1 (%s) venceu!\n", cityNameA);
                } else if(populationA < populationB) {
                    printf("Resultado: Carta 2 (%s) venceu!\n", cityNameB);
                } else {
                    printf("Empate!\n");
                }
                return 0;
            case 2:
                if(areaA > areaB) {
                    printf("Resultado: Carta 1 (%s) venceu!\n", cityNameA);
                } else if(areaA < areaB) {
                    printf("Resultado: Carta 2 (%s) venceu!\n", cityNameB);
                } else {
                    printf("Empate!\n");
                }
                return 0;
            case 3:
                if(pibA > pibB) {
                    printf("Resultado: Carta 1 (%s) venceu!\n", cityNameA);
                } else if(pibA < pibB) {
                    printf("Resultado: Carta 2 (%s) venceu!\n", cityNameB);
                } else {
                    printf("Empate!\n");
                }
                return 0;
            case 4:
                if(numberTouristPointsA > numberTouristPointsB) {
                    printf("Resultado: Carta 1 (%s) venceu!\n", cityNameA);
                } else if(numberTouristPointsA < numberTouristPointsB) {
                    printf("Resultado: Carta 2 (%s) venceu!\n", cityNameB);
                } else {
                    printf("Empate!\n");
                }
                return 0;
            case 5:
                if(populationDensityA > populationDensityB) {
                    printf("Resultado: Carta 1 (%s) venceu!\n", cityNameA);
                } else if(populationDensityA < populationDensityB) {
                    printf("Resultado: Carta 2 (%s) venceu!\n", cityNameB);
                } else {
                    printf("Empate!\n");
                }
                return 0;
            case 6:
                if(pibPerCapitaA > pibPerCapitaB) {
                    printf("Resultado: Carta 1 (%s) venceu!\n", cityNameA);
                } else if(pibPerCapitaA < pibPerCapitaB) {
                    printf("Resultado: Carta 2 (%s) venceu!\n", cityNameB);
                } else {
                    printf("Empate!\n");
                }
                return 0;
            default:
                printf("Invalid choice! Please choose a valid attribute.\n");
                break;
        }
    }

    return 0;
}
