#include <stdio.h>

int main() {
    char estado1[2];
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    char estado2[2];
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    printf("\n============= Desafio Super Trunfo ===============\n");

    // Leitura das informações do Estado 1
    printf("Digite o nome do primeiro Estado: ");
    scanf("%s", estado1);
    printf("Digite o codigo do primeiro Estado: ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("Digite a area: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    // Leitura das informações do Estado 2
    printf("\nDigite o nome do segundo Estado: ");
    scanf("%s", estado2);
    printf("Digite o codigo do segundo Estado: ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite a area: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    printf("\n====== CARTAS =======\n");

    // Saída das informações do Estado 1
    printf("Carta 1");
    printf("\nEstado: %s", estado1);
    printf("\nCódigo: %s", codigo1);
    printf("\nNome da Cidade: %s", cidade1);
    printf("\nPopulação: %d", populacao1);
    printf("\nÁrea: %.2f km²", area1);
    printf("\nPIB: %.2f", pib1);
    printf("\nNúmero de Pontos Turísticos: %d\n", pontos_turisticos1);

    // Saída das informações do Estado 2
    printf("\nCarta 2");
    printf("\nEstado: %s", estado2);
    printf("\nCódigo: %s", codigo2);
    printf("\nNome da Cidade: %s", cidade2);
    printf("\nPopulação: %d", populacao2);
    printf("\nÁrea: %.2f km²", area2);
    printf("\nPIB: %.2f", pib2);
    printf("\nNúmero de Pontos Turísticos: %d", pontos_turisticos2);

    return 0;
}