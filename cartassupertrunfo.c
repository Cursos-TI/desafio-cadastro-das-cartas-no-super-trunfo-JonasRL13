#include <stdio.h>

int main() {
    printf(" Desafio Super Trunfo\n");
//Primeira carta
   {
       char Estado = 'A';
       char Codigo[] = "A01";
       char Nome_da_cidade[] = "João Pessoa";
       int Populacao = 833932;
       float area = 21148;
       double PIB = 36.257;
       int Numero_de_Pontos_Turisticos = 15;
       
       printf("Estado: %c \n", Estado);
       
       printf("Codigo: %s \n", Codigo);

       printf("Nome da cidade: %s \n", Nome_da_cidade);
       
       printf("Populacao: %d \n", Populacao);
       
       printf("Area: %.2f km\n", area);
       
       printf("PIB: %.2lf bilhoes de reais \n", PIB);
       
       printf("Numero de Pontos Turisticos: %d \n", Numero_de_Pontos_Turisticos);
   }
     printf("\n \n");
//Segunda carta
   {
       char Estado = 'B';
       char Codigo[] = "B02";
       char Nome_da_cidade[] = "Pernambuco";
       int Populacao = 9540000;
       float area = 98076;
       double PIB = 288.67;
       int Numero_de_Pontos_Turisticos = 16;

       printf("Estado: %c \n", Estado);

       printf("Codigo: %s \n", Codigo);

       printf("Nome da cidade: %s \n", Nome_da_cidade);

       printf("Populacao: %d \n", Populacao);

       printf("Area: %.2f km \n", area);

       printf("PIB: %.2lf bilhoes de reais \n", PIB);

       printf("Numero de Pontos Turisticos: %d \n", Numero_de_Pontos_Turisticos);
   
      
getchar(); // Aguarda a entrada do usuário
getchar(); // Adicione mais uma vez se houve uso de `scanf` antes
    return 0;
    
   }}