#include <stdio.h>

int main() {
    char codigo[5], estado;
    char cidade[20];
    int populacao, turismo;
    float area, pib;
    printf("Desafio cadastro de cartas Super Trunfo!\n");
    printf("Digite a letra que representa o Estado da carta: \n");
    scanf(" %c", &estado);

    printf("Código da primeira carta: \n");
    scanf(" %s", codigo);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", cidade);

    printf("Digite a população total da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite número de pontos turísticos dessa cidade: \n");
    scanf("%d", &turismo);

    printf("Digite a área em km² da cidade: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Carta número 1:\n");
    printf("Código: %s \n", codigo);
    printf("Estado: %c \n", estado);
    printf("Cidade: %s \n", cidade);
    printf("População: %d milhões de habitantes\n", populacao);
    printf("Número de pontos turísticos: %d locais\n", turismo);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f bilhões\n\n", pib);

    return 0;
}
