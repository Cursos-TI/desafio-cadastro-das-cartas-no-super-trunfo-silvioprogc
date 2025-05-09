#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char estado1;
    char estado2;
    char codigo1[4];
    char codigo2[4];           
    char cidade1[50];      
    char cidade2[50];
    int populacao1;
    int populacao2;
    float area1;
    float area2;               
    float pib1;
    float pib2;               
    int pontosTuristicos1; 
    int pontosTuristicos2; 

    //Inserindo dados da primeira Carta
printf("Cadastrar 1ª Carta\n");
printf("\n");
printf("Digite a letra do Estado (letra de A a H): ");
scanf(" %c", &estado1);
printf("Digite o Código da Carta: ");
scanf("%s", &codigo1);
printf("Digite a Cidade: ");
scanf("%s", &cidade1);
printf("População: ");
scanf("%d", &populacao1);
printf("Área: ");
scanf(" %f", &area1);
printf("PIB: ");
scanf(" %f", &pib1);
printf("Pontos Turisticos: ");
scanf(" %d", &pontosTuristicos1);
printf("\n");     
    //Inserindo dados da Segunda Carta   
    printf("Cadastrar 2ª Carta\n");
    printf("\n");
    printf("Digite a letra do Estado (letra de A a H): ");
    scanf(" %c", &estado2);
    printf("Digite o Código da Carta: ");
    scanf("%s", &codigo2);
    printf("Digite a Cidade: ");
    scanf("%s", &cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área: ");
    scanf(" %f", &area2);
    printf("PIB: ");
    scanf(" %f", &pib2);
    printf("Pontos Turisticos: ");
    scanf(" %d", &pontosTuristicos2);

//Imprimir dados da primeira carta
printf("\n");
printf("Carta 1\n");
printf("Estado: %c\n" , estado1);
printf("Codigo: %s\n" , codigo1);
printf("Cidade: %s\n" , cidade1);
printf("População: %d\n" , populacao1);
printf("Área: %f\n" , area1);
printf("PIB: %f\n" , pib1);
printf("Pontos Turisticos: %d\n" , pontosTuristicos1);
   printf("\n");
    printf("Carta 2\n");
    printf("Estado: %c\n" , estado2);
    printf("Codigo: %s\n" , codigo2);
    printf("Cidade: %s\n" , cidade2);
    printf("População: %d\n" , populacao2);
    printf("Área: %f\n" , area2);
    printf("PIB: %f\n" , pib2);
    printf("Pontos Turisticos: %d\n" , pontosTuristicos2);

    return 0;
}
