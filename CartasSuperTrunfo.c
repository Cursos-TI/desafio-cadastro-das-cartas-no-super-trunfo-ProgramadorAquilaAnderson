#include <stdio.h> // inclusão da biblioteca

int main() { // funçao principal do código

    // decalrando as variáveis
    char estado1[20], estado2[20]; 
    char cod_estado1[20], cod_estado2[20];
    char cidade1[20], cidade2[20];
    unsigned long int populacao1, populacao2; 
    float area1, area2; 
    float PIB1, PIB2;
    int pt_turistico1, pt_turistico2;
    float dens_populacional1, dens_populacional2;
    float PIBpercapita1, PIBpercapita2;
    float SuperPoder1, SuperPoder2;

    // Entrada de dados da Carta 1
    printf("Digite o nome de um estado: ");
    scanf("%s", estado1); 
    
    printf("Digite a sigla desse estado. Ela será o código: ");
    scanf("%s", cod_estado1);
    
    printf("Digite o nome de uma cidade desse estado: ");
    scanf("%s", cidade1);
    
    printf("Digite o número da população dessa cidade: ");
    scanf("%lu", &populacao1);
    
    printf("Digite o tamanho da área dessa cidade em km²: ");
    scanf("%f", &area1);
    
    printf("Digite o valor aproximado do PIB dessa cidade em BILHÕES de reais: ");
    scanf("%f", &PIB1);
    
    printf("Digite quantos pontos turísticos tem nessa cidade: ");
    scanf("%d", &pt_turistico1);

    // Função para calcular a densidade populacional e o PIB per capita da Carta 1
    dens_populacional1 = populacao1 / area1;
    PIBpercapita1 = (PIB1 * 1000000000) / populacao1;

    // Entrada de dados da Carta 2
    printf("\nDigite o nome de outro estado: "); 
    scanf("%s", estado2); 
    
    printf("Digite a sigla desse estado. Ela será o código: ");
    scanf("%s", cod_estado2);
    
    printf("Digite o nome de uma cidade desse estado: ");
    scanf("%s", cidade2);
    
    printf("Digite o número da população dessa cidade: ");
    scanf("%lu", &populacao2);
    
    printf("Digite o tamanho da área dessa cidade em km²: ");
    scanf("%f", &area2);
    
    printf("Digite o valor aproximado do PIB dessa cidade em BILHÕES de reais: ");
    scanf("%f", &PIB2);
    
    printf("Digite quantos pontos turísticos tem nessa cidade: ");
    scanf("%d", &pt_turistico2);

    // Função para calcular a densidade populacional e o PIB per capita da Carta 2
    dens_populacional2 = populacao2 / area2;
    PIBpercapita2 = (PIB2 * 1000000000) / populacao2;

    // Função para calcular Super Poder com pesos da carta 1 (usando operadores aritimeticos)
    SuperPoder1 = (populacao1 / 1000000.0) + (area1 / 10000.0) + PIB1 + 
    (pt_turistico1 * 2) + (PIBpercapita1 / 1000.0) + (dens_populacional1 / 10.0);

    // Função para calcular Super Poder com pesos da carta 2 (usando aritimeticos)
    SuperPoder2 = (populacao2 / 1000000.0) + (area2 / 10000.0) + PIB2 + 
    (pt_turistico2 * 2) + (PIBpercapita2 / 1000.0) + (dens_populacional2 / 10.0);

    // Impressão dados da Carta 1
    printf("\n***CARTA 01***\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", cod_estado1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1); 
    printf("Quantidade de Pontos Turísticos: %d\n", pt_turistico1);
    printf("Densidade Populacional: %.2f hab/km²\n", dens_populacional1);
    printf("PIB per Capita: R$ %.2f\n", PIBpercapita1);
    printf("Super Poder: %.2f\n", SuperPoder1);

    // Impressão dados da Carta 2
    printf("\n***CARTA 02***\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", cod_estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Quantidade de Pontos Turísticos: %d\n", pt_turistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", dens_populacional2);
    printf("PIB per Capita: R$ %.2f\n", PIBpercapita2);
    printf("Super Poder: %.2f\n", SuperPoder2);

    // Comparação das cartas com explicação usando operadores tenários
    printf("\nCOMPARAÇÃO DAS CARTAS:\n");
    printf("População: %s (%d)\n", (populacao1 > populacao2 ? "Carta 1 venceu" : "Carta 2 venceu"), populacao1 > populacao2);
    printf("Área: %s (%d)\n", (area1 > area2 ? "Carta 1 venceu" : "Carta 2 venceu"), area1 > area2);
    printf("PIB: %s (%d)\n", (PIB1 > PIB2 ? "Carta 1 venceu" : "Carta 2 venceu"), PIB1 > PIB2);
    printf("Pontos Turísticos: %s (%d)\n", (pt_turistico1 > pt_turistico2 ? "Carta 1 venceu" : "Carta 2 venceu"), pt_turistico1 > pt_turistico2);
    printf("Densidade Populacional: %s (%d)\n", (dens_populacional1 > dens_populacional2 ? "Carta 1 venceu" : "Carta 2 venceu"), dens_populacional1 > dens_populacional2);
    printf("PIB per Capita: %s (%d)\n", (PIBpercapita1 > PIBpercapita2 ? "Carta 1 venceu" : "Carta 2 venceu"), PIBpercapita1 > PIBpercapita2);
    printf("Super Poder: %s (%d)\n", (SuperPoder1 > SuperPoder2 ? "Carta 1 venceu" : "Carta 2 venceu"), SuperPoder1 > SuperPoder2);

    return 0;
}