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
    float super_poder1 = (double)populacao1 + (double)area1 + (pib1 * 1000000000.0) + (double)pontos1 + (double)densidade1 + (1.0f / (double)densidade1);
    float super_poder2 = (double)populacao2 + (double)area2 + (pib2 * 1000000000.0) + (double)pontos2 + (double)densidade2 + (1.0f / (double)densidade2);

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
    printf("PIB per Capta: %.2f\n", percapta2); //mostrando pib per capta
    printf("Super poder: %.2f\n", super_poder2); //mostrando super porder

    //exibindo menu de escolha para o jogador
    int escolha1, escolha2; //variável para faclitar a comparação no switch
    int resultado1, resultado2; //atribuindo variável para exibir resultados

    printf("\n###COMPARANDO ATRIBUTOS###\n");
    printf("Esoclha a primeira opção:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB Per Capta\n");
    printf("7. Super Poder\n");
    scanf("%d", &escolha1);

    switch (escolha1)
    {
    case 1:
        printf("Você escolheu População!\n");
        resultado1 = populacao1 > populacao2 ? 1 : 0;  
        break;

    case 2:
        printf("Voçê escolheu Área!\n");
        resultado1 = area1 > area2 ? 1: 0;
        break;    

    case 3:
        printf("Você escolheu PIB!\n");
        resultado1 = pib1 > pib2 ? 1 : 0;
        break;          

    case 4:
        printf("Você escolheu Pontos Turísticos!\n");
        resultado1 = pontos1 > pontos2 ? 1 : 0;
        break;

    case 5: //invertendo a lógica para o menor ser o ganhador
        printf("Você escolheu Densidade Populacional!\n");
        resultado1 = densidade1 < densidade2 ? 1 : 0;
        break;
        
    case 6:
        printf("Você escolheu PIB Per Capta!\n");
        resultado1 = percapta1 > percapta2 ? 1 : 0;
        break; 

    case 7:
        printf("Você escolheu Super Poder!\n");
        resultado1 = super_poder1 > super_poder2 ? 1 : 0;
        break; 
        
        
    default:
        printf("Entada Inálida!\n");
        break;
    }

    printf("\n###COMPARANDO ATRIBUTOS###\n");
    printf("Escolha um atributo *DIFERENTE* do primeiro ou o jogo será encerrado!\n");
    printf("Ecolha a segunda opção:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB Per Capta\n");
    printf("7. Super Poder\n");
    scanf("%d", &escolha2);

    if (escolha1 == escolha2){
        printf("Voçe escolheu o mesmo atributo!\n");
    } else {
        switch (escolha2)
    {
    case 1:
        printf("Você escolheu População!\n");
        resultado2 = populacao2 > populacao1 ? 1 : 0;  
    break;

    case 2:
        printf("Voçê escolheu Área!\n");
        resultado2 = area2 > area1 ? 1: 0;
    break;    

    case 3:
        printf("Você escolheu PIB!\n");
        resultado2 = pib2 > pib1 ? 1 : 0;
    break;          

    case 4:
        printf("Você escolheu Pontos Turísticos!\n");
        resultado2 = pontos2 > pontos1 ? 1 : 0;
    break;

    case 5: //invertendo a lógica para o menor ser o ganhador
        printf("Você escolheu Densidade Populacional!\n");
        resultado2 = densidade2 < densidade1 ? 1 : 0;
    break;
        
    case 6:
        printf("Você escolheu PIB Per Capta!\n");
        resultado2 = percapta2 > percapta1 ? 1 : 0;
    break; 

    case 7:
        printf("Você escolheu Super Poder!\n");
        resultado2 = super_poder2 > super_poder1 ? 1 : 0;
    break; 

        default:
        printf("Entada Inálida!\n");
    break;
    }
    
    //mostrando resultado
    printf("\nRESULTADO\n");
    if (resultado1 && !resultado2){
        printf("Carta 1 Venceu!\n");
    }else if (!resultado1 && resultado2){
        printf("Carta 2 Venceu\n");
    }else {
        printf("EMPATE!\n");
    }
        
        
    }
    return 0;
}
    

