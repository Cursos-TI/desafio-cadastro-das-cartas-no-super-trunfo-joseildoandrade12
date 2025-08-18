#include <stdio.h>

// Variáveis declaradas globalmente
typedef struct
{
    char estado;
    char codigoDaCarta[4];
    char nomeCidade[20];
    double populacao;
    int numeroPontosTuristicos;
    double area;
    double pib;
    double densidadePopulacional;
    double pibPerCapita;
    double superPoder;
} dadosCidade;

dadosCidade cidade[2];

// Calcula soma densidade
double somaDensidade(double populacaoValue, double areaValue)
{
    return populacaoValue / areaValue;
}

// Calcula soma pib per capita
double somaPibPerCapita(double pibValue, double populacaoValue)
{
    return (pibValue * 1000000000.0) / (float)populacaoValue;
}

int separador()
{
    printf("----------------------------\n");
    return 0;
}

int main()
{
    // loop com variáveis globais
    for (int i = 0; i < 2; i++)
    {
        // impressão de texto no terminal
        printf("Digite a inicial do Estado: ");
        // leitura de entrada do valor do usuário e alocação do valor na variável
        scanf(" %c", &cidade[i].estado);

        printf("Digite o código do Estado: ");
        scanf("%3s", cidade[i].codigoDaCarta);

        printf("Digite o nome do Estado: ");
        scanf("%s", cidade[i].nomeCidade);

        printf("Digite o valor da população do Estado: ");
        scanf("%lf", &cidade[i].populacao);

        printf("Digite a quantidade de pontos turisticos do Estado: ");
        scanf("%i", &cidade[i].numeroPontosTuristicos);

        printf("Digite a área do Estado: ");
        scanf("%lf", &cidade[i].area);

        printf("Digite o PIB do Estado: ");
        scanf("%lf", &cidade[i].pib);
        separador();
    }

    //loop para pegar valores de Densidade e PIBPerCapita
    for (int i = 0; i < 2; i++)
    {
        cidade[i].densidadePopulacional = somaDensidade(cidade[i].populacao, cidade[i].area);
        cidade[i].pibPerCapita = somaPibPerCapita(cidade[i].pib, cidade[i].populacao);
    }

    // Soma superPoder
    for (int i = 0; i < 2; i++)
    {
        cidade[i].superPoder = (cidade[i].populacao + cidade[i].area + cidade[i].pib + (double) cidade[i].numeroPontosTuristicos + cidade[i].pibPerCapita) - cidade[i].densidadePopulacional;
    }

    separador();

    // Impressão dos resultados
    for (int i = 0; i < 2; i++)
    {
        printf("Carta %c \n", i + 1);
        printf("Estado: %c \n", cidade[i].estado);
        printf("Código: %s \n", cidade[i].codigoDaCarta);
        printf("NomeDaCidade: %s \n", cidade[i].nomeCidade);
        printf("População: %lf \n", cidade[i].populacao);
        printf("Área: %.2lf KM² \n", cidade[i].area);
        printf("PIB: %.2lf bilhões de reais \n", cidade[i].pib);
        printf("NumeroDePontosTuristicos: %d \n", cidade[i].numeroPontosTuristicos);
        printf("DensidadePopulacional: %.2lf hab/km² \n", cidade[i].densidadePopulacional);
        printf("PibPerCapita: %.2lf reais \n", cidade[i].pibPerCapita);
        printf("SuperPoder: %.2lf \n", cidade[i].superPoder);

        separador();
    }

    if(cidade[1].populacao > cidade[2].populacao) printf("População: Carta 1 venceu \n");
    else printf("População: Carta 2 venceu \n");
    
    if(cidade[1].numeroPontosTuristicos > cidade[2].numeroPontosTuristicos) printf("NumeroPontosTuristicos: Carta 1 venceu \n");
    else printf("NumeroPontosTuristicos: Carta 2 venceu \n");

    if(cidade[1].area > cidade[2].area) printf("Área: Carta 1 venceu \n");
    else printf("Área: Carta 2 venceu \n");
    
    if(cidade[1].pib > cidade[2].pib) printf("PIB: Carta 1 venceu \n");
    else printf("PIB: Carta 2 venceu \n");
    
    if(cidade[1].densidadePopulacional < cidade[2].densidadePopulacional) printf("DensidadePopulacional: Carta 1 venceu \n");
    else printf("DensidadePopulacional: Carta 2 venceu \n");

    if(cidade[1].pibPerCapita > cidade[2].pibPerCapita) printf("PibPerCapita: Carta 1 venceu \n");
    else printf("PibPerCapita: Carta 2 venceu \n");
    
    if(cidade[1].superPoder > cidade[2].superPoder) printf("SuperPoder: Carta 1 venceu \n");
    else printf("SuperPoder: Carta 2 venceu \n");
    
    return 0;
}
