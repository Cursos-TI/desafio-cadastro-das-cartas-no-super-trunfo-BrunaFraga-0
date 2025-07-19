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
    // Inclusão de 2 novas variáveis para os 2 novos atributos na C1 (Densidade Populacional e Pib per Capita)
        //Inclusão nova variável para novo atributo na C1 (Super Poder)
    char estado_C1, codigo_C1[10], cidade_C1[50];
    int p_turistico_C1;
    unsigned long int populacao_C1; // Modificação do tipo da variável (int -> unsigned long int)
    float area_C1, pib_C1, densidade_pop_C1, pib_percapita_C1, super_poder_C1; // Novas variáveis

// Entrada de dados C1
// Solicitando ao usuário que insira as informações para cadastro da C1
    printf("Insira o Estado (uma letra entre A e H - ex: A): \n");
    scanf("%c", &estado_C1);
    printf("Insira o código da carta (a letra do Estado + um número de 01 a 04 - Ex: A01): \n");
    scanf("%s", &codigo_C1);
    printf("Insira o nome da cidade: \n");
    scanf("%s", &cidade_C1);
    printf("Insira a população da cidade: \n");
    scanf("%lu", &populacao_C1); // Ajuste especificador de int (%d) para unsigned long int (%lu)
    printf("Insira a área da cidade (em km²): \n");
    scanf("%f", &area_C1);
    printf("Insira o PIB da cidade: \n");
    scanf("%f", &pib_C1);
    printf("Insira o número de pontos turísticos da cidade: \n");
    scanf("%d", &p_turistico_C1);
    printf("--------------------\n");

    // Operações para atribuir os valores das novas variáveis da C1 (densidade_pop_C1 e pib_percapita_C1)
    /* As informações necessárias para calcular a densidade populacional e o pib per capita já foram inseridas
    pelo usuário na entrada de dados C1*/
    densidade_pop_C1 = (float)populacao_C1 / area_C1; //densidade populacional = população da cidade / área da cidade
    pib_percapita_C1 = pib_C1 / (float)populacao_C1; //pib per capita = pib da cidade / população da cidade  

// Saída de dados C1
// Imprimindo as informações cadastradas para C1
    printf("Carta 1\n\n");
    printf("Estado: %c\n", estado_C1);
    printf("Códido: %s\n", codigo_C1);
    printf("Nome da cidade: %s\n", cidade_C1);
    printf("População: %lu habitantes\n", populacao_C1); // Ajuste especificador de int (%d) para unsigned long int (%lu)
    printf("Área: %.3f km²\n", area_C1);
    printf("PIB: %.2f bilhões de reais\n", pib_C1 / 1000000000); // Ajuste saída para aparecer 'bilhões de reais'. Mas e se o usuário cadastrar uma cidade que tenha trilhões de reais em PIB ou millhões...?
    printf("Número de pontos turísticos: %d\n", p_turistico_C1);
    //Incluindo a impressão das 2 novas propriedades da C1 (Densidade Populacional e Pib per Capita)
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop_C1);
    printf("PIB per Capita: R$ %.2f\n", pib_percapita_C1);
    printf("---------------------------------\n");
    printf("---------------------------------\n");

//Cadastramento Carta 2 (C2)
    printf("Carta 2\n");
    printf("--------------------\n");

// Declarando as variáveis para a C2
    // Inclusão de 2 novas variáveis para os 2 novos atributos na C2 (Densidade Populacional e Pib per Capita)
        //Inclusão nova variável para novo atributo na C2 (Super Poder)
    char estado_C2, codigo_C2[10], cidade_C2[50];
    int p_turistico_C2;
    unsigned long int populacao_C2; // Modificação do tipo da variável (int -> unsigned long int)
    float area_C2, pib_C2, densidade_pop_C2, pib_percapita_C2, super_poder_C2; // Novas variáveis

// Entrada de dados C2
// Solicitando ao usuário que insira as informações para cadastro da C2
    printf("Insira o Estado (uma letra entre A e H): \n");
    scanf(" %c", &estado_C2); //O espaço antes de % é porque o programa está lendo diretamente a próxima linha. Foi a forma que encontrei de resolver, pequisando na internet.
    printf("Insira o código da carta (a letra do Estado + um número de 01 a 04): \n");
    scanf("%s", &codigo_C2);
    printf("Insira o nome da cidade: \n");
    scanf("%s", &cidade_C2);
    printf("Insira a população da cidade: \n");
    scanf("%lu", &populacao_C2); // Ajuste especificador de int (%d) para unsigned long int (%lu)
    printf("Insira a área da cidade (em km²): \n");
    scanf("%f", &area_C2);
    printf("Insira o PIB da cidade: \n");
    scanf("%f", &pib_C2);
    printf("Insira o número de pontos turísticos da cidade: \n");
    scanf("%d", &p_turistico_C2);
    printf("--------------------\n");

    // Operações para atribuir os valores das novas variáveis da C2 (densidade_pop_C2 e pib_percapita_C2)
    /* As informações necessárias para calcular a densidade populacional e o pib per capita já foram inseridas
    pelo usuário na entrada de dados C2*/
    densidade_pop_C2 = (float)populacao_C2 / area_C2; //densidade populacional = população da cidade / área da cidade
    pib_percapita_C2 = pib_C2/ (float)populacao_C2; //pib per capita = pib da cidade / população da cidade

// Saída de dados C2
// Imprimindo as informações cadastradas para C2
    printf("Carta 2\n\n");
    printf("Estado: %c\n", estado_C2);
    printf("Códido: %s\n", codigo_C2);
    printf("Nome da cidade: %s\n", cidade_C2);
    printf("População: %lu habitantes\n", populacao_C2); // Ajuste especificador de int (%d) para unsigned long int (%lu)
    printf("Área: %.3f km²\n", area_C2);
    printf("PIB: %.2f bilhões de reais\n", pib_C2 / 1000000000); // Ajuste saída para aparecer 'bilhões de reais'. Mas e se o usuário cadastrar uma cidade que tenha trilhões de reais em PIB ou millhões...?
    printf("Número de pontos turísticos: %d\n", p_turistico_C2);
    //Incluindo a impressão das 2 novas propriedades da C2 (Densidade Populacional e Pib per Capita)
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop_C2);
    printf("PIB per Capita: R$ %.2f\n", pib_percapita_C2);
    printf("--------------------------------");
    
    return 0;
}
