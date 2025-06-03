#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {
    // Variáveis para armazenar as propriedades das cidades
    char codigo1[10], codigo2[10];
    char nome1[50], nome2[50];
    char estado1[30], estado2[30];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
    float densidade1, densidade2;
    char atributo[30];

// Cadastro da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Código: ");
    scanf(" %[^\n]", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome1);
    printf("Estado: ");
    scanf(" %[^\n]", estado1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos1);

    // Cadastro da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Código: ");
    scanf(" %[^\n]", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome2);
    printf("Estado: ");
    scanf(" %[^\n]", estado2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // Cálculo da densidade
    densidade1 = (area1 > 0) ? (populacao1 / area1) : 0;
    densidade2 = (area2 > 0) ? (populacao2 / area2) : 0;

    // Escolha do atributo para comparar
    printf("\nAtributos disponíveis: populacao | area | pib | pontos | densidade\n");
    printf("Digite o atributo para comparar: ");
    scanf(" %[^\n]", atributo);

    // Comparação de Cartas
    printf("\n--- Resultado da Comparação ---\n");

    if (strcmp(atributo, "populacao") == 0) {
        if (populacao1 > populacao2)
            printf("Cidade vencedora: %s (maior população)\n", nome1);
        else if (populacao2 > populacao1)
            printf("Cidade vencedora: %s (maior população)\n", nome2);
        else
            printf("Empate na população!\n");
    }
    else if (strcmp(atributo, "area") == 0) {
        if (area1 > area2)
            printf("Cidade vencedora: %s (maior área)\n", nome1);
        else if (area2 > area1)
            printf("Cidade vencedora: %s (maior área)\n", nome2);
        else
            printf("Empate na área!\n");
    }
    else if (strcmp(atributo, "pib") == 0) {
        if (pib1 > pib2)
            printf("Cidade vencedora: %s (maior PIB)\n", nome1);
        else if (pib2 > pib1)
            printf("Cidade vencedora: %s (maior PIB)\n", nome2);
        else
            printf("Empate no PIB!\n");
    }
    else if (strcmp(atributo, "pontos") == 0) {
        if (pontos1 > pontos2)
            printf("Cidade vencedora: %s (mais pontos turísticos)\n", nome1);
        else if (pontos2 > pontos1)
            printf("Cidade vencedora: %s (mais pontos turísticos)\n", nome2);
        else
            printf("Empate nos pontos turísticos!\n");
    }
    else if (strcmp(atributo, "densidade") == 0) {
        if (densidade1 < densidade2)
            printf("Cidade vencedora: %s (menor densidade populacional)\n", nome1);
        else if (densidade2 < densidade1)
            printf("Cidade vencedora: %s (menor densidade populacional)\n", nome2);
        else
            printf("Empate na densidade!\n");
    }
    else {
        printf("Atributo inválido!\n");
    }

    return 0;
}
