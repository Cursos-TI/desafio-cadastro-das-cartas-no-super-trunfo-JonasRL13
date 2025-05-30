#include <stdio.h>
#include <string.h>

int main() {
    // Cartas
    char estado1[] = "PB";
    char codigo1[] = "A01";
    char nomeCidade1[] = "João Pessoa";
    int populacao1 = 833932;
    float area1 = 21148.0f;
    float pib1 = 36.257f;
    int pontosTuristicos1 = 15;

    char estado2[] = "PE";
    char codigo2[] = "B02";
    char nomeCidade2[] = "Pernambuco";
    int populacao2 = 9540000;
    float area2 = 98076.0f;
    float pib2 = 288.67f;
    int pontosTuristicos2 = 16;

    // Calcula densidade demográfica
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    // Menu
    int escolha;

    printf("=== Menu de Atributos para Comparacao ===\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Escolha o atributo para comparar (1-5): ");
    scanf("%d", &escolha);

    printf("\nComparacao entre %s e %s:\n\n", nomeCidade1, nomeCidade2);

    switch (escolha) {
        case 1:  // Populacao
            printf("Atributo: Populacao\n");
            printf("%s: %d\n", nomeCidade1, populacao1);
            printf("%s: %d\n", nomeCidade2, populacao2);
            if (populacao1 > populacao2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (populacao1 < populacao2) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2:  // Area
            printf("Atributo: Area\n");
            printf("%s: %.2f km2\n", nomeCidade1, area1);
            printf("%s: %.2f km2\n", nomeCidade2, area2);
            if (area1 > area2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (area1 < area2) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3:  // PIB
            printf("Atributo: PIB\n");
            printf("%s: %.3f bilhoes\n", nomeCidade1, pib1);
            printf("%s: %.3f bilhoes\n", nomeCidade2, pib2);
            if (pib1 > pib2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (pib1 < pib2) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4:  // Pontos Turisticos
            printf("Atributo: Numero de Pontos Turisticos\n");
            printf("%s: %d\n", nomeCidade1, pontosTuristicos1);
            printf("%s: %d\n", nomeCidade2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (pontosTuristicos1 < pontosTuristicos2) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5:  // Densidade Demografica (menor vence)
            printf("Atributo: Densidade Demografica\n");
            printf("%s: %.2f habitantes/km2\n", nomeCidade1, densidade1);
            printf("%s: %.2f habitantes/km2\n", nomeCidade2, densidade2);
            if (densidade1 < densidade2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (densidade1 > densidade2) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opcao invalida! Execute o programa novamente e escolha uma opcao valida.\n");
            break;
    }

    return 0;
}
