#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  //CARTA1
    char nome_estado[50] = "Pernambuco";
    char codigo_carta[10] = "A01";
    char nome_cidade[50] = "Recife";
    float populacao = 1587.707f;
    float area = 218.843f;
    float pib = 54.97f;
    int pontos_turisticos = 21;

  // Área para entrada de dados
    printf("Digite o nome do estado (sem espaços):\n");
    scanf("%s", nome_estado);
    printf("Digite o Código da Carta (ex: A01):\n");
    scanf("%s", codigo_carta);
    printf("Digite o nome da cidade (sem espaços):\n");
    scanf("%s", nome_cidade);
    printf("Digite a população:\n");
    scanf("%f", &populacao);
    printf("Digite a área (em km²):\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos);

  // Área para exibição dos dados da cidade
    printf("\n--- Dados da Carta ---\n");
    printf("Nome do Estado: %s\n", nome_estado);
    printf("Código da Carta: %s\n", codigo_carta);
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("População: %.3f\n", populacao);
    printf("Área: %.3f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Quantidade de pontos turísticos: %d\n", pontos_turisticos);

  //CARTA2
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char nome_estado2[50] = "Paraíba";
    char codigo_carta2[10] = "B01";
    char nome_cidade2[50] = "Cabedelo";
    float populacao2 = 69.773f;
    float area2 = 29.873f;
    float pib2 = 3.15;
    int pontos_turisticos2 = 10;

  // Área para entrada de dados
    printf("Digite o nome do estado (sem espaços):\n");
    scanf("%s", nome_estado2);
    printf("Digite o Código da Carta (ex: A01):\n");
    scanf("%s", codigo_carta2);
    printf("Digite o nome da cidade (sem espaços):\n");
    scanf("%s", nome_cidade2);
    printf("Digite a população:\n");
    scanf("%f", &populacao2);
    printf("Digite a área (em km²):\n");
    scanf("%f", &area2);
    printf("Digite o PIB:\n");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos2);

  // Área para exibição dos dados da cidade
    printf("\n--- Dados da Carta ---\n");
    printf("Nome do Estado: %s\n", nome_estado2);
    printf("Código da Carta: %s\n", codigo_carta2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %.3f\n", populacao2);
    printf("Área: %.3f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Quantidade de pontos turísticos: %d\n", pontos_turisticos2);

    return 0;
}