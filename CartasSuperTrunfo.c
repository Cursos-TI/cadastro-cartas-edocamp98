#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países

int main() {
//Variáveis das cartas:
  
  // Carta 1
  char estado1;
  int pontos1;
  char cidade1[20];
  char codigo1[5];
  float area1, pib1;
  unsigned long int pop1;

  // Carta 2
  char estado2;
  int pontos2;
  char cidade2[20];
  char codigo2[5];
  float area2, pib2;
  unsigned long int pop2;

//Preenchimento das Variáveis: 

  // Carta 1
  printf("Carta 1\n");
  printf("Estado da Carta (A-H): \n");
  scanf(" %c",&estado1);
  printf("Código da Carta (Estado + Nº 01-04): \n");
  scanf("%s",codigo1);
  getchar();
  printf("Nome da Cidade: \n");
  scanf("%[^\n]",cidade1);
  printf("População da Cidade: \n");
  scanf("%d",&pop1);
  printf("Área da Cidade (Km²): \n");
  scanf("%f",&area1);
  printf("PIB da cidade (bilhões): \n");
  scanf("%f",&pib1);
  printf("Nº de Pontos Turísticos: \n");
  scanf("%d",&pontos1);

  // Carta 2
  printf("\nCarta 2\n");
  printf("Estado da Carta (A-H): \n");
  scanf(" %c",&estado2);
  printf("Código da Carta (Estado + Nº 01-04): \n");
  scanf("%s",codigo2);
  getchar();
  printf("Nome da Cidade: \n");
  scanf("%[^\n]",cidade2);
  printf("População da Cidade: \n");
  scanf("%d",&pop2);
  printf("Área da Cidade (Km²): \n");
  scanf("%f",&area2);
  printf("PIB da cidade (bilhões): \n");
  scanf("%f",&pib2);
  printf("Nº de Pontos Turísticos: \n");
  scanf("%d",&pontos2);

// Operações:
  float densidade1 = pop1 / area1;  
  float densidade2 = pop2 / area2;
  float ppc1 = (pib1 * 1000000000) / pop1;
  float ppc2 = (pib2 * 1000000000) / pop2;
  float superpoder1 = (pop1 + area1 + pib1 + pontos1 + (1 / densidade1) + ppc1);
  float superpoder2 = (pop2 + area2 + pib2 + pontos2 + (1 / densidade2) + ppc2);

  // Comparações:
  int resultadopop1 = (pop1 > pop2);
  int resultadopop2 = (pop2 > pop1);
  int resultadoarea1 = (area1 > area2);
  int resultadoarea2 = (area2 > area1);
  int resultadopib1 = (pib1 > pib2);
  int resultadopib2 = (pib2 > pib1);
  int resultadopontos1 = (pontos1 > pontos2);
  int resultadopontos2 = (pontos2 > pontos1);
  int resultadodensi1 = (densidade1 < densidade2);
  int resultadodensi2 = (densidade2 < densidade1);
  int resultadoppc1 = (ppc1 > ppc2);
  int resultadoppc2 = (ppc2 > ppc1);
  int resultadosuper1 = (superpoder1 > superpoder2);
  int resultadosuper2 = (superpoder2 > superpoder1);

// Visualização das cartas:
  
  // Carta 1
  printf("\nCarta 1\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("População: %lu pessoas\n", pop1);
  printf("Área: %.2f Km²\n", area1);
  printf("PIB:  %.2f bilhôes de reais\n", pib1);
  printf("Nº de pontos turísticos: %d\n", pontos1);
  printf("Densidade Populacional: %.2f hab/Km²\n", densidade1);
  printf("PIB per Capita: %.2f reais\n", ppc1);
  printf("SUPER PODER: %d\n", superpoder1);

  // Carta 2
  printf("\nCarta 2\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %lu pessoas\n", pop2);
  printf("Área: %.2f Km²\n", area2);
  printf("PIB:  %.2f bilhôes de reais\n", pib2);
  printf("Nº de pontos turísticos: %d\n", pontos2);
  printf("Densidade Populacional: %.2f hab/Km²\n", densidade2);
  printf("PIB per Capita: %.2f reais\n", ppc2);
  printf("SUPER PODER: %d\n", superpoder2);

  // Exibição dos Resultados:
  printf("\nCarta 1: %s X Carta 2: %s\n", cidade1, cidade2);
  printf("Maior População:\n");
  printf("%s: %d X %d :%s\n", cidade1, resultadopop1, resultadopop2, cidade2);
  printf("Maior Área:\n");
  printf("%s: %d X %d :%s\n", cidade1,resultadoarea1, resultadoarea2, cidade2);
  printf("Maior PIB:\n");
  printf("%s: %d X %d :%s\n", cidade1, resultadopib1, resultadopib2, cidade2);
  printf("Maior Quantidade de Pontos Turísticos:\n");
  printf("%s: %d X %d :%s\n", cidade1, resultadopontos1, resultadopontos2, cidade2);
  printf("Menor Densidade Populacional:\n");
  printf("%s: %d X %d :%s\n", cidade1, resultadodensi1, resultadodensi2, cidade2);
  printf("Maior PIB Per Capita:\n");
  printf("%s: %d X %d :%s\n", cidade1, resultadoppc1, resultadoppc2, cidade2);
  printf("Maior SUPER PODER!:\n");
  printf("%s: %d X %d :%s\n", cidade1, resultadosuper1, resultadosuper2, cidade2);

  return 0;
} 
