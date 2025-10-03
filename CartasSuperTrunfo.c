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
  long int superpoder1 = (pop1 + area1 + pib1 + pontos1 + (1 / densidade1) + ppc1);
  long int superpoder2 = (pop2 + area2 + pib2 + pontos2 + (1 / densidade2) + ppc2);

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
  printf("SUPER PODER: %ld\n", superpoder1);

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
  printf("SUPER PODER: %ld\n", superpoder2);

// Comparativos condicionais 
  
int opc;
  printf("\nEscolha um atributo pra comparar:\n");
  printf("1 - População\n");
  printf("2 - Área\n");
  printf("3 - PIB\n");
  printf("4 - Nº de Pontos Turísticos\n");
  printf("5 - Menor Densidade Populacional\n");
  printf("6 - PPC\n");
  printf("7 - SUPER PODER!\n");
  scanf("%d",&opc);

  switch (opc){
  // População  
    case 1:
      if (pop1 > pop2){
        printf("%s tem %lu habitantes e %s tem %lu habitantes. %s Venceu!\n", cidade1, pop1, cidade2, pop2, cidade1);
      } else {
        printf("%s tem %lu habitantes e %s tem %lu habitantes. %s Venceu!\n", cidade1, pop1, cidade2, pop2, cidade2);
      }
      break;
  
  // Área
    case 2:
      if (area1 > area2){
          printf("%s tem %.2f habitantes e %s tem %.2f habitantes. %s Venceu!\n", cidade1, area1, cidade2, area2, cidade1);
      } else {
        printf("%s tem %.2f habitantes e %s tem %.2f habitantes. %s Venceu!\n", cidade1, area1, cidade2, area2, cidade2);
      }
      break;
  // PIB
    case 3:
      if (pib1 > pib2){
        printf("%s tem um PIB de %.2f bilhões e %s tem um PIB de %.2f bilhões. %s Venceu!\n", cidade1, pib1, cidade2, pib2, cidade1);
      } else {
        printf("%s tem um PIB de %.2f bilhões e %s tem um PIB de %.2f bilhões. %s Venceu!\n", cidade1, pib1, cidade2, pib2, cidade2);
      }
      break;
  
  // Pontos Turísticos
    case 4:
      if (pontos1 > pontos2){
        printf("%s tem um %d pontos turísticos e %s tem %d pontos turísticos. %s Venceu!\n", cidade1, pontos1, cidade2, pontos2, cidade1);
      } else {
        printf("%s tem um %d pontos turísticos e %s tem %d pontos turísticos. %s Venceu!\n", cidade1, pontos1, cidade2, pontos2, cidade2);
      }
      break;
  
  // Menor Densidade Populacional
    case 5:
      if (densidade1 < densidade2){
        printf("%s tem uma densidade de  %.2f enquando a densidade de %s é de %.2f. %s Venceu!\n", cidade1, densidade1, densidade2, cidade1);
      } else {
        printf("%s tem uma densidade de  %.2f enquando a densidade de %s é de %.2f. %s Venceu!\n", cidade1, densidade1, densidade2, cidade2);
      }
      break;
 
  // PPC
   case 6:
      if (ppc1 > ppc2){
        printf("%s tem um PPC de %.2f enquanto %s tem um PPC de %.2f. %s Venceu!\n", cidade1, ppc1, cidade2, ppc2, cidade1);
      } else {
        printf("%s tem um PPC de %.2f enquanto %s tem um PPC de %.2f. %s Venceu!\n", cidade1, ppc1, cidade2, ppc2, cidade2);
      }
      break;
   
  // SUPER PODER
    case 7:
    if (superpoder1 > superpoder2){
        printf("O SUPER PODER de %s é de %ld enquanto o de %s é de %ld. %s Venceu!\n", cidade1, superpoder1, cidade2, superpoder2, cidade1);
      } else {
        printf("O SUPER PODER de %s é de %ld enquanto o de %s é de %ld. %s Venceu!\n", cidade1, superpoder1, cidade2, superpoder2, cidade2);
      }
      break;
   
    }


  return 0;
} 
