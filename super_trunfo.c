#include <stdio.h>
#include <string.h> // Necessário para a função strcpy
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    // --- Dados da Carta 1 ---
    char estado1 = 'A';
    char codigo1[5];
    strcpy(codigo1, "A01");
    char nome_cidade1[50];
    strcpy(nome_cidade1, "São Paulo");
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontos_turisticos1 = 50;

    // --- Dados da Carta 2 ---
    char estado2 = 'B';
    char codigo2[5];
    strcpy(codigo2, "B02");
    char nome_cidade2[50];
    strcpy(nome_cidade2, "Rio de Janeiro");
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pontos_turisticos2 = 30;

    printf("==================================\n");
    printf("--- Dados Cadastrados ---\n");
    printf("==================================\n");

    // Exibição dos dados da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    printf("\nCarta 2:\n");
    // Exibição dos dados da Carta 2
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}