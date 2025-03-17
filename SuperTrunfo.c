#include <stdio.h>
#include <locale.h>

int main()

{   setlocale(LC_ALL, "Portuguese");
    //Declaração de variáveis da carta 1 e 2 
    
    char estado1, estado2;
    char cod1[5], cod2[5];
    char cidade1[50], cidade2[50];
    unsigned long int habitantes1, habitantes2;
    int pontost1, pontost2;
    float area1, area2; 
    float pib1, pib2;
    float pibPerCapita1, pibPerCapita2;
    float densidade1, densidade2;
    float superpoder1, superpoder2;
    
    
    //Coletando as informações da carta 1
    printf("\n\t\t Carta 1 \n");
    
    printf("Digite o estado da carta 1 (Letra entre A e H): \n");
    scanf(" %c", &estado1);  
    
    printf("Digite o código da carta 1 (ex:A01): \n");
    scanf("%s", cod1);
    
    printf("Digite o nome da cidade da carta 1: \n");
    scanf("%s", cidade1);
    
    printf("Digite o número de habitantes da cidade 1: \n");
    scanf("%lu", &habitantes1);
    
    printf("Digite a área da cidade 1 em Km²: \n");
    scanf("%f", &area1);
    
    printf("Digite o pib da cidade 1(Bilhões ex 1000000000): \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos da carta 1: \n");
    scanf("%d", &pontost1);
    
    //Coletando as informações da carta 2
    printf("\n\t\t Carta 2 \n");
    
    printf("Digite o estado da carta 2 (Letra entre A e H): \n");
    scanf(" %c", &estado2);  
    
    printf("Digite o código da carta 2 (ex:A01): \n");
    scanf("%s", cod2);
    
    printf("Digite o nome da cidade da carta 2: \n");
    scanf("%s", cidade2);
    
    printf("Digite o numero de habitantes da cidade 2: \n");
    scanf("%lu", &habitantes2);
    
    printf("Digite a área da cidade 2 em Km²: \n");
    scanf("%f", &area2);
    
    printf("Digite o pib da cidade 2 (Bilhões ex 1000000000): \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da carta 2: \n");
    scanf("%d", &pontost2);
    
    // Cálculo do PIB per capita
     pibPerCapita1 = pib1 / habitantes1;
     pibPerCapita2 = pib2 / habitantes2;
    
    // Cálculo da densidade populacional
     densidade1 = habitantes1 / area1;
     densidade2 = habitantes2 / area2;

    // Cáclulo do superpoder da carta
     superpoder1 = (float)habitantes1 + area1 + pib1 + (float)pontost1 + pibPerCapita1 + densidade1;
     superpoder2 = (float)habitantes2 + area2 + pib2 + (float)pontost2 + pibPerCapita2 + densidade2;
    
    // Exibindo as cartas 
    printf("\n\n");
    printf("---------------CARTA 1---------------\n");
    printf("Cidade: %s\n", cidade1);
    printf("Código: %s\n", cod1);
    printf("Estado: %c\n", estado1);
    printf("Habitantes: %ld\n", habitantes1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontost1);
    printf("PIB per capita: R$ %.2f\n", pibPerCapita1);
    printf("Densidade: %.2f hab/km²\n", densidade1);
    printf("Superpoder: %.2f\n", superpoder1);
    printf("------------------------------------\n");
    
    printf("\n\n");
    printf("---------------CARTA 2---------------\n");
    printf("Cidade: %s\n", cidade2);
    printf("Código: %s\n", cod2);
    printf("Estado: %c\n", estado2);
    printf("Habitantes: %ld\n", habitantes2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontost2);
    printf("PIB per capita: R$ %.2f\n", pibPerCapita2);
    printf("Densidade: %.2f hab/km²\n", densidade2);
    printf("Superpoder: %.2f\n", superpoder2);
    printf("------------------------------------\n");

    //Comparação de cada caracteiristica das cartas
    printf("-------------Resultado-------------\n");

    int resHabitantes = (habitantes1 > habitantes2) ? 1 : 0;
    printf("habitantes: Carta %d ganhou (%d) \n", (resHabitantes == 1) ? 1 : 2, resHabitantes);

    int resArea = (area1 > area2) ? 1 : 0;
    printf("Área: Carta %d ganhou (%d) \n", (resArea == 1) ? 1 : 2, resArea);
    
    int resPib = (pib1 > pib2) ? 1 : 0;
    printf("PIB: Carta %d ganhou (%d) \n", (resPib == 1) ? 1 : 2, resPib);

    int resPontos = (pontost1 > pontost2) ? 1 : 0;
    printf("Pontos turísticos: Carta %d ganhou (%d) \n", (resPontos == 1) ? 1 : 2, resPontos);

    int resPibPerCapita = (pibPerCapita1 > pibPerCapita2) ? 1 : 0;
    printf("PIB per capita: Carta %d ganhou (%d) \n", (resPibPerCapita == 1) ? 1 : 2, resPibPerCapita);

    int resDensidade = (densidade1 > densidade2) ? 1 : 0;
    printf("Densidade: Carta %d ganhou (%d) \n", (resDensidade == 1) ? 1 : 2, resDensidade);

    int resSuperpoder = (superpoder1 > superpoder2) ? 1 : 0;
    printf("Superpoder: Carta %d ganhou (%d) \n", (resSuperpoder == 1) ? 1 : 2, resSuperpoder); 

    printf("------------------------------------\n");
    
    return 0;
}