#include <stdio.h>

int main() {
    //Fiz a criação de todas as variáveis, para que sejam apresentadas as duas cartas de uma vez.
    char codigo[5], estado, cidade[20], codigo2[5], estado2, cidade2[20];
    int populacao, populacao2, turismo, turismo2;
    float area, area2, densiPop, densiPop2, pib, pib2;
    double pibPerCap, pibPerCap2;
    
    //Primeiro pego as informações da primeira carta.
    printf("Desafio cadastro de cartas Super Trunfo!\n\n");
    printf("Dados para primeira carta:\n");
    printf("Digite a letra que representa o Estado da primeira carta: \n");
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

    //Abaixo o cálculo da densidade populacional e PIB per capta
    densiPop = populacao / area;
    pibPerCap = (double) pib / populacao;
    
    //Agora pego as informações da segunda carta.
    printf("\nDados para segunda carta:\n");
    printf("Digite a letra que representa o Estado da segunda carta: \n");
    scanf(" %c", &estado2);

    printf("Código da segunda carta: \n");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", cidade2);

    printf("Digite a população total da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite número de pontos turísticos dessa cidade: \n");
    scanf("%d", &turismo2);

    printf("Digite a área em km² da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    //Abaixo o cálculo da densidade populacional e PIB per capta da segunda carta.
    densiPop2 = populacao2/area2;
    pibPerCap2 = (double) pib2 / populacao2;

    printf("\nCarta número 1:\n");
    printf("Código: %s \n", codigo);
    printf("Estado: %c \n", estado);
    printf("Cidade: %s \n", cidade);
    printf("População: %d habitantes\n", populacao);
    printf("Número de pontos turísticos: %d locais\n", turismo);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f bilhões\n", pib);
    printf("Densidade populacional: %.2f hab/km²\n", densiPop);
    printf("PIB per capta: %.2f reais\n\n", pibPerCap);

    printf("Carta número 2:\n");
    printf("Código: %s \n", codigo2);
    printf("Estado: %c \n", estado2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Número de pontos turísticos: %d locais\n", turismo2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Densidade populacional: %.2f hab/km²\n", densiPop2);
    printf("PIB per capta: %.2f reais\n\n", pibPerCap2);

    return 0;
}