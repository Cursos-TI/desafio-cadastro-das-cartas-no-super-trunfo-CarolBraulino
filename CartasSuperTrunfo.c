#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Super Trunfo em c: Fundamentos e Técnicas Avançadas
// Autor: Maria Carolina Braulino

int main() {
    // Declaração de variáveis para armazenar os dados das cartas
    char Estado1[2], Estado2[2]; 
    char CodigoCarta1[4], CodigoCarta2[4]; 
    char Cidade1[20], Cidade2[20];
    unsigned long int Populacao1, Populacao2;
    float Area1, Area2;
    float PIB1, PIB2;
    int PontosTuristicos1, PontosTuristicos2;
    float DensidadePopulacional1, DensidadePopulacional2;
    float PIBPerCapita1, PIBPerCapita2;
    float SuperPoder1, SuperPoder2;

    // Entrada de dados para as duas cartas
    printf("Cadastro de Cartas - Super Trunfo\n");
    printf("=================================\n");
    printf("Digite os dados para Carta 1 \n");
    printf("Estado: ");
    scanf("%s", Estado1);
    printf("Codigo da Carta: ");
    scanf("%s", CodigoCarta1);
    printf("Cidade: ");
    scanf("%s", Cidade1);
    printf("Populacao: ");
    scanf("%ld", &Populacao1);
    printf("Area: ");
    scanf("%f", &Area1);
    printf("PIB: ");
    scanf("%f", &PIB1);
    printf("Pontos Turisticos: ");
    scanf("%d", &PontosTuristicos1);


    // Repetindo para a segunda carta
    printf("\n");
    printf("Digite os dados para Carta 2 \n");
    printf("Estado: ");
    scanf("%s", Estado2);
    printf("Codigo da Carta: ");
    scanf("%s", CodigoCarta2);
    printf("Cidade: ");
    scanf("%s", Cidade2);
    printf("Populacao: ");
    scanf("%ld", &Populacao2);
    printf("Area: ");
    scanf("%f", &Area2);
    printf("PIB: ");
    scanf("%f", &PIB2);
    printf("Pontos Turisticos: ");
    scanf("%d", &PontosTuristicos2);

    // Cálculo da densidade populacional e PIB per capita
    DensidadePopulacional1 = (float) Populacao1 / Area1;
    PIBPerCapita1 = PIB1 * 1000000000.0 / Populacao1; // PIB em bilhões de reais, convertendo para reais

    DensidadePopulacional2 = (float) Populacao2 / Area2;
    PIBPerCapita2 = PIB2 * 1000000000.0 / Populacao2; // PIB em bilhões de reais, convertendo para reais

    // Cálculo do Super Poder
    SuperPoder1 = (float)Populacao1 + Area1 + PIB1 + PontosTuristicos1 + PIBPerCapita1 + (1.0 / DensidadePopulacional1);
    SuperPoder2 = (float)Populacao2 + Area2 + PIB2 + PontosTuristicos2 + PIBPerCapita2 + (1.0 / DensidadePopulacional2);

    // Exibição dos dados cadastrados
    printf("\n");
    printf("=================================\n");
    printf("\nResumo dos dados:\n");
    printf("=================================\n");    
    printf("Carta 1: \n");
    printf("Estado: %s\n", Estado1);
    printf("Codigo da Carta: %s\n", CodigoCarta1);
    printf("Cidade: %s\n", Cidade1);
    printf("Populacao: %lu\n", Populacao1);
    printf("Area: %.2f km²\n", Area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Pontos Turisticos: %d\n", PontosTuristicos1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", DensidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", PIBPerCapita1);
    printf("Super Poder: %.2f\n", SuperPoder1);
    printf("=================================\n");
    printf("Carta 2: \n");
    printf("Estado: %s\n", Estado2);
    printf("Codigo da Carta: %s\n", CodigoCarta2);
    printf("Cidade: %s\n", Cidade2);
    printf("Populacao: %lu\n", Populacao2);
    printf("Area: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Pontos Turisticos: %d\n", PontosTuristicos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", DensidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", PIBPerCapita2);
    printf("Super Poder: %.2f\n", SuperPoder2);
    printf("=================================\n");

    // Comparação das Cartas
    printf("\nComparação das Cartas:\n");
    printf("==================================\n");
    printf("População: %s (%lu)\n", (Populacao1 > Populacao2 ? "Carta 1 vence" : "Carta 2 vence"), (Populacao1 > Populacao2 ? Populacao1 : Populacao2));
    printf("Área: %s (%.2f km²)\n", (Area1 > Area2 ? "Carta 1 vence" : "Carta 2 vence"), (Area1 > Area2 ? Area1 : Area2));
    printf("PIB: %s (%.2f bilhões de reais)\n", (PIB1 > PIB2 ? "Carta 1 vence" : "Carta 2 vence"), (PIB1 > PIB2 ? PIB1 : PIB2));
    printf("Pontos Turísticos: %s (%d)\n", (PontosTuristicos1 > PontosTuristicos2 ? "Carta 1 vence" : "Carta 2 vence"), (PontosTuristicos1 > PontosTuristicos2 ? PontosTuristicos1 : PontosTuristicos2));
    printf("Densidade Populacional: %s (%.2f habitantes/km²)\n", 
           (DensidadePopulacional1 < DensidadePopulacional2 ? "Carta 1 vence" : "Carta 2 vence"), 
           (DensidadePopulacional1 < DensidadePopulacional2 ? DensidadePopulacional1 : DensidadePopulacional2));
    printf("PIB per Capita: %s (%.2f reais)\n", 
           (PIBPerCapita1 > PIBPerCapita2 ? "Carta 1 vence" : "Carta 2 vence"), 
           (PIBPerCapita1 > PIBPerCapita2 ? PIBPerCapita1 : PIBPerCapita2));
    printf("Super Poder: %s (%.2f)\n", 
           (SuperPoder1 > SuperPoder2 ? "Carta 1 vence" : "Carta 2 vence"), 
           (SuperPoder1 > SuperPoder2 ? SuperPoder1 : SuperPoder2));
    printf("==================================\n"); 

    return 0; // Boa prática para indicar que o programa terminou com sucesso.
}
