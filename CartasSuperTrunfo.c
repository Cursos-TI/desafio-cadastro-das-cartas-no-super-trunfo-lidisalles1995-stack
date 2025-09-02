#include <stdio.h>
#include <string.h>

// Estrutura para representar uma carta de Super Trunfo
struct CartaSuperTrunfo {
    char nomeCidade[50];
    char estado[50];
    int populacao; // em milhões
    float area;      // em km²
    float pib;       // em bilhões de dólares
    int pontosTuristicos;
};

int main() {
    struct CartaSuperTrunfo carta1;
    struct CartaSuperTrunfo carta2;

    printf("--- Edição da Carta 1 ---\n");
    printf("NomeCidade: ");
    fgets(carta1.nomeCidade, sizeof(carta1.nomeCidade), stdin);
    carta1.nomeCidade[strcspn(carta1.nomeCidade, "\n")] = 0; // Remove a quebra de linha

    printf("Estado: ");
    fgets(carta1.estado, sizeof(carta1.estado), stdin);
    carta1.estado[strcspn(carta1.estado, "\n")] = 0;

    printf("População (em milhões): ");
    scanf("%d", &carta1.populacao);

    printf("Área (em km²): ");
    scanf("%d", &carta1.area);

    printf("PIB (em bilhões de dólares): ");
    scanf("%d", &carta1.pib);

    printf("pontosTuristicos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Limpar o buffer de entrada para a próxima leitura
    while (getchar() != '\n');

    printf("\n--- Edição da Carta 2 ---\n");
    printf("Nome da cidade: ");
    fgets(carta2.nomeCidade, sizeof(carta2.nomeCidade), stdin);
    carta2.nomeCidade[strcspn(carta2.nomeCidade, "\n")] = 0;

    printf("País: ");
    fgets(carta2.estado, sizeof(carta2.estado), stdin);
    carta2.estado[strcspn(carta2.estado, "\n")] = 0;

    printf("População (em milhões): ");
    scanf("%d", &carta2.populacao);

    printf("Área (em km²): ");
    scanf("%d", &carta2.area);

    printf("PIB (em bilhões de dólares): ");
    scanf("%d", &carta2.pib);

     printf("pontosTuristicos: ");
    scanf("%d", &carta2.pontosTuristicos);

    printf("\n--- Cartas Geradas ---\n");

    printf("\n--- Carta 1: %s ---\n", carta1.nomeCidade);
    printf("País: %s\n", carta1.estado);
    printf("População: %d milhões\n", carta1.populacao);
    printf("Área: %d km²\n", carta1.area);
    printf("PIB: %d bilhões de dólares\n", carta1.pib);
     printf("pontosturisticos: %d \n", carta1.pontosTuristicos);

    printf("\n--- Carta 2: %s ---\n", carta2.nomeCidade);
    printf("País: %s\n", carta2.estado);
    printf("População: %d milhões\n", carta2.populacao);
    printf("Área: %d km²\n", carta2.area);
    printf("PIB: %d bilhões de dólares\n", carta2.pib);
     printf("pontosTuristicos: %d \n", carta2.pontosTuristicos);


    return 0;
} 

