#include <stdio.h>

int main() {
    printf("Desafio Super Trunfo - Nível Aprimorado\n\n");

    // Dados da primeira carta
    char Estado1 = 'A';
    char Codigo1[] = "A01";
    char Nome_da_cidade1[] = "João Pessoa";
    int Populacao1 = 833932;
    float Area1 = 21148.0f;
    double PIB1 = 36.257;
    int Pontos_Turisticos1 = 15;

    // Cálculo da densidade populacional e PIB per capita para a primeira carta
    float Densidade1 = Populacao1 / Area1;
    float PIB_per_capita1 = PIB1 * 1e9 / Populacao1; // PIB em reais dividido pela população

    // Exibição da primeira carta
    printf("Carta 1:\n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", Codigo1);
    printf("Nome da cidade: %s\n", Nome_da_cidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.3lf bilhões de reais\n", PIB1);
    printf("Número de pontos turísticos: %d\n", Pontos_Turisticos1);
    printf("Densidade populacional: %.2f habitantes/km²\n", Densidade1);
    printf("PIB per capita: R$ %.2f\n\n", PIB_per_capita1);

    // Dados da segunda carta
    char Estado2 = 'B';
    char Codigo2[] = "B02";
    char Nome_da_cidade2[] = "Pernambuco";
    int Populacao2 = 9540000;
    float Area2 = 98076.0f;
    double PIB2 = 288.67;
    int Pontos_Turisticos2 = 16;

    // Cálculo da densidade populacional e PIB per capita para a segunda carta
    float Densidade2 = Populacao2 / Area2;
    float PIB_per_capita2 = PIB2 * 1e9 / Populacao2;

    // Exibição da segunda carta
    printf("Carta 2:\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Nome da cidade: %s\n", Nome_da_cidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2lf bilhões de reais\n", PIB2);
    printf("Número de pontos turísticos: %d\n", Pontos_Turisticos2);
    printf("Densidade populacional: %.2f habitantes/km²\n", Densidade2);
    printf("PIB per capita: R$ %.2f\n", PIB_per_capita2);

    return 0;
}
