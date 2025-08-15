#include <stdio.h>

int main()
{
    // Declaração de variáveis
    char estado1, estado2, codigoDaCarta1[4], codigoDaCarta2[4], cidade1[20], cidade2[20];
    int populacao1, populacao2, numeroPontosTuristicos1, numeroPontosTuristicos2;
    float area1, area2, pib1, pib2;

    // Primeiro Estado

    // impressão de texto no terminal
    printf("Digite a inicial do primeiro Estado: ");
    // leitura de entrada do valor do usuário e alocação do valor na variável
    scanf("%c", &estado1);

    printf("Digite o código do primeiro Estado: ");
    scanf("%s", codigoDaCarta1);

    printf("Digite o nome do primeiro Estado: ");
    scanf("%s", cidade1);

    printf("Digite o valor da população do primeiro Estado: ");
    scanf("%i", &populacao1);

    printf("Digite a quantidade de pontos turisticos do primeiro Estado: ");
    scanf("%i", &numeroPontosTuristicos1);

    printf("Digite a área do primeiro Estado: ");
    scanf("%f", &area1);

    printf("Digite o PIB do primeiro Estado: ");
    scanf("%f", &pib1);

    // Segundo Estado

    printf("Digite a inicial do segundo Estado: ");
    scanf(" %c", &estado2);

    printf("Digite o código do segundo Estado: ");
    scanf("%s", codigoDaCarta2);

    printf("Digite o nome do segundo Estado: ");
    scanf("%s", cidade2);

    printf("Digite o valor da população do segundo Estado: ");
    scanf("%i", &populacao2);

    printf("Digite a quantidade de pontos turisticos do segundo Estado: ");
    scanf("%i", &numeroPontosTuristicos2);

    printf("Digite a área do segundo Estado: ");
    scanf("%f", &area2);

    printf("Digite o PIB do segundo Estado: ");
    scanf("%f", &pib2);

    // Impressão dos resultados

    printf("Carta 1 \n Estado: %c \n Código: %s \n NomeDaCidade: %s \n População: %i \n Área: %f KM quadrados \n PIB: %f bilhões de reais \n NumeroDePontosTuristicos: %d", estado1, codigoDaCarta1, cidade1, populacao1, area1, pib1, numeroPontosTuristicos1);

    printf("\n Carta 2 \n Estado: %c \n Código: %s \n NomeDaCidade: %s \n População: %i \n Área: %f KM quadrados \n PIB: %f bilhões de reais \n NumeroDePontosTuristicos: %d", estado2, codigoDaCarta2, cidade2, populacao2, area2, pib2, numeroPontosTuristicos2);
    return 0;
}
