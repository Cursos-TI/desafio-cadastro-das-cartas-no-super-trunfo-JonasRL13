#include <stdio.h>

int main() {
    // Dados da carta 1
    char estado1 = 'A';
    char codigo1[] = "A01";
    char nomeCidade1[] = "João Pessoa";
    unsigned long int populacao1 = 833932;
    float area1 = 21148.0f;
    double pib1 = 36.257;
    int pontosTuristicos1 = 15;

    // Dados da carta 2
    char estado2 = 'B';
    char codigo2[] = "B02";
    char nomeCidade2[] = "Pernambuco";
    unsigned long int populacao2 = 9540000;
    float area2 = 98076.0f;
    double pib2 = 288.67;
    int pontosTuristicos2 = 16;

    // Cálculos
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibPerCapita1 = (float)(pib1 / populacao1);
    float pibPerCapita2 = (float)(pib2 / populacao2);

    float superPoder1 = (float)populacao1 + area1 + (float)pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);
    float superPoder2 = (float)populacao2 + area2 + (float)pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);

    // Mostrar dados das cartas
    printf("--- Carta 1 ---\n");
    printf("Estado: %c\nCodigo: %s\nCidade: %s\n", estado1, codigo1, nomeCidade1);
    printf("Populacao: %lu\nArea: %.2f\nPIB: %.2lf\nPontos Turisticos: %d\n", populacao1, area1, pib1, pontosTuristicos1);
    printf("Densidade Populacional: %.2f\nPIB per Capita: %.6f\n", densidade1, pibPerCapita1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\nCodigo: %s\nCidade: %s\n", estado2, codigo2, nomeCidade2);
    printf("Populacao: %lu\nArea: %.2f\nPIB: %.2lf\nPontos Turisticos: %d\n", populacao2, area2, pib2, pontosTuristicos2);
    printf("Densidade Populacional: %.2f\nPIB per Capita: %.6f\n", densidade2, pibPerCapita2);

    printf("\n--- Comparacao ---\n");
    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2 ? 1 : 0);
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2 ? 1 : 0);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2 ? 1 : 0);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2 ? 1 : 0);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2 ? 1 : 0);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2 ? 1 : 0);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2 ? 1 : 0);

    return 0;
}
