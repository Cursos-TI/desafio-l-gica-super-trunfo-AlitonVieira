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
    printf("PIB per Capta: %.2f\n", percapta2); //mostrando pib per capta
    printf("Super poder: %.2f\n", super_poder2); //mostrando super porder

    //exibindo menu de escolha para o jogador
    int escolha; //variável para faclitar a comparação no switch

    printf("\n###COMPARANDO ATRIBUTOS###\n");
    printf("Esoclha uma opção:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB Per Capta\n");
    printf("7. Super Poder\n");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        if (populacao1 > populacao2){
            printf("População de %s é: %lu\n", cidade1, populacao1);
            printf("População de %s é: %lu\n", cidade2, populacao2);
            printf("##CARTA 1 VENCEU!!##\n");
        }else if (populacao1 < populacao2){
            printf("População de %s é: %lu\n", cidade1, populacao1);
            printf("População de %s é: %lu\n", cidade2, populacao2);
            printf("##CARTA 2 VENCEU!!\n");
        }else if (populacao1 == populacao2){
            printf("População de %s é: %lu\n", cidade1, populacao1);
            printf("População de %s é: %lu\n", cidade2, populacao2);
            printf("##EMPATE##\n");
        }    
        break;

    case 2:
        if (area1 > area2){
            printf("Área de %s é: %.2f\n", cidade1, area2);
            printf("Área de %s é: %.2f\n", cidade2, area2);
            printf("##CARTA 1 VENCEU!!##\n");
        }else if (area1 < area2){
            printf("Área de %s é: %.2f\n", cidade1, area2);
            printf("Área de %s é: %.2f\n", cidade2, area2);
            printf("##CARTA 2 VENCEU!!\n");
        }else if (area1 == area2){
            printf("Área de %s é: %.2f\n", cidade1, area2);
            printf("Área de %s é: %.2f\n", cidade2, area2);
            printf("##EMPATE##\n");
        }    
        break;    

    case 3:
        if (pib1 > pib2){
            printf("PIB de %s é: %.2f\n", cidade1, pib1);
            printf("PIB de %s é: %.2f\n", cidade2, pib2);
            printf("##CARTA 1 VENCEU!!##\n");
        }else if (pib1 < pib2){
            printf("PIB de %s é: %.2f\n", cidade1, pib1);
            printf("PIB de %s é: %.2f\n", cidade2, pib2);
            printf("##CARTA 2 VENCEU!!\n");
        }else if (pib1 == pib2){
            printf("População de %s é: %.2f\n", cidade1, pib1);
            printf("População de %s é: %.2f\n", cidade2, pib2);
            printf("##EMPATE##\n");
        }    
        break;          

    case 4:
        if (pontos1 > pontos2){
            printf("A quantia de pontos turísticos de %s é: %d\n", cidade1, pontos1);
            printf("A quantia de pontos turísticos de %s é: %d\n", cidade2, pontos2);
            printf("##CARTA 1 VENCEU!!##\n");
        }else if (pontos1 < pontos2){
            printf("A quantia de pontos turísticos de %s é: %d\n", cidade1, pontos1);
            printf("A quantia de pontos turísticos de %s é: %d\n", cidade2, pontos2);
            printf("##CARTA 2 VENCEU!!\n");
        }else if (pontos1 == pontos2){
            printf("A quantia de pontos turísticos de %s é: %d\n", cidade1, pontos1);
            printf("A quantia de pontos turísticos de %s é: %d\n", cidade2, pontos2);
            printf("##EMPATE##\n");
        }    
        break;

    case 5: //invertendo a lógica para o menor ser o ganhador
        if (densidade1 < densidade2){
            printf("A desidade demográfica de %s é: %.2f\n", cidade1, densidade1);
            printf("A desidade demográfica de %s é: %.2f\n", cidade2, densidade2);
            printf("##CARTA 1 VENCEU!!##\n");
        }else if (densidade1 > densidade2){
            printf("A desidade demográfica de %s é: %.2f\n", cidade1, densidade1);
            printf("A desidade demográfica de %s é: %.2f\n", cidade2, densidade2);
            printf("##CARTA 2 VENCEU!!\n");
        }else if (densidade1 == densidade2){
            printf("A desidade demográfica de %s é: %.2f\n", cidade1, densidade1);
            printf("A desidade demográfica de %s é: %.2f\n", cidade2, densidade2);
            printf("##EMPATE##\n");
        }    
        break;       
        
    case 6:
        if (percapta1 > percapta2){
            printf("O Pib PerCapta de %s é: %.2f\n", cidade1, percapta1);
            printf("O Pib PerCapta de %s é: %.2f\n", cidade2, percapta2);
            printf("##CARTA 1 VENCEU!!##\n");
        }else if (percapta1 < percapta2){
            printf("O Pib PerCapta de %s é: %.2f\n", cidade1, percapta1);
            printf("O Pib PerCapta de %s é: %.2f\n", cidade2, percapta2);
            printf("##CARTA 2 VENCEU!!\n");
        }else if (percapta1 == percapta2){
            printf("O Pib PerCapta de %s é: %.2f\n", cidade1, percapta1);
            printf("O Pib PerCapta de %s é: %.2f\n", cidade2, percapta2);
            printf("##EMPATE##\n");
        }    
        break; 

    case 7:
        if (super_poder1 > super_poder2){
            printf("Super poder de %s é: %.2f\n", cidade1, super_poder1);
            printf("Super poder de %s é: %.2f\n", cidade2, super_poder2);
            printf("##CARTA 1 VENCEU!!##\n");
        }else if (super_poder1 < super_poder2){
            printf("Super poder de %s é: %.2f\n", cidade1, super_poder1);
            printf("Super poder de %s é: %.2f\n", cidade2, super_poder2);
            printf("##CARTA 2 VENCEU!!\n");
        }else if (super_poder1 == super_poder2){
            printf("Super poder de %s é: %.2f\n", cidade1, super_poder1);
            printf("Super poder de %s é: %.2f\n", cidade2, super_poder2);
            printf("##EMPATE##\n");
        }    
        break; 
        
        
    default:
        printf("Entada Inálida!\n");
        break;
    }

    return 0;
}
