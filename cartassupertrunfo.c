#include <stdio.h>

int main() {
    // Dados da carta 1
    char estado1[] = "PB"; // Estado como string
    char codigo1[] = "A01";
    char nomeCidade1[] = "João Pessoa";
    int populacao1 = 833932;
    float area1 = 21148.0f;
    float pib1 = 36.257f;
    int pontosTuristicos1 = 15;

    // Dados da carta 2
    char estado2[] = "PE";
    char codigo2[] = "B02";
    char nomeCidade2[] = "Pernambuco";
    int populacao2 = 9540000;
    float area2 = 98076.0f;
    float pib2 = 288.67f;
    int pontosTuristicos2 = 16;

    // Cálculo de atributos derivados
    float densidade1 = populacao1 / area1;           // habitantes por km²
    float densidade2 = populacao2 / area2;

    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;

    // Escolha do atributo para comparação
    // Opções: "populacao", "area", "pib", "densidade", "pibpercapita"
    char atributoEscolhido[] = "densidade";

    // Variáveis para armazenar valores que serão comparados
    float valor1 = 0.0f;
    float valor2 = 0.0f;

    // Definir valores conforme atributo escolhido
    if (strcmp(atributoEscolhido, "populacao") == 0) {
        valor1 = (float)populacao1;
        valor2 = (float)populacao2;
    } else if (strcmp(atributoEscolhido, "area") == 0) {
        valor1 = area1;
        valor2 = area2;
    } else if (strcmp(atributoEscolhido, "pib") == 0) {
        valor1 = pib1;

