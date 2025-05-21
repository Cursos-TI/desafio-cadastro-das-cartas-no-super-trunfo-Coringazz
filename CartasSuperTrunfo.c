#include <stdio.h>

int main() {
   // // Variáveis para armazenar as informações das cartas
char estado1[50], estado2[50];
char codigo1[50], codigo2[50];
char cidade1[50], cidade2[50];
int populacao1, populacao2;
float area1, area2;
float pib1, pib2;
int pontos1, pontos2;

// Entrada de dadospara carta 1
printf("Informe os dados da carta 1:\n");

printf("Digite o seu estado: \n");
scanf("%s", estado1);

printf("Digite o seu codigo: \n");
scanf("%s", codigo1);

printf("Digite a sua cidade: \n");
scanf("%s", cidade1);

printf("Digite a população: \n");
scanf("%d", &populacao1);

printf("Digite a area: \n");
scanf("%f", &area1);

printf("Digite o pib: \n");
scanf("%f", &pib1);

printf("Digite pontos turisticos: \n");
scanf("%d", &pontos1);

// entrada de dados para carta 2

printf("Informe os dados da carta 2:\n");

printf("Digite o seu estado; \n");
scanf("%s", estado2);

printf("Digite o seu codigo: \n");
scanf("%s", codigo2);

printf("Digite a sua cidade: \n");
scanf("%s", cidade2);

printf("Digite a população: \n");
scanf("%d", &populacao2);

printf("Digite a area: \n");
scanf("%f", &area2);

printf("Digite o pib: \n");
scanf("%f", &pib2);

printf("Digite pontos turisticos: \n");
scanf("%d", &pontos2);

// Cálculos 
float densidade1 = populacao1 / area1;
float pib_per_capita1 = (pib1 * 1000000000) / populacao1; 

float densidade2 = populacao2 / area2;
float pib_per_capita2 = (pib2 * 1000000000) / populacao2;

// exibição das cartas 

printf("\nCarta 1:\n");
printf("Estado: %s\n", estado1);
printf("Codigo: %s\n", codigo1);
printf("Cidade: %s\n", cidade1);
printf("População: %d\n", populacao1);
printf("Area: %f\n", area1);
printf("PIB: %f\n", pib1);
printf("Pontos turisticos: %d\n", pontos1);
printf("Densidade populacional: %.2f hab/km²\n",densidade1);
printf("PIB per Capita: %.2f reais\n", pib_per_capita1);


printf("\nCarta 2:\n");
printf("Estado: %s\n", estado2);
printf("Codigo: %s\n", codigo2);
printf("Cidade: %s\n", cidade2);
printf("População: %d\n", populacao2);
printf("Area: %f\n", area2);
printf("PIB: %f\n", pib2);
printf("Pontos turisticos: %d\n", pontos2);
printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
printf("PIB per capita: %.2f reais\n", pib_per_capita2);

return 0;

}
