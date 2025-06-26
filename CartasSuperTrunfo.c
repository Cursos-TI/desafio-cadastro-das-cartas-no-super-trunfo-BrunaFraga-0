#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    printf("-----------------------------------\n");
    printf("   Desafio Super Trunfo - Países   \n");
    printf("        Cadastro das Cartas        \n");
    printf("-----------------------------------\n");
    
    //Cadastramento Carta 1 (C1)
    printf("Carta 1\n");
    printf("-------\n");

    // Declarando as variáveis para a C1
    char estado_C1, codigo_C1[20], cidade_C1[50];
    int populacao_C1, p_turistico_C1;
    float area_C1, pib_C1; 

    // Entrada de dados C1
    // Solicitando ao usuário que insira as informações para cadastro da C1
    printf("Insira o Estado (uma letra entre A e H): \n");
    scanf("%s", &estado_C1);
    printf("Insira o código da carta (a letra do Estado + um número de 01 a 04): \n");
    scanf("%s", codigo_C1);
    printf("Insira o nome da cidade: \n");
    scanf("%s", cidade_C1);
    printf("Insira a população da cidade: \n");
    scanf("%d", &populacao_C1);
    printf("Insira a área da cidade (em km²): \n");
    scanf("%f", &area_C1);
    printf("Insira o PIB da cidade: \n");
    scanf("%f", &pib_C1);
    printf("Insira o número de pontos turísticos da cidade: \n");
    scanf("%d", &p_turistico_C1);


    // Saída de dados
    // Imprimindo as informações cadastradas para C1


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
