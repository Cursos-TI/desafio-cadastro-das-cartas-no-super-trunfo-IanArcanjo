#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codigo[50]; // Código da carta
    char nome[50]; // Nome da Cidade
    int populacao; // População da cidade
    float area; // Área da cidade
    float pib; // PIB da Cidade
    int turistico; // Número de pontos turísticos

    printf ("SUPER TRUNFO PAÍSES\n");
    printf ("\nSeja bem-vindo(a) para o jogo SUPER TRUNFO PAÍSES. \nNesse jogo você deverá cadastrar cartas de cidadeas, informando dados da cidade à sua escolha,\ncomo seu nome, sua população, área e algumas outras informações.\n");  // Aqui é a apresentação do jogo, para orientar o usuário o que deve ser feito.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Solicitar que usuário informe as informações para popular a carta
    printf ("\nInforme o código da carta. Ex: A01, A02, B01, B02.\n");
    scanf ("%s", &codigo);

    printf ("\nInforme o nome da cidade.\n");
    scanf ("%s", &nome);

    printf ("\nInforme a população da cidade.\n");
    scanf ("%d", &populacao);

    printf ("\nInforme a área da cidade\n");
    scanf ("%f", &area);

    printf ("\nInforme o PIB da cidade\n");
    scanf ("%f", &pib);

    printf ("\nQuantos pontos turísticos essa cidade possui?\n");
    scanf ("%d", &turistico);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Imprimir na tela as informações passadas pelo usuário
    printf ("CIDADE: %s \n", nome);
    printf ("CÓDIGO DA CARTA: %s \n", codigo);
    printf ("POPULAÇÃO: %d \n", populacao);
    printf ("ÁREA (M²): %f \n", area);
    printf ("PIB: %f \n", pib);
    printf ("QUANTIDADE DE PONTOS TURÍSTICOS: %d \n", turistico);

    return 0;


}