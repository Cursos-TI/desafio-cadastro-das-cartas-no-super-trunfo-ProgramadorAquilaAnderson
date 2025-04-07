#include <stdio.h> // inclusão da biblioteca

int main() { // funçao principal do codigo

    // decalrando as variáveis
    char estado1[20], estado2[20]; 
    char codigo1[20], codigo2[20];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2; 
    float area1, area2; 
    float PIB1, PIB2;
    int pt_turistico1, pt_turistico2;
    float dens_populacional1, dens_populacional2;
    float PIBpercapita1, PIBpercapita2;
    float SuperPoder1, SuperPoder2;

    // Entrada de dados da Carta 1
    printf("Digite o nome de um estado: ");
    scanf("%s", estado1); 
    
    printf("Digite a sigla desse estado: ");
    scanf("%s", codigo1);
    
    printf("Digite o nome de uma cidade desse estado: ");
    scanf("%s", cidade1);
    
    printf("Digite o numero da populacao dessa cidade: ");
    scanf("%d", &populacao1);
    
    printf("Digite o tamanho da area dessa cidade em km²: ");
    scanf("%f", &area1);
    
    printf("Digite o valor aproximado do PIB dessa cidade em BILHOES de reais: ");
    scanf("%f", &PIB1);
    
    printf("Digite quantos pontos turisticos tem nessa cidade: ");
    scanf("%d", &pt_turistico1);

    // Função para calcular a densidade populacional e o PIB per capita da Carta 1
    dens_populacional1 = populacao1 / area1;
    PIBpercapita1 = (PIB1 * 1000000000) / populacao1;

    printf("\n"); //printf para pular uma linha

    // Entrada de dados da Carta 2
    printf("Digite o nome de outro estado: "); 
    scanf("%s", estado2); 
    
    printf("Digite a sigla desse estado: ");
    scanf("%s", codigo2);
    
    printf("Digite o nome de uma cidade desse estado: ");
    scanf("%s", cidade2);
    
    printf("Digite o numero da populacao dessa cidade: ");
    scanf("%d", &populacao2);
    
    printf("Digite o tamanho da area dessa cidade em km²: ");
    scanf("%f", &area2);
    
    printf("Digite o valor aproximado do PIB dessa cidade em BILHOES de reais: ");
    scanf("%f", &PIB2);
    
    printf("Digite quantos pontos turisticos tem nessa cidade: ");
    scanf("%d", &pt_turistico2);

    // Função para calcular a densidade populacional e o PIB per capita da Carta 2
    dens_populacional2 = populacao2 / area2;
    PIBpercapita2 = (PIB2 * 1000000000) / populacao2;

    // Função para calcular Super Poder com pesos das duas cartas (usando operadores aritimeticos)
    SuperPoder1 = populacao1 + area1 + PIB1 + pt_turistico1 + PIBpercapita1 + dens_populacional1;
    SuperPoder2 = populacao2 + area2 + PIB2 + pt_turistico2 + PIBpercapita2 + dens_populacional2;

    printf("\n"); //printf para pular uma linha

    // Impressão dados da Carta 1
    printf("__CARTA 01__\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f BILHOES de reais\n", PIB1); 
    printf("Quantidade de Pontos  turisticos: %d\n", pt_turistico1);
    printf("Densidade Populacional: %.2f hab/km²\n", dens_populacional1);
    printf("PIB per Capita: R$ %.2f\n", PIBpercapita1);
    printf("Super Poder: %.2f\n\n", SuperPoder1);

    // Impressão dados da Carta 2
    printf("__CARTA 02__\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f BILHOES de reais\n", PIB2);
    printf("Quantidade de Pontos  turisticos: %d\n", pt_turistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", dens_populacional2);
    printf("PIB per Capita: R$ %.2f\n", PIBpercapita2);
    printf("Super Poder: %.2f\n\n", SuperPoder2);

    //Comparando as cartas
    printf("**COMPARACAO DAS CARTAS**\n\n");

    //Comparando População - maior vence!
    printf("_Atributo: Populacao_\n\n");
    printf("Carta 1 - %s (%s): %d\n", cidade1, codigo1, populacao1);
    printf("Carta 2 - %s (%s): %d\n", cidade2, codigo2, populacao2);

    if (populacao1 > populacao2){  
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);

    }else{ 
        printf("Resultado: Carta 2 (%s) venceu!\n\n", cidade2);
    }
    //Comparando Area - maior vence!
    printf("_Atributo: Area_\n\n");
    printf("Carta 1 - %s (%s): %.2f km²\n", cidade1, codigo1, area1);
    printf("Carta 2 - %s (%s): %.2f km²\n", cidade2, codigo2, area2);
    
    if ( area1 > area2 ){ 
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);

    }else{
        printf("Resultado: Carta 2 (%s) venceu!\n\n", cidade2);
    }
    //Comparando PIB - maior vence!
    printf("_Atributo: PIB_:\n\n");
    printf("Carta 1 - %s (%s): %.2f BILHOES de reais\n", cidade1, codigo1, PIB1);
    printf("Carta 2 - %s (%s): %.2f BILHOES de reais\n", cidade2, codigo2, PIB2);

    if ( PIB1 > PIB2 ){
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);

    }else{
        printf("Resultado: Carta 2 (%s) venceu!\n\n\n", cidade2);
    }
    //Comparando Ponto Turistico - maior vence!
    printf("_Atributo: Ponto Turistico_\n\n");
    printf("Carta 1 - %s (%s): %d\n", cidade1, codigo1, pt_turistico1);
    printf("Carta 2 - %s (%s): %d\n", cidade2, codigo2, pt_turistico2);

    if ( pt_turistico1 > pt_turistico2 ){
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);

    }else{
        printf("Resultado: Carta 2 (%s) venceu!\n\n", cidade2);
    }
    //comparando Densidade Populacional - menor vence!
    printf("_Atributo: Densidade Populacional_\n\n");
    printf("Carta 1 - %s (%s):  %.2f hab/km²\n", cidade1, codigo1, dens_populacional1);
    printf("Carta 2 - %s (%s):  %.2f hab/km²\n", cidade2, codigo2, dens_populacional2);

    if ( dens_populacional1 < dens_populacional2 ){
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);

    }else{
        printf("Resultado: Carta 2 (%s) venceu!\n\n", cidade2);
    }
    //comparando o PIB per capita -  maior vence!
    printf("_Atributo: PIB per Capita_\n\n");
    printf("Carta 1 - %s (%s): R$ %.2f\n", cidade1, codigo1, PIBpercapita1);
    printf("Carta 2 - %s (%s): R$ %.2f\n", cidade2, codigo2, PIBpercapita2);
  
    if ( PIBpercapita1 > PIBpercapita2 ){
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
  
    }else{
        printf("Resultado: Carta 2 (%s) venceu!\n\n", cidade2);
    }
    //comparando o Super Poder - maior vence!
    printf("_Atributo: Super Poder_\n\n");
    printf("Carta 1 - %s (%s): %.2f\n", cidade1, codigo1, SuperPoder1);
    printf("Carta 2 - %s (%s): %.2f\n", cidade2, codigo2, SuperPoder2);
  
    if ( SuperPoder1 > SuperPoder2 ){
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
  
    }else{
        printf("Resultado: Carta 2 (%s) venceu!\n\n", cidade2);
    }

    printf("\n");

    return 0; 
}