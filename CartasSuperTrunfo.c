#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
//Variáveis das cartas:
  
  // Carta 1
  char estado1;
  int pop1, pontos1;
  char cidade1[20];
  char codigo1[5];
  float area1, pib1;

  // Carta 2
  char estado2;
  int pop2, pontos2;
  char cidade2[20];
  char codigo2[5];
  float area2, pib2;

//Preenchimento das Variáveis: 

  // Carta 1
  printf("Estado da Carta (A-H): \n");
  scanf("%c",&estado1);
  printf("Código da Carta (Estado + Nº 01-04): \n");
  scanf("%s",codigo1);
  printf("Nome da Cidade: \n");
  scanf("%s",cidade1);
  printf("População da Cidade: \n");
  scanf("%d",&pop1);
  printf("Área da Cidade (Km²): \n");
  scanf("%f",&area1);
  printf("PIB da cidade (bilhões): \n");
  scanf("%f",&pib1);
  printf("Nº de Pontos Turísticos: \n");
  scanf("%d",&pontos1);

// Visualização das cartas:
  // Carta 1
  printf("\nCarta 1\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("População: %d pessoas\n", pop1);
  printf("Área: %.2f Km²\n", area1);
  printf("PIB:  %.2f bilhôes de reais\n", pib1);
  printf("Nº de pontos turísticos: %d\n", pontos1);

return 0;
} 
