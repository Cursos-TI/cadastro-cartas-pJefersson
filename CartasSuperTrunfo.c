#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades 01
  char estado, codigo[50], nome_da_cidade[50];
  int populacao, pontos_turisticos;
  float area, pib;

  // Área para entrada de dados
  // solicita o estado
  printf("Digite o Estado: ");
  scanf(" %c", &estado);
  // solicita o codigo da carta
  printf("Digite o codigo da carta (ex: A01): ");
  scanf("%s", codigo);
  // solicita o numero da cidade
  printf("Digite o nome da cidade (sem espaços: ");
  scanf("%s", nome_da_cidade);
  // solicita o numero da população
  printf("Digite o numero da população: ");
  scanf("%d", &populacao);
  // solicita a area em km²
  printf("Digite a área (km²): ");
  scanf("%f", &area);
  // solicita valor do PIB
  printf("Digite o PIB: ");
  scanf("%f", &pib);
  // solicita numero de pontos turísticos
  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontos_turisticos);

  // Área para exibição dos dados da cidade
  printf("====Carta: 01====\n");
  printf("Estado: %c\n", estado);
  printf("Codigo: %s\n", codigo);
  printf("Nome da Cidade: %s\n", nome_da_cidade);
  printf("População: %d\n", populacao);
  printf("Área: %.2f km²\n", area);
  printf("PIB: R$%.2f\n", pib);
  printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);

  printf("\n====Digite os dados da segunda carta====\n");

  // Área para entrada de dados carta 02
  // solicita o estado
  printf("Digite o Estado: ");
  scanf(" %c", &estado);
  // solicita o codigo da carta
  printf("Digite o codigo: ");
  scanf("%s", codigo);
  // solicita o numero da cidade
  printf("Digite o nome da cidade: ");
  scanf("%s", nome_da_cidade);
  // solicita o numero da população
  printf("Digite o numero da população: ");
  scanf("%d", &populacao);
  // solicita a area em km²
  printf("Digite a área (km²): ");
  scanf("%f", &area);
  // solicita valor do PIB
  printf("Digite o PIB: ");
  scanf("%f", &pib);
  // solicita numero de pontos turísticos
  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontos_turisticos);

  // Área para exibição dos dados da cidade
  printf("====Carta: 02====\n");
  printf("Estado: %c\n", estado);
  printf("Codigo: %s\n", codigo);
  printf("Nome da Cidade: %s\n", nome_da_cidade);
  printf("População: %d\n", populacao);
  printf("Área: %.2f km²\n", area);
  printf("PIB: R$%.2f\n", pib);
  printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);

return 0;
} 
