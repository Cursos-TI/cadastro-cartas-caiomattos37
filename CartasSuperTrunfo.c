#include <stdio.h>

int main() {
    // ====== Declaração de variáveis ======
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[20], cidade2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontoTuristico1, pontoTuristico2;

    // ====== Entrada de dados da carta 1 ======
    printf("Digite o estado da carta 1 (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta 1 (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade 1: ");
    scanf("%s", cidade1);

    printf("Digite a populacao da cidade 1: ");
    scanf("%lu", &populacao1);

    printf("Digite a area da cidade 1 (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade 1 (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turisticos da cidade 1: ");
    scanf("%d", &pontoTuristico1);

    // ====== Entrada de dados da carta 2 ======
    printf("\nDigite o estado da carta 2 (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta 2 (ex: A01): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade 2: ");
    scanf("%s", cidade2);

    printf("Digite a populacao da cidade 2: ");
    scanf("%lu", &populacao2);

    printf("Digite a area da cidade 2 (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade 2 (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos da cidade 2: ");
    scanf("%d", &pontoTuristico2);

    // ====== Cálculos ======
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibPerCapita1 = pib1 * 1e9 / populacao1; // PIB vem em bilhões
    float pibPerCapita2 = pib2 * 1e9 / populacao2;

    float superPoder1 = (float)populacao1 + area1 + pib1 + pontoTuristico1 + pibPerCapita1 + (1 / densidade1);
    float superPoder2 = (float)populacao2 + area2 + pib2 + pontoTuristico2 + pibPerCapita2 + (1 / densidade2);

    // ====== Exibição dos cálculos ======
    printf("\n========== CARTA 1 ==========\n");
    printf("Estado: %c\nCodigo: %s\nCidade: %s\n", estado1, codigo1, cidade1);
    printf("Populacao: %lu\nArea: %.2f\nPIB: %.2f Bilhoes\n", populacao1, area1, pib1);
    printf("Pontos Turisticos: %d\n", pontoTuristico1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n========== CARTA 2 ==========\n");
    printf("Estado: %c\nCodigo: %s\nCidade: %s\n", estado2, codigo2, cidade2);
    printf("Populacao: %lu\nArea: %.2f\nPIB: %.2f Bilhoes\n", populacao2, area2, pib2);
    printf("Pontos Turisticos: %d\n", pontoTuristico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // ====== Comparações ======
    printf("\n===== COMPARAÇÃO DE CARTAS =====\n");

    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontoTuristico1 > pontoTuristico2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}
