#include <stdio.h>

int main() {
    //definindo variaveis
    char estado1[10], estado2[10];
    char codigo1[10], codigo2[10];
    char cidade1[20], cidade2[20]; 
    unsigned long int populacao1, populacao2; //alterado tipo de variável para ler numeros inteiros maiores
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2; //referente aos pontos turisticos de cada carta



    //entrada de dados da carta 1
    printf("Cadastro da carta 1: \n");
    printf("Infome o código da carta: ");
    scanf("%s", codigo1);

    printf("Informe a sigla do Estado: \n");
    scanf("%s", estado1);

    printf("Informe a Cidade: \n");
    scanf(" %19[^\n]", cidade1); //utilizado [^\n] para ler o nome da cidade todo usando 19 para não estourar o buffer

    printf("Informe a população: \n");
    scanf("%lu", &populacao1);

    printf("Informe a área em km²: \n");
    scanf("%f", &area1);

    printf("Informe o PIB em Bilhões: \n");
    scanf("%f", &pib1);

    printf("Informe a quantia de pontos turísticos: \n");
    scanf("%d", &pontos1);

    //entrada de dados da carta 2
    printf("Cadastro da carta 2: \n");
    printf("Infome o código da carta: ");
    scanf("%s", codigo2);

    printf("Informe a sigla do Estado: \n");
    scanf("%s", estado2);

    printf("Informe a Cidade: \n");
    scanf(" %19[^\n]", cidade2); //utilizado [^\n] para ler o nome da cidade todo usando 19 para não estourar o buffer

    printf("Informe a população: \n");
    scanf("%lu", &populacao2);

    printf("Informe a área em km²: \n");
    scanf("%f", &area2);

    printf("Informe o PIB em Bilhões: \n");
    scanf("%f", &pib2);

    printf("Informe a quantia de pontos turísticos: \n");
    scanf("%d", &pontos2);

    //variáveis de calculo para cada carta
    float densidade1 = (float)populacao1 / area1; //variavel para densidade populacional carta 1
    float densidade2 = (float)populacao2 / area2; //variavel para densidade populacional carta 2

    //variáveis para o pib per capta
    float percapta1 = (float)(pib1 * 1000000000.0f) / populacao1; //variavel para pib per capta carta 1
    float percapta2 = (float)(pib2 * 1000000000.0f) / populacao2; //variavel para pib per capta carta 2

    //declarando variáveis de super poder
    float super_poder1 = populacao1 + area1 + pib1 + pontos1 + densidade1 + (1.0f / densidade1);
    float super_poder2 = populacao2 + area2 + pib2 + pontos2 + densidade2 + (1.0f / densidade2);

        //Mostrando os dados das cartas cadastradas
    //Carta 1
    printf("\nCarta 1:\n");
    printf("Código: %s\n", codigo1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área Total em KM²: %.2f\n", area1);
    printf("PIB (em Bilhões): %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1); //mostrando densidade populacional
    printf("PIB per Capta: %.2f\n", percapta1); //mostrando PIB per Capta
    printf("Super poder: %.2f\n", super_poder1); //mostrando super poder

    //Carta 2
    printf("\nCarta 2:\n");
    printf("Código: %s\n", codigo2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área Total em KM²: %.2f\n", area2);
    printf("PIB (em Bilhões): %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2); //mostrando densidade populacional
    printf("PIB per Capta: %.2f\n", percapta2); //mostrando PIB per Capta

    //Iniciando comparações de atributos
    if (populacao1 > populacao2){
        printf("\nA cidade 1 tem maior população.\n");
        printf("Cidade 1 venceu!\n");
    } else{
        printf("\nA cidade 2 tem maior população.\n");
        printf("A cidade 2 venceu!\n");
    }


    return 0;
}
