#include <stdio.h>

int main() {
    printf("--------------------------------------------------------------\n");
    printf("                    DESAFIO SUPER TRUNFO                      \n");
    printf("--------------------------------------------------------------\n");
    printf("--------------------------------------------------------------\n");
    printf("*****                CADASTRO DAS CARTAS                 *****\n");
    printf("--------------------------------------------------------------\n");
    
//Cadastramento Carta 1 (C1)
    printf("CARTA 1\n\n");

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
    printf("--------------------------------------------------------------\n");
    printf("--------------------------------------------------------------\n");

    // Operações para atribuir os valores das novas variáveis da C1 (densidade_pop_C1 e pib_percapita_C1)
    /* As informações necessárias para calcular a densidade populacional e o pib per capita já foram inseridas
    pelo usuário na entrada de dados C1*/
    densidade_pop_C1 = (float)populacao_C1 / area_C1; //densidade populacional = população da cidade / área da cidade
    pib_percapita_C1 = pib_C1 / (float)populacao_C1; //pib per capita = pib da cidade / população da cidade  

        //Operação para atribuir o valor do novo atributo Super Poder da C1
        //Super_poder_C1 = (float)populacao + area + pib + (float)p_turisticos + pib_percapita + (1 / densidade_pop)
    super_poder_C1 = (float)populacao_C1 + area_C1 + pib_C1 + pib_percapita_C1 + (float)p_turistico_C1 + (1 / densidade_pop_C1);

// Saída de dados C1
// Imprimindo as informações cadastradas para C1
    printf("CARTA 1\n");
    printf("-------\n\n");
    printf("Estado: %c\n", estado_C1);
    printf("Códido: %s\n", codigo_C1);
    printf("Nome da cidade: %s\n", cidade_C1);
    printf("População: %lu habitantes\n", populacao_C1); // Ajuste especificador de int (%d) para unsigned long int (%lu)
    printf("Área: %.3f km²\n", area_C1);
    printf("PIB: %.2f bilhões de reais\n", pib_C1 / 1000000000); // Ajuste saída para aparecer 'bilhões de reais'. Mas e se o usuário cadastrar uma cidade que tenha trilhões de reais em PIB ou millhões...?
    printf("Número de pontos turísticos: %d\n", p_turistico_C1);
    //Inclusão da impressão das 2 novas propriedades da C1 (Densidade Populacional e Pib per Capita)
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop_C1);
    printf("PIB per Capita: R$ %.2f\n", pib_percapita_C1);
        //Inclusão da impressão da nova variável da C1 (Super Poder)
    printf("Super Poder: %.2f\n", super_poder_C1);
    printf("--------------------------------------------------------------\n");
    printf("--------------------------------------------------------------\n");

//Cadastramento Carta 2 (C2)
    printf("CARTA 2\n\n");

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
    printf("--------------------------------------------------------------\n");
    printf("--------------------------------------------------------------\n");

    // Operações para atribuir os valores das novas variáveis da C2 (densidade_pop_C2 e pib_percapita_C2)
    /* As informações necessárias para calcular a densidade populacional e o pib per capita já foram inseridas
    pelo usuário na entrada de dados C2*/
    densidade_pop_C2 = (float)populacao_C2 / area_C2; //densidade populacional = população da cidade / área da cidade
    pib_percapita_C2 = pib_C2/ (float)populacao_C2; //pib per capita = pib da cidade / população da cidade

        //Operação para atribuir o valor do novo atributo Super Poder da C2
        //Super_poder_C2 = (float)populacao + area + pib + (float)p_turisticos + pib_percapita + (1 / densidade_pop)
    super_poder_C2 = (float)populacao_C2 + area_C2 + pib_C2 + pib_percapita_C2 + (float)p_turistico_C2 + (1 / densidade_pop_C2);

// Saída de dados C2
// Imprimindo as informações cadastradas para C2
    printf("CARTA 2\n");
    printf("-------\n\n");
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
        //Inclusão da impressão da nova variável da C2 (Super Poder)
    printf("Super Poder: %.2f\n", super_poder_C2); 
    printf("--------------------------------------------------------------\n");
    printf("--------------------------------------------------------------\n");


    //Comparação atributo por atributo da C1 e C2
        //Definição de variáveis para obter o resultado (res) em booleano (1=Verdadeiro / 0=Falso) da comparação de cada atributo
    int res_populacao, res_area, res_pib, res_p_turistico, res_densidade_pop, res_pib_percapita, res_super_poder;

        //Comparação entre os atributos das cartas C1 e C2 (res = 1 -> lógica verdadeira / res = 0 -> lógica falsa)
    res_populacao = populacao_C1 > populacao_C2;
    printf("%d\n", res_populacao);
    res_area = area_C1 > area_C2;
    printf("%d\n", res_area);
    res_pib = pib_C1 > pib_C2;
    printf("%d\n", res_pib);
    res_p_turistico = p_turistico_C1 > p_turistico_C2;
    printf("%d\n", res_p_turistico);
    res_densidade_pop = densidade_pop_C1 < densidade_pop_C2;
    printf("%d\n", res_densidade_pop);
    res_pib_percapita = pib_percapita_C1 > pib_percapita_C2;
    printf("%d\n", res_pib_percapita);
    res_super_poder = super_poder_C1 > super_poder_C2;
    printf("%d\n", res_super_poder);
    printf("--------------------------------------------------------------\n");
    printf("--------------------------------------------------------------\n");

        //Saída de dados
        //Impressão da comparação emtre os atributos da C1 e C2
    printf("*****   COMPARAÇÃO ENTRE OS ATRIBUTOS DAS CARTAS 1 E 2   *****\n");
    printf("--------------------------------------------------------------\n");
    printf("POPULAÇÃO -> Carta 1 venceu(%d)\n", res_populacao);
    printf("ÁREA -> Carta 1 venceu(%d)\n", res_area);
    printf("PIB -> Carta 1 venceu(%d)\n", res_pib);
    printf("PONTOS TURÍSTICOS -> Carta 1 venceu(%d)\n", res_p_turistico);
    printf("DENSIDADE POPULACIONAL -> Carta 2 venceu(%d)\n", res_densidade_pop);
    printf("PIB PER CAPITA -> Carta 1 venceu(%d)\n", res_pib_percapita);
    printf("SUPER PODER -> Carta 1 venceu(%d)\n", res_super_poder);
    printf("--------------------------------------------------------------\n");
    printf("--------------------------------------------------------------\n");

    return 0;
}
