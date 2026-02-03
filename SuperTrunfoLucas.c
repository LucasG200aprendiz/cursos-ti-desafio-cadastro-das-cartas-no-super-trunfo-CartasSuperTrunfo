#include <stdio.h>
int main(){

    //Variaveis da cidade 1
    char estado1;
    char codigo_carta1[3];
    char nome_cidade1[10];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    //Variaveis da cidade 2
    char estado2;
    char codigo_carta2[3];
    char nome_cidade2[10];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    //Coletando informações da carta 1:

    //Estado 1
    printf("Digite a inicial do estado da carta-(de A até H):\n");
    scanf("%c", &estado1);
    //Codigo da carta 1:
    printf("Digite o codigo da carta:\n");
    scanf("%s", &codigo_carta1);
    //Nome da cidade 1:
    printf("Digite o nome da cidade:\n");
    scanf("%s", &nome_cidade1);
    //População da cidade 1:
    printf("Digite o tamanho da população:\n");
    scanf("%d", &populacao1);
    //Área por Km² da cidade 1:
    printf("Informe o tamanho da cidade:\n");
    scanf("%f", &area1);
    //Pib da cidade 1:
    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib1);
    //Pontos turisticos da cidade 1
    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf("%d", &pontos_turisticos1);

    //Coletando informações da carta 2:

    //Estado 2
    printf("Digite a inicial do estado da carta-(de A até H):\n");
    scanf("%c", &estado2);
    //Codigo da carta 2:
    printf("Digite o codigo da carta:\n");
    scanf("%s", &codigo_carta2);
    //Nome da cidade 2:
    printf("Digite o nome da cidade:\n");
    scanf("%s", &nome_cidade2);
    //População da cidade 2:
    printf("Digite o tamanho da população:\n");
    scanf("%d", &populacao2);
    //Área por Km² da cidade 2:
    printf("Informe o tamanho da cidade:\n");
    scanf("%f", &area2);
    //Pib da cidade 2:
    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib2);
    //Pontos turisticos da cidade 2
    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf("%d\n", &pontos_turisticos2);

    //Mostrando as informações da carta 1
    printf("CARTA 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo_carta1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Tamanho da cidade: %f\n", area1);
    printf("PIB da cidade: %f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);

    //Mostrando as informações da carta 2
    printf("CARTA 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Tamanho da cidade: %f\n", area2);
    printf("PIB da cidade: %f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    
    //Fim do programa
    return 0;



}