#include <stdio.h> // inclusão da biblioteca

int main(){ // função principal do código

    // declarando as variáveis
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

    printf("\n##__JOGO DE CARTAS SUPER TRUNFO__##\n\n");
    printf("Vamos montar as cartas.\n\n");
    printf("=> Primeira carta.\n\n");

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

    printf("Digite o valor aproximado do PIB dessa cidade em bilhões de reais: ");
    scanf("%f", &PIB1);

    printf("Digite quantos pontos turísticos tem nessa cidade: ");
    scanf("%d", &pt_turistico1);

    // Função para calcular a densidade populacional e o PIB per capita da Carta 1
    dens_populacional1 = (float)populacao1 / area1;
    PIBpercapita1 = (PIB1 * 1000000000) / populacao1;
    printf("\n");
    printf("=> Segunda carta.\n\n");
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

    printf("Digite o valor aproximado do PIB dessa cidade em bilhões de reais: ");
    scanf("%f", &PIB2);

    printf("Digite quantos pontos turísticos tem nessa cidade: ");
    scanf("%d", &pt_turistico2);

    // Função para calcular a densidade populacional e o PIB per capita da Carta 2
    dens_populacional2 = (float)populacao2 / area2;
    PIBpercapita2 = (PIB2 * 1000000000) / populacao2;

    // Função para calcular Super Poder das duas cartas (usando operadores aritiméticos)
    SuperPoder1 = populacao1 + area1 + PIB1 + pt_turistico1 + PIBpercapita1 + dens_populacional1;
    SuperPoder2 = populacao2 + area2 + PIB2 + pt_turistico2 + PIBpercapita2 + dens_populacional2;

    printf("** ESSAS SÃO SUAS CARTAS DO JOGO **\n\n");
    // Impressão dados da Carta 1
    printf("__CARTA 01__\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d habitantes.\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", PIB1);
    printf("Quantidade de pontos turísticos: %d\n", pt_turistico1);
    printf("Densidade populacional: %.2f hab/km²\n", dens_populacional1);
    printf("PIB per capita: R$ %.2f\n", PIBpercapita1);
    printf("Super poder: %.2f pontos\n\n", SuperPoder1);

    // Impressão dados da Carta 2
    printf("__CARTA 02__\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", PIB2);
    printf("Quantidade de pontos turísticos: %d\n", pt_turistico2);
    printf("Densidade populacional: %.2f hab/km²\n", dens_populacional2);
    printf("PIB per capita: R$ %.2f\n", PIBpercapita2);
    printf("Super poder: %.2f pontos\n\n", SuperPoder2);

    int opcao1 = 1, opcao2 = 1;
    // menu do jogo
    printf("___MENU PRINCIPAL DO JOGO___\n");
    printf("  1. Nome do estado.\n");
    printf("  2. Código da carta.\n");
    printf("  3. Nome da cidade.\n");
    printf("  4. Número da população.\n");
    printf("  5. Tamanho da área.\n");
    printf("  6. PIB da cidade.\n");
    printf("  7. Quantidade de pontos turísticos.\n");
    printf("  8. Densidade populacional.\n");
    printf("  9. PIB per capita.\n");
    printf("  10. Super poder.\n\n");
    printf("** VAMOS COMPARAR AS CARTAS...**\n\n");
    printf("Escolha duas opções entre (4 e 10) do menu para comparação;\n");

    printf("=> Escolha a primeira opção: ");
    scanf("%d", &opcao1);

    if (opcao1 < 4 || opcao1 > 10){
        printf("Opção inválida! Escolha um número entre 4 e 10.\n");
        return 1; // Encerra o programa
    }
    switch (opcao1){
        case 4:
            printf("Opção 4 => Número da população: Primeira carta é de %d habitantes | Segunda carta é de %d habitantes.\n\n", populacao1, populacao2);
            break;
        case 5:
            printf("Opção 5 => Tamanho da área: Primeira carta é de %.0f km² | Segunda carta é de %.0f km².\n\n", area1, area2);
            break;
        case 6:
            printf("Opção 6 => PIB da cidade: Primeira carta é de R$ %.2f Bilhões | Segunda carta é de R$ %.2f bilhões.\n\n", PIB1, PIB2);
            break;
        case 7:
            printf("Opção 7 => Quantidade de pontos turísticos: Primeira carta é de %d | Segunda carta é de %d.\n\n", pt_turistico1, pt_turistico2);
            break;
        case 8:
            printf("Opção 8 => Densidade populacional: Primeira carta é de %.2f hab/km² | Segunda carta é de %.2f hab/km².\n\n", dens_populacional1, dens_populacional2);
            break;
        case 9:
            printf("Opção 9 => PIB per capita: Primeira carta é de R$ %.2f | Segunda carta é de R$ %.2f.\n\n", PIBpercapita1, PIBpercapita2);
            break;
        case 10:
            printf("Opção 10 => Super poder: Primeira carta é de %.2f | Segunda carta é de %.2f.\n\n", SuperPoder1, SuperPoder2);
            break;
        default:
            printf("Primeira opção inválida.\n");
            break;
        }
    printf("=> Escolha a segunda opção entre (4 e 10): ");
    // printf("Escolha a segunda opção: ");
    scanf("%d", &opcao2);

    if (opcao2 < 4 || opcao2 > 10){
        printf("Opção inválida! Escolha um número entre 4 e 10.\n");
        return 1; // Encerra o programa
    }

    // codição para que o usuário não repita a mesma opção escolhida ateriormente
    if (opcao2 == opcao1){
        printf("Opção já escolhida. Digite outra...\n"); // se digitar a mesma opção o programa para
        return 1;
    }
    switch (opcao2){
        case 4:
            printf("Opção 4 => Número da população: Primeira carta é de %d habitantes | Segunda carta é de %d habitantes.\n\n", populacao1, populacao2);
            break;
        case 5:
            printf("Opção 5 => Tamanho da área: Primeira carta é de %.0f km² | Segunda carta é de %.0f km².\n\n", area1, area2);
            break;
        case 6:
            printf("Opção 6 => PIB da cidade: Primeira carta é de R$ %.2f Bilhões | Segunda carta é de R$ %.2f bilhões.\n\n", PIB1, PIB2);
            break;
        case 7:
            printf("Opção 7 => Quantidade de pontos turísticos: Primeira carta é de %d | Segunda carta é de %d.\n\n", pt_turistico1, pt_turistico2);
            break;
        case 8:
            printf("Opção 8 => Densidade populacional: Primeira carta é de %.2f hab/km² | Segunda carta é de %.2f hab/km².\n\n", dens_populacional1, dens_populacional2);
            break;
        case 9:
            printf("Opção 9 => PIB per capita: Primeira carta é de R$ %.2f | Segunda carta é de R$ %.2f.\n\n", PIBpercapita1, PIBpercapita2);
            break;
        case 10:
            printf("Opção 10 => Super poder: Primeira carta é de %.2f | Segunda carta é de %.2f.\n\n", SuperPoder1, SuperPoder2);
            break;
        default:
            printf("Segunda opção inválida.\n"); // programa para se obedecer a logica desse comando
            break;
        }
    printf("COMPARAÇÃO ENTRE OS ATRIBUTOS ESCOLHIDOS...\n");

    float valor1_carta1 = 0, valor2_carta1 = 0;
    float valor1_carta2 = 0, valor2_carta2 = 0;

    // Função auxiliar para escolher o valor da carta 1
    switch (opcao1){
        case 4:
            valor1_carta1 = populacao1;
            valor1_carta2 = populacao2;
            break;
        case 5:
            valor1_carta1 = area1;
            valor1_carta2 = area2;
            break;
        case 6:
            valor1_carta1 = PIB1;
            valor1_carta2 = PIB2;
            break;
        case 7:
            valor1_carta1 = pt_turistico1;
            valor1_carta2 = pt_turistico2;
            break;
        case 8:
            valor1_carta1 = dens_populacional1;
            valor1_carta2 = dens_populacional2;
            break;
        case 9:
            valor1_carta1 = PIBpercapita1;
            valor1_carta2 = PIBpercapita2;
            break;
        case 10:
            valor1_carta1 = SuperPoder1;
            valor1_carta2 = SuperPoder2;
            break;
        }
    // Função auxiliar para escolher o valor da carta 2
    switch (opcao2){
        case 4:
            valor2_carta1 = populacao1;
            valor2_carta2 = populacao2;
            break;
        case 5:
            valor2_carta1 = area1;
            valor2_carta2 = area2;
            break;
        case 6:
            valor2_carta1 = PIB1;
            valor2_carta2 = PIB2;
            break;
        case 7:
            valor2_carta1 = pt_turistico1;
            valor2_carta2 = pt_turistico2;
            break;
        case 8:
            valor2_carta1 = dens_populacional1;
            valor2_carta2 = dens_populacional2;
            break;
        case 9:
            valor2_carta1 = PIBpercapita1;
            valor2_carta2 = PIBpercapita2;
            break;
        case 10:
            valor2_carta1 = SuperPoder1;
            valor2_carta2 = SuperPoder2;
            break;
        }
    // Soma dos dois atributos escolhidos
    // Criando duas variáveis para calcular a soma dos atributos
    float soma_total_carta1 = valor1_carta1 + valor2_carta1;
    float soma_total_carta2 = valor1_carta2 + valor2_carta2;

    printf("\n====== RESULTADO DA COMPARAÇÃO ======\n\n");

    printf("Cidades comparadas:");
    printf("Carta 1 => %s X Carta 2 => %s \n\n", cidade1, cidade2);

    // Nome dos atributos comparados
    printf("Atributos escolhidos:\n");
    printf("1º atributo: ");

    switch (opcao1){
        case 4:
            printf("População\n");
            break;
        case 5:
            printf("Área\n");
            break;
        case 6:
            printf("PIB\n");
            break;
        case 7:
            printf("Pontos turísticos\n");
            break;
        case 8:
            printf("Densidade populacional\n");
            break;
        case 9:
            printf("PIB per capita\n");
            break;
        case 10:
            printf("Super poder\n");
            break;
        }
    printf("2º atributo: ");

    switch (opcao2){
        case 4:
            printf("População\n");
            break;
        case 5:
            printf("Área\n");
            break;
        case 6:
            printf("PIB\n");
            break;
        case 7:
            printf("Pontos turísticos\n");
            break;
        case 8:
            printf("Densidade populacional\n");
            break;
        case 9:
            printf("PIB per capita\n");
            break;
        case 10:
            printf("Super poder\n");
            break;
        }
    // Valores de cada carta
    printf("\nValores dos atributos:\n");
    printf("Carta 1: %.2f (atributo 1) + %.2f (atributo 2) = %.2f pontos\n", valor1_carta1, valor2_carta1, soma_total_carta1);
    printf("Carta 2: %.2f (atributo 1) + %.2f (atributo 2) = %.2f pontos\n", valor1_carta2, valor2_carta2, soma_total_carta2);

    // Resultado da comparação
    printf("\n*** Resultado Final ***\n\n");
    if (opcao1 == 8 || opcao2 == 8){
        printf("Densidade populacional: Vence a carta com MENOR valor.\n\n");
        (soma_total_carta1 < soma_total_carta2) ? printf("Carta 1 venceu!\n\n") : 
        (soma_total_carta1 > soma_total_carta2) ? printf("Carta 2 venceu!\n\n") :
        printf("Empate!\n\n");
    } else {
        (soma_total_carta1 > soma_total_carta2) ? printf("Carta 1 venceu!\n\n") : 
        (soma_total_carta1 < soma_total_carta2) ? printf("Carta 2 venceu!\n\n") :
        printf("Empate!\n\n");
    }
    return 0;
}
