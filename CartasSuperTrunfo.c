#include <stdio.h> // inclusão de uma biblioteca.


    int main() { //função principal do código.
    
        // Declarando as variáveis
        char estado1[20], estado2[20]; // variável para armazenar uma string e definindo um array de 20 carácteres.
        char codigoestado1[20], codigoestado2[20];
        char cidade1 [20], cidade2[20];
        float habitantes1, habitantes2; // variável para armazenar número inteiro.
        float area1, area2; // variável para armazenar ponto flutuante.
        float PIB1, PIB2;
        int pontosturisticos1, pontosturisticos2;
        float densidadepopulacional1, densidadepopulacioanl2;
        float PIBpercapita1, PIBpercapita2;
        
        //entrada de dados para carta 1
        printf("Digite o nome de um estado: ");
        scanf("%s", &estado1); 
        
        printf("Digite o código do estado. Ex: A01 ou A02: ");
        scanf("%s", &codigoestado1);
       
        printf("Digite o nome de uma cidade desse estado: ");
        scanf("%s", &cidade1);
        
        printf("Digite o número da habitantes dessa cidade: ");
        scanf("%f", &habitantes1);
        
        printf("Digite o tamanho da área dessa cidade em km²: ");
        scanf("%f", &area1);
       
        printf("Digite o valor aproximado do PIB dessa cidade em R$: ");
        scanf("%f", &PIB1);
        
        printf("Digite quantos pontos turístico tem nessa cidade: ");
        scanf("%d", &pontosturisticos1);

        //função para calcular a densidade e PIB per cápita da carta 1

        densidadepopulacional1 = habitantes1 / area1;
        PIBpercapita1 = PIB1 / habitantes1;

        printf("\n");

        //imprimir dados da carta 1

        printf("CARTA 01\n");
        printf("Estado: %s\n", estado1);
        printf("Código: %s\n", codigoestado1);
        printf("Cidade: %s\n", cidade1);
        printf("Habitantes: %.0f\n", habitantes1);
        printf("Área: %.2f km²\n", area1);
        printf("PIB: %.2f bilhoes de reais\n", PIB1);
        printf("Quantidade de Pontos Turísticos: %d\n", pontosturisticos1);
        printf("Densidade Populacional é: %.2f hab/km²\n", densidadepopulacional1);
        printf("PIB per Capita é: %.2f bilhões de reais \n", PIBpercapita1);

        printf("\n");
        //entrada de dados para carta 2
        printf("Digite o nome de outro estado: "); 
        scanf("%s", &estado2); 
        
        printf("Digite o código desse estado. Ex: A01 ou A02: ");
        scanf("%s", &codigoestado2);
       
        printf("Digite o nome de uma cidade desse estado: ");
        scanf("%s", &cidade2);
        
        printf("Digite o número da habitantes dessa cidade: ");
        scanf("%f", &habitantes2);
        
        printf("Digite o tamanho da área dessa cidade em km²: ");
        scanf("%f", &area2);
       
        printf("Digite o valor aproximado do PIB dessa cidade em R$: ");
        scanf("%f", &PIB2);
        
        printf("Digite quantos pontos turístico tem nessa cidade: ");
        scanf("%d", &pontosturisticos2);

        //função para calcular a densidade e PIB per cápita da carta 2
        densidadepopulacioanl2 = habitantes2 / area2;
        PIBpercapita2 = PIB2 / habitantes2;
        // imprimir dados da carta 2
        printf("\n");
        printf("CARTA 02\n");
        printf("Estado: %s\n", estado2);
        printf("Código: %s\n", codigoestado2);
        printf("Cidade: %s\n", cidade2);
        printf("Habitantes: %.0f\n", habitantes2);
        printf("Área: %.2f km²\n", area2);
        printf("PIB: %.2f bilhóes de reais\n", PIB2);
        printf("Quantidade de Pontos Turísticos: %d\n", pontosturisticos2);
        printf("Densidade Populacional é: %.2f hab/km²\n", densidadepopulacioanl2);
        printf("PIB per Capita é: %.2f bilhões de reais \n", PIBpercapita2);

        return 0; // para indicar que o programa terminou com retorno de 0
    }