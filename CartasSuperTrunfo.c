#include <stdio.h> // inclusão da biblioteca

int main()
{ // funçao principal do codigo

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

    printf("______________BEM VINDO AO JOGO CARTAS SUPER TRUNFO________________\n\n");
    // Entrada de dados da Carta 1
    printf("Digite o nome de um estado: ");
    scanf("%s", estado1);

    printf("Digite a sigla desse estado: ");
    scanf("%s", codigo1);

    printf("Digite o nome de uma cidade desse estado: ");
    scanf("%s", cidade1);

    printf("Digite o número da população dessa cidade: ");
    scanf("%d", &populacao1);

    printf("Digite o tamanho da área dessa cidade em km²: ");
    scanf("%f", &area1);

    printf("Digite o valor aproximado do PIB dessa cidade em BILHÕES de reais: ");
    scanf("%f", &PIB1);

    printf("Digite quantos pontos turisticos tem nessa cidade: ");
    scanf("%d", &pt_turistico1);

    // Função para calcular a densidade populacional e o PIB per capita da Carta 1
    dens_populacional1 = (float) populacao1 / area1;
    PIBpercapita1 = (PIB1 * 1000000000) / populacao1;

    printf("\n"); // printf para pular uma linha

    // Entrada de dados da Carta 2
    printf("Digite o nome de outro estado: ");
    scanf("%s", estado2);

    printf("Digite a sigla desse estado: ");
    scanf("%s", codigo2);

    printf("Digite o nome de uma cidade desse estado: ");
    scanf("%s", cidade2);

    printf("Digite o número da população dessa cidade: ");
    scanf("%d", &populacao2);

    printf("Digite o tamanho da área dessa cidade em km²: ");
    scanf("%f", &area2);

    printf("Digite o valor aproximado do PIB dessa cidade em BILHÕES de reais: ");
    scanf("%f", &PIB2);

    printf("Digite quantos pontos turisticos tem nessa cidade: ");
    scanf("%d", &pt_turistico2);

    // Função para calcular a densidade populacional e o PIB per capita da Carta 2
    dens_populacional2 = (float) populacao2 / area2;
    PIBpercapita2 = (PIB2 * 1000000000) / populacao2;

    // Função para calcular Super Poder com pesos das duas cartas (usando operadores aritimeticos)
    SuperPoder1 = populacao1 + area1 + PIB1 + pt_turistico1 + PIBpercapita1 + dens_populacional1;
    SuperPoder2 = populacao2 + area2 + PIB2 + pt_turistico2 + PIBpercapita2 + dens_populacional2;

    printf("\n"); // printf para pular uma linha
    printf("______________ESSAS SÃO AS CARTAS DO JOGO________________\n\n");
    // Impressão dados da Carta 1
    printf("__CARTA 01__\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f BILHÕES de reais\n", PIB1);
    printf("Quantidade de Pontos  turisticos: %d\n", pt_turistico1);
    printf("Densidade Populacional: %.2f hab/km²\n", dens_populacional1);
    printf("PIB per Capita: R$ %.2f\n", PIBpercapita1);
    printf("Super Poder: %.2f\n\n", SuperPoder1);

    // Impressão dados da Carta 2
    printf("__CARTA 02__\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f BILHÕES de reais\n", PIB2);
    printf("Quantidade de Pontos  turisticos: %d\n", pt_turistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", dens_populacional2);
    printf("PIB per Capita: R$ %.2f\n", PIBpercapita2);
    printf("Super Poder: %.2f\n\n", SuperPoder2);
    
    int opcao;
    
    printf("## COMPARAÇÃO DAS CARTAS ##\n\n");
    printf("  ____MENU PRINCIPAL____\n");
    printf("  1. Nome do estado.\n");
    printf("  2. Código da carta.\n");
    printf("  3. Nome da cidade.\n");
    printf("  4. Número da população.\n");
    printf("  5. Tamanho da área.\n");
    printf("  6. PIB da cidade.\n");
    printf("  7. Quantidade de pontos turisticos.\n");
    printf("  8. Densidade populacional.\n");
    printf("  9. PIB per capita.\n");
    printf("  10. Super poder.\n");
    printf("  11. Para sair do menu.\n\n");
    printf("Para comparar, escolha uma opção do menu principal: ");
    
    scanf("%d", &opcao);

     switch (opcao)
    {
    case 1:
        printf("Opção 1 => Nome do estado: \n");
        printf("Carta 1 %s / Carta 2 %s", estado1, estado2);
        break;
    case 2:
        printf("Opção 2 => Código da carta:\n");
        printf("Carta 1 %s / Carta 2 %s", codigo1, codigo2);
        break;
    case 3:
        printf("Opção 3 => Nome da cidade:\n");
        printf("Carta 1 %s / Carta 2 %s", cidade1, cidade2);
        break;
    case 4:
        printf("Opção 4 => Número da população:\n");
        if(populacao1 > populacao2){
            printf("Cidade %s com população de %d habitantes venceu!\n", cidade1, populacao1);
        }else if (populacao1 < populacao2){
            printf("Cidade %s com população de %d habitantes venceu!\n", cidade2, populacao2);
        }else{
            printf("Empate! Ambas as cidades têm um total %d habitantes.", populacao1);
        }
        break;
    case 5:
        printf("Opção 5 => Tamanho da área:\n");
        if(area1 > area2){
            printf("Cidade %s com área de %.2f km² venceu!\n", cidade1, area1);
        }else if (area1 < area2){
            printf("Cidade %s com área de %.2f km² venceu!\n", cidade2, area2);
        }else{
            printf("Empate! Ambas as cidades têm um tamanho de %.2f km².", area1);
        }
        break;
    case 6:
        printf("Opção 6 => PIB da cidade:\n");
        if(PIB1 > PIB2){
            printf("Cidade %s com PIB de %.2f BILHÕES de reais venceu!\n", cidade1, PIB1);
        }else if (PIB1 < PIB2){
            printf("Cidade %s com PIB de %.2f BILHÕES de reais venceu!\n", cidade2, PIB2);
        }else{
            printf("Empate! Ambas as cidades têm o mesmo valor do PIB de %.2f BILHÕES de reais.", PIB1);
        }
        break;
    case 7:
        printf("Opção 7 => Quantidade de pontos turísticos:\n");
        if (pt_turistico1 > pt_turistico2){
            printf("Cidade %s com um total de %d pontos turísticos venceu!\n", cidade1, pt_turistico1);
        }else if(pt_turistico1 < pt_turistico2){
            printf("Cidade %s com um total de %d pontos turísticos venceu\n!", cidade2, pt_turistico2);
        }else{
            printf("Empate! Ambas as cidades têm o mesmo número de %d pontos turísticos.", pt_turistico1);
        }
        break;
    case 8:
        printf("Opção 8 => Densidade populacional:\n");
        if (dens_populacional1 < dens_populacional2){
            printf("Cidade %s com densidade populacional de %.2f hab/km² venceu!\n", cidade1, dens_populacional1);
        }else if (dens_populacional1 > dens_populacional2){
            printf("Cidade %s com densidade populacional de %.2f hab/km² venceu!\n", cidade2, dens_populacional2);                                                                                                             
        }else{
            printf("Empate! Ambas as cidades têm a mesma densidade geográfica. Total de %.2f hab/km² ", dens_populacional1);
        }
        break;                                                                                                                                                                                                                                                                                                                                                                                                                      break;
    case 9:
        printf("Opção 9 => PIB per capita:\n");
        if (PIBpercapita1 > PIBpercapita2){
            printf("Cidade %s com PIB per capita de R$ %.2f venceu!\n", cidade1, PIBpercapita1);
        }else if (PIBpercapita1 < PIBpercapita2){
            printf("Cidade %s com PIB per capita de R$ %.2f venceu!\n", cidade2, PIBpercapita2);
        }else{
            printf("Empate! Ambas as cidades tem o mesmo PIB per capita de R$ %.2f",PIBpercapita1);
        }
        break;
    case 10:
        printf("Opção 10 => Super poder:\n");
        if(SuperPoder1 > SuperPoder2){
            printf("Cidade %s com Super poder de %.2f venceu!\n", cidade1, SuperPoder1);
        }else if(SuperPoder1 < SuperPoder2){
            printf("Cidade %s com Super poder de %.2f venceu!\n", cidade2, SuperPoder2);
        }else{
            printf("Empate! Ambas as cidades têm o mesmo Super Poder de %.2f", SuperPoder1);
        }
        break;
        
    case 11:
        printf("Opção 11 => Para sair do menu.\n");
        printf("Obrigado por participar!");
        break;

    default:
        printf("Opção inválida. Tente novamente!\n\n");
        
    }
    return 0;
}
