// Autor: Diego dos Santos Oliveira 
// Matrícula: 2025 0372 2821
// Introdução à Programação de Computadores
// Tema 1 - Desafio Nível Aventureiro: Criando as Cartas do Super Trunfo

#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    //Declaração de variáveis

    char estado1, estado2, codigo1[3], codigo2[3], nomeCidade1[20], nomeCidade2[20];
    int numPontosTur1, numPontosTur2;
    unsigned long int populacao1;
    unsigned long int populacao2;
    float area1, area2, pib1, pib2, densidadePop1, densidadePop2, pibPerCapita1, pibPerCapita2, superPoder1, superPoder2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    //Coleta de dados

    printf("Bem vindo ao SUPER TRUNFO - PAÍSES, neste módulo iremos cadastrar nossas cartas. \nSiga as instruções até o final para confirmar o cadastramento. \n \nCADASTRAMENTO DA CARTA 1 \n \nEstado (1 caractere de 'A' a 'H'): ");
    scanf("%s", &estado1);

    printf("\nCódigo da Carta (Código do estado seguido de 2 dígitos numéricos): ");
    scanf("%s", codigo1);

    printf("\nNome da Cidade: ");
    scanf("%s", &nomeCidade1);

    printf("\nPopulação: ");
    scanf("%lu", &populacao1);

    printf("\nÁrea (km²): ");
    scanf("%f", &area1);

    printf("\nPIB: ");
    scanf("%f", &pib1);

    printf("\nNúmero de pontos turísticos: ");
    scanf("%d", &numPontosTur1);

    densidadePop1 = (float) populacao1 / area1;
    pibPerCapita1 = (float) pib1 / populacao1;
    superPoder1 = (float) populacao1 + area1 + pib1 + numPontosTur1 + pibPerCapita1 + (1/densidadePop1);

    printf("Carta 1 Cadastrada com sucesso. \n \n \nCADASTRAMENTO DA CARTA 2 \n \nEstado (1 caractere de 'A' a 'H'): ");
    scanf("%s", &estado2);

    printf("\nCódigo da Carta (Código do estado seguido de 2 dígitos numéricos): ");
    scanf("%s", codigo2);

    printf("\nNome da Cidade: ");
    scanf("%s", &nomeCidade2);

    printf("\nPopulação: ");
    scanf("%lu", &populacao2);

    printf("\nÁrea (km²): ");
    scanf("%f", &area2);

    printf("\nPIB: ");
    scanf("%f", &pib2);

    printf("\nNúmero de pontos turísticos: ");
    scanf("%d", &numPontosTur2);

    densidadePop2 = (float) populacao2 / area2;
    pibPerCapita2 = (float) pib2 / populacao2;
    superPoder2 = (float) populacao2 + area2 + pib2 + numPontosTur2 + pibPerCapita2 + (1/densidadePop2);

    printf("\nCarta 2 cadastrada com sucesso\n");

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //Impressão dos dados

    printf("******************************\n     SUPER TRUNFO - PAÍSES \n******************************\n");
    printf("* CARTA 1 \n* \n");
    printf("** Estado: %c\n", estado1);
    printf("** Código: %s\n", codigo1);
    printf("** Nome da Cidade: %s\n", nomeCidade1);
    printf("** População: %u\n", populacao1);
    printf("** Área: %.2f km²\n", area1);
    printf("** PIB: %.2f\n", pib1);
    printf("** Densidade Populacional: %.2f\n", densidadePop1);
    printf("** PIB per Capita: %.2f\n", pibPerCapita1);
    printf("** Número de pontos turísticos: %d\n", numPontosTur1);
    printf("** Super Poder: %.2f\n", superPoder1);
    printf("******************************\n");
    printf("* CARTA 2 \n* \n");
    printf("** Estado: %c\n", estado2);
    printf("** Código: %s\n", codigo2);
    printf("** Nome da Cidade: %s\n", nomeCidade2);
    printf("** População: %u\n", populacao2);
    printf("** Área: %.2f km² \n", area2);
    printf("** PIB: %.2f\n", pib2);
    printf("** Densidade Populacional: %.2f\n", densidadePop2);
    printf("** PIB per Capita: %.2f\n", pibPerCapita2);
    printf("** Número de pontos turísticos: %d\n", numPontosTur2);
    printf("** Super Poder: %.2f\n", superPoder2);
    printf("******************************\n*\n");
    printf("* COMPARATIVO DOS ATRIBUTOS: ( 1 - Carta 1 Vence | 0 - Carta 2 Vence)\n**\n");
    printf("** População: %d\n", populacao1 > populacao2);
    printf("** Área: %d\n", area1 > area2);
    printf("** PIB: %d\n", pib1 > pib2);
    printf("** Densidade Populacional: %d\n", densidadePop1 < densidadePop2);
    printf("** PIB per Capita: %d\n", pibPerCapita1 > pibPerCapita2);
    printf("** Número de pontos turísticos: %d\n", numPontosTur1 > numPontosTur2);
    printf("** Super Poder: %d\n", superPoder1 > superPoder2);
    
    printf("*\n*\n*\n* Fim \n \n");

    return 0;
}
