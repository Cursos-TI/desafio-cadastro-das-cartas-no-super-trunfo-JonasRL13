#include <stdio.h>

int main() {
    // Dados da primeira carta
    char estado1[] = "A";
    char codigo1[] = "A01";
    char nome_cidade1[] = "João Pessoa";
    int populacao1 = 833932;
    float area1 = 21148.0;
    float pib1 = 36.257;
    int pontos_turisticos1 = 15;
    
    // Dados da segunda carta
    char estado2[] = "B";
    char codigo2[] = "B02";
    char nome_cidade2[] = "Pernambuco";
    int populacao2 = 9540000;
    float area2 = 98076.0;
    float pib2 = 288.67;
    int pontos_turisticos2 = 16;
    
    // Cálculo dos novos atributos
    float densidade_pop1 = populacao1 / area1;
    float densidade_pop2 = populacao2 / area2;
    float pib_per_capita1 = pib1 / populacao1;
    float pib_per_capita2 = pib2 / populacao2;
    
    // Escolha do atributo a comparar
    // Opções: 1 - População, 2 - Área, 3 - PIB, 4 - Pontos Turísticos, 5 - Densidade Populacional, 6 - PIB per capita
    int atributo_escolhido = 1;
    
    printf("Comparando cartas:\n");
    printf("Carta 1 - %s (%s)\n", nome_cidade1, estado1);
    printf("Carta 2 - %s (%s)\n\n", nome_cidade2, estado2);
    
    if (atributo_escolhido == 1) {
        printf("Atributo: População\n");
        printf("%d vs %d\n", populacao1, populacao2);
        if (populacao1 > populacao2)
            printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade1);
        else if (populacao2 > populacao1)
            printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
        else
            printf("Resultado: Empate!\n");
            
    } else if (atributo_escolhido == 2) {
        printf("Atributo: Área\n");
        printf("%.2f vs %.2f\n", area1, area2);
        if (area1 > area2)
            printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade1);
        else if (area2 > area1)
            printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
        else
            printf("Resultado: Empate!\n");
    
    } else if (atributo_escolhido == 3) {
        printf("Atributo: PIB\n");
        printf("%.2f vs %.2f\n", pib1, pib2);
        if (pib1 > pib2)
            printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade1);
        else if (pib2 > pib1)
            printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
        else
            printf("Resultado: Empate!\n");
            
    } else if (atributo_escolhido == 4) {
        printf("Atributo: Pontos Turísticos\n");
        printf("%d vs %d\n", pontos_turisticos1, pontos_turisticos2);
        if (pontos_turisticos1 > pontos_turisticos2)
            printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade1);
        else if (pontos_turisticos2 > pontos_turisticos1)
            printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
        else
            printf("Resultado: Empate!\n");
            
    } else if (atributo_escolhido == 5) {
        // Aqui menor densidade vence
        printf("Atributo: Densidade Populacional\n");
        printf("%.4f vs %.4f\n", densidade_pop1, densidade_pop2);
        if (densidade_pop1 < densidade_pop2)
            printf("Resultado: Carta 1 (%s) venceu! (menor densidade)\n", nome_cidade1);
        else if (densidade_pop2 < densidade_pop1)
            printf("Resultado: Carta 2 (%s) venceu! (menor densidade)\n", nome_cidade2);
        else
            printf("Resultado: Empate!\n");
    
    } else if (atributo_escolhido == 6) {
        printf("Atributo: PIB per capita\n");
        printf("%.8f vs %.8f\n", pib_per_capita1, pib_per_capita2);
        if (pib_per_capita1 > pib_per_capita2)
            printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade1);
        else if (pib_per_capita2 > pib_per_capita1)
            printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
        else
            printf("Resultado: Empate!\n");
            
    } else {
        printf("Atributo inválido.\n");
    }
    
    return 0;
}
