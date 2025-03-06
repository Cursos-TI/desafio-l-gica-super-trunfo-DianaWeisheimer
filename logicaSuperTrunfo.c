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

    int scoreA, scoreB;

    //City A

    printf("Enter the state for city A: ");
    scanf("%s", stateA);
    printf("Enter the code for city A: ");
    scanf("%s", codeA);
    printf("Enter the city name for city A: ");
    scanf("%s", cityNameA);
    printf("Enter the population for city A: ");
    scanf("%i", &populationA);
    printf("Enter the area for city A: ");
    scanf("%f", &areaA);
    printf("Enter the pib for city A: ");
    scanf("%f", &pibA);
    printf("Enter the number of tourist points for city A: ");
    scanf("%i", &numberTouristPointsA);

    printf("City 'A' Card Stats:\n");
    printf("State: \n", stateA);
    printf("Code: \n", codeA);
    printf("City Name: \n", cityNameA);
    printf("Population: \n", populationA);
    printf("Area: \n", areaA);
    printf("PIB: \n", pibA);
    printf("Tourist areas: \n", numberTouristPointsA);

    //City B

    printf("Enter the state for city B: ");
    scanf("%s", stateB);
    printf("Enter the code for city B: ");
    scanf("%s", codeB);
    printf("Enter the city name for city B: ");
    scanf("%s", cityNameB);
    printf("Enter the population for city B: ");
    scanf("%i", &populationB);
    printf("Enter the area for city B: ");
    scanf("%f", &areaB);
    printf("Enter the pib for city B: ");
    scanf("%f", &pibB);
    printf("Enter the number of tourist points for city B: ");
    scanf("%i", &numberTouristPointsB);
    //EU, UAE, PROD3, JP, IN
    printf("City 'B' Card Stats:\n");
    printf("State: \n", stateB);
    printf("Code: \n", codeB);
    printf("City Name: \n", cityNameB);
    printf("Population: \n", populationB);
    printf("Area: \n", areaB);
    printf("PIB: \n", pibB);
    printf("Tourist areas: \n", numberTouristPointsB);
    
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

    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
