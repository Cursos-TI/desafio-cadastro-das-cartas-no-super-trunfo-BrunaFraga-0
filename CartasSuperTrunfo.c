#include <stdio.h>

int main() {
    printf("-----------------------------------\n");
    printf("   Desafio Super Trunfo - Países   \n");
    printf("        Cadastro das Cartas        \n");
    printf("-----------------------------------\n");
    
    //Cadastramento Carta 1 (C1)
    printf("Carta 1\n");
    printf("--------------------\n");

    // Declarando as variáveis para a C1
    char estado_C1, codigo_C1[10], cidade_C1[50];
    int populacao_C1, p_turistico_C1;
    float area_C1, pib_C1; 

    // Entrada de dados C1
    // Solicitando ao usuário que insira as informações para cadastro da C1
    printf("Insira o Estado (uma letra entre A e H - ex: A): \n");
    scanf("%c", &estado_C1);
    printf("Insira o código da carta (a letra do Estado + um número de 01 a 04 - Ex: A01): \n");
    scanf("%s", &codigo_C1);
    printf("Insira o nome da cidade: \n");
    scanf("%s", &cidade_C1);
    printf("Insira a população da cidade: \n");
    scanf("%d", &populacao_C1);
    printf("Insira a área da cidade (em km²): \n");
    scanf("%f", &area_C1);
    printf("Insira o PIB da cidade: \n");
    scanf("%f", &pib_C1);
    printf("Insira o número de pontos turísticos da cidade: \n");
    scanf("%d", &p_turistico_C1);
    printf("--------------------\n");

    // Saída de dados C1
    // Imprimindo as informações cadastradas para C1
    printf("Carta 1\n\n");
    printf("Estado: %c\n", estado_C1);
    printf("Códido: %s\n", codigo_C1);
    printf("Nome da cidade: %s\n", cidade_C1);
    printf("População: %d habitantes\n", populacao_C1);
    printf("Área: %.3f km²\n", area_C1);
    printf("PIB: R$ %.2f\n", pib_C1);
    printf("Número de pontos turísticos: %d\n", p_turistico_C1);
    printf("---------------------------------\n");
    printf("---------------------------------\n");

    //Cadastramento Carta 2 (C2)
    printf("Carta 2\n");
    printf("--------------------\n");

    // Declarando as variáveis para a C2
    char estado_C2, codigo_C2[10], cidade_C2[50];
    int populacao_C2, p_turistico_C2;
    float area_C2, pib_C2; 

    // Entrada de dados C2
    // Solicitando ao usuário que insira as informações para cadastro da C2
    printf("Insira o Estado (uma letra entre A e H): \n");
    scanf(" %c", &estado_C2); //O espaço antes de % é porque o programa está lendo diretamente a próxima linha. Foi a forma que encontrei de resolver, pequisando na internet.
    printf("Insira o código da carta (a letra do Estado + um número de 01 a 04): \n");
    scanf("%s", &codigo_C2);
    printf("Insira o nome da cidade: \n");
    scanf("%s", &cidade_C2);
    printf("Insira a população da cidade: \n");
    scanf("%d", &populacao_C2);
    printf("Insira a área da cidade (em km²): \n");
    scanf("%f", &area_C2);
    printf("Insira o PIB da cidade: \n");
    scanf("%f", &pib_C2);
    printf("Insira o número de pontos turísticos da cidade: \n");
    scanf("%d", &p_turistico_C2);
    printf("--------------------\n");

    // Saída de dados C2
    // Imprimindo as informações cadastradas para C2
    printf("Carta 2\n\n");
    printf("Estado: %c\n", estado_C2);
    printf("Códido: %s\n", codigo_C2);
    printf("Nome da cidade: %s\n", cidade_C2);
    printf("População: %d habitantes\n", populacao_C2);
    printf("Área: %.3f km²\n", area_C2);
    printf("PIB: R$ %.2f\n", pib_C2);
    printf("Número de pontos turísticos: %d\n", p_turistico_C2);
    printf("--------------------------------");
    
    return 0;
}
