#include <stdio.h>

// Definição da estrutura da carta
struct Carta {
    char estado[50];
    int codigo;
    char nome[50];
    unsigned long int populacao;
    float area;
    double pib;
    int pontos_turisticos;
    float densidade;
    float pib_per_capita;
    float super_poder;
};

// Função para calcular densidade populacional
float calcularDensidade(unsigned long int populacao, float area) {
    return populacao / area;
}

// Função para calcular PIB per capita
float calcularPIBPerCapita(double pib, unsigned long int populacao) {
    return pib / populacao;
}

// Função para calcular Super Poder
float calcularSuperPoder(struct Carta c) {
    float inverso_densidade = 1 / c.densidade;
    return (float)c.populacao + c.area + (float)c.pib + (float)c.pontos_turisticos +
           c.pib_per_capita + inverso_densidade;
}

// Função para comparar dois valores e retornar 1 se a > b, senão 0
int compararMaior(float a, float b) {
    return a > b ? 1 : 0;
}

// Função para comparar densidade (menor é melhor)
int compararMenor(float a, float b) {
    return a < b ? 1 : 0;
}

int main() {
    struct Carta c1, c2;

    // Leitura dos dados da carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado: "); scanf(" %[^\n]", c1.estado);
    printf("Código: "); scanf("%d", &c1.codigo);
    printf("Nome: "); scanf(" %[^\n]", c1.nome);
    printf("População: "); scanf("%lu", &c1.populacao);
    printf("Área: "); scanf("%f", &c1.area);
    printf("PIB: "); scanf("%lf", &c1.pib);
    printf("Pontos Turísticos: "); scanf("%d", &c1.pontos_turisticos);

    // Leitura dos dados da carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado: "); scanf(" %[^\n]", c2.estado);
    printf("Código: "); scanf("%d", &c2.codigo);
    printf("Nome: "); scanf(" %[^\n]", c2.nome);
    printf("População: "); scanf("%lu", &c2.populacao);
    printf("Área: "); scanf("%f", &c2.area);
    printf("PIB: "); scanf("%lf", &c2.pib);
    printf("Pontos Turísticos: "); scanf("%d", &c2.pontos_turisticos);

    // Cálculo dos atributos derivados
    c1.densidade = calcularDensidade(c1.populacao, c1.area);
    c1.pib_per_capita = calcularPIBPerCapita(c1.pib, c1.populacao);
    c1.super_poder = calcularSuperPoder(c1);

    c2.densidade = calcularDensidade(c2.populacao, c2.area);
    c2.pib_per_capita = calcularPIBPerCapita(c2.pib, c2.populacao);
    c2.super_poder = calcularSuperPoder(c2);

    // Comparações
    printf("\nComparação de Cartas:\n");

    printf("População: Carta 1 venceu (%d)\n", compararMaior((float)c1.populacao, (float)c2.populacao));
    printf("Área: Carta 1 venceu (%d)\n", compararMaior(c1.area, c2.area));
    printf("PIB: Carta 1 venceu (%d)\n", compararMaior((float)c1.pib, (float)c2.pib));
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", compararMaior((float)c1.pontos_turisticos, (float)c2.pontos_turisticos));
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", compararMenor(c1.densidade, c2.densidade));
    printf("PIB per Capita: Carta 1 venceu (%d)\n", compararMaior(c1.pib_per_capita, c2.pib_per_capita));
    printf("Super Poder: Carta 1 venceu (%d)\n", compararMaior(c1.super_poder, c2.super_poder));

    return 0;
}
