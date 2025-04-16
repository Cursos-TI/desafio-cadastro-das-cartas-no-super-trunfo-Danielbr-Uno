#include <stdio.h>

int main() {
    //Fiz a criação de todas as variáveis, para que sejam apresentadas as duas cartas de uma vez.
    char codigo[5], estado, cidade[20], codigo2[5], estado2, cidade2[20];
    unsigned int populacao, populacao2;
    int turismo, turismo2;
    float area, area2, densiPop, densiPop2, pib, pib2, inverDensiPop, inverDensiPop2, pibB, pibB2; 
    double pibPerCap, pibPerCap2;
    long double superPoder, superPoder2;
    //Abaixo foram criadas variaveis para que possa ser dado o resultado das comparações entre as duas cartas.
    int rPop, rArea, rPIB, rTur, rDP, rPPC, rSP;
        
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
    scanf("%u", &populacao);

    printf("Digite número de pontos turísticos dessa cidade: \n");
    scanf("%d", &turismo);

    printf("Digite a área em km² da cidade: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);
    
    //Abaixo o cálculo da densidade populacional e PIB per capta
    densiPop = populacao / area;
    inverDensiPop = 1 / densiPop;

    pibB = pib * 1000000000; // Convertendo PIB para bilhões.
    pibPerCap = (double) pibB / populacao;

    //Abaixo o cálculo do super poder da primeira carta.
    superPoder = (long double) populacao + area + pib + pibPerCap + inverDensiPop + turismo;

    //Agora pego as informações da segunda carta.
    printf("\nDados para segunda carta:\n");
    printf("Digite a letra que representa o Estado da segunda carta: \n");
    scanf(" %c", &estado2);

    printf("Código da segunda carta: \n");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", cidade2);

    printf("Digite a população total da cidade: \n");
    scanf("%u", &populacao2);

    printf("Digite número de pontos turísticos dessa cidade: \n");
    scanf("%d", &turismo2);

    printf("Digite a área em km² da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    //Abaixo o cálculo da densidade populacional e PIB per capta da segunda carta.
    densiPop2 = populacao2/area2;
    inverDensiPop2 = 1 / densiPop2;

    pibB2 = pib2 * 1000000000; //Convertendo PIB para bilhões
    pibPerCap2 = (double) pibB2 / populacao2;

    //Abaixo o cálculo do super poder da segunda carta.
    superPoder2 = (long double) populacao2 + area2 + pib2 + pibPerCap2 + inverDensiPop2 + turismo2;

    //Abaixo o cálculo das comparações entre as duas cartas.
    rPop = populacao > populacao2;
    rArea = area > area2;
    rPIB = pib > pib2;
    rTur = turismo > turismo2;
    rDP = densiPop < densiPop2;
    rPPC = pibPerCap > pibPerCap2;
    rSP = superPoder > superPoder2;

    printf("\nCarta número 1: \n");
    printf("Código: %s \n", codigo);
    printf("Estado: %c \n", estado);
    printf("Cidade: %s \n", cidade);
    printf("População: %u habitantes \n", populacao);
    printf("Número de pontos turísticos: %d locais \n", turismo);
    printf("Área: %.2f km² \n", area);
    printf("PIB: R$ %.2f bilhões \n", pib);
    printf("Densidade populacional: %.2f hab/km² \n", densiPop);
    printf("PIB per capta: %.2f reais \n", pibPerCap);
    printf("Super poder: %.2Lf \n\n", superPoder);

    printf("\nCarta número 2: \n");
    printf("Código: %s \n", codigo2);
    printf("Estado: %c \n", estado2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %u habitantes \n", populacao2);
    printf("Número de pontos turísticos: %d locais \n", turismo2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: R$ %.2f bilhões \n", pib2);
    printf("Densidade populacional: %.2f hab/km² \n", densiPop2);
    printf("PIB per capta: %.2f reais por habitante \n", pibPerCap2);
    printf("Super poder: %.2Lf \n\n", superPoder2);

    printf("\nDuelo de cartas: \n");
    if(populacao > populacao2){
        printf("Carta 1(%s) venceu com %u habitantes!\n", cidade, populacao);
    } else {
        printf("Carta 2(%s) venceu com %u de habitantes!\n", cidade2, populacao2);
    }
    if(area > area2){
        printf("Carta 1(%s) venceu com %.2f km² de área!\n", cidade, area);
    } else {
        printf("Carta 2(%s) venceu com %.2f km² de área!\n", cidade2, area2);
    }
    if(pib > pib2){
        printf("Carta 1(%s) venceu com %.2f bilhões de reais no PIB!\n", cidade, pib);
    } else {
        printf("Carta 2(%s) venceu com %.2f bilhões de reais no PIB!\n", cidade2, pib2);
    }
    if(turismo > turismo2){
        printf("Carta 1(%s) venceu com %d pontos turísticos!\n", cidade, turismo);
    } else {
        printf("Carta 2(%s) venceu com %d pontos turísticos!\n", cidade2, turismo2);
    }
    if(densiPop < densiPop2){
        printf("Carta 1(%s) venceu com %.2f de habitantes por km²!\n", cidade, densiPop);
    } else {
        printf("Carta 2(%s) venceu com %.2f de habitantes por km²!\n", cidade2, densiPop2);
    }
    if(pibPerCap > pibPerCap2){
        printf("Carta 1(%s) venceu com %.2f reais por habitante!\n", cidade, pibPerCap);
    } else {
        printf("Carta 2(%s) venceu com %.2f reais por habitante!\n", cidade2, pibPerCap2);
    }
    if(superPoder > superPoder2){
        printf("Carta 1(%s) venceu com %.2Lf pontos!\n", cidade, superPoder);
    } else {
        printf("Carta 2(%s) venceu com %.2Lf pontos!\n", cidade2, superPoder2);
    }

    return 0;
}