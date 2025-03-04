#include <stdio.h>

int main() {
   // Declarando as variáveis comm os dados das cartas.
   char estado1[20], estado2[20]; // variável para armazenar uma string e definindo um array de 20 carácteres.
   char codigoestado1[20], codigoestado2[20];
   char cidade1 [20], cidade2[20];
   float populacao1, populacao2; // variável para armazenar número inteiro.
   float area1, area2; // variável para armazenar ponto flutuante.
   float PIB1, PIB2;
   int pontosturisticos1, pontosturisticos2;

   printf("Digite o nome de um estado: "); // função de saída com instruções para o usuário de forma clara.
   scanf("%s", &estado1); // função de entrada de dados informados pelo usuário.
   
   printf("Digite o código do estado. Ex: A01 ou A02: ");
   scanf("%s", &codigoestado1);
  
   printf("Digite o nome de uma cidade desse estado: ");
   scanf("%s", &cidade1);
   
   printf("Digite o número da população dessa cidade: ");
   scanf("%f", &populacao1);
   
   printf("Digie o tamanho da área dessa cidade em km²: ");
   scanf("%f", &area1);
  
   printf("Digite o valor aproximado do PIB dessa cidade em R$: ");
   scanf("%f", &PIB1);
   
   printf("Digite quantos pontos turístico tem nessa cidade: ");
   scanf("%d", &pontosturisticos1);
   
   printf("Digite o nome de outro estado: "); 
   scanf("%s", &estado2); 
   
   printf("Digite o código desse estado. Ex: A01 ou A02: ");
   scanf("%s", &codigoestado2);
  
   printf("Digite o nome de uma cidade desse estado: ");
   scanf("%s", &cidade2);
   
   printf("Digite o número da população dessa cidade: ");
   scanf("%f", &populacao2);
   
   printf("Digie o tamanho da área dessa cidade em km²: ");
   scanf("%f", &area2);
  
   printf("Digite o valor aproximado do PIB dessa cidade em R$: ");
   scanf("%f", &PIB2);
   
   printf("Digite quantos pontos turístico tem nessa cidade: ");
   scanf("%d", &pontosturisticos2);

   printf("\n");
   printf("CARTA 01\n");
   printf("Estado: %s\n", estado1);
   printf("Código do estado: %s\n", codigoestado1);
   printf("Cidade: %s\n", cidade1);
   printf("Número de habitantes: %f\n", populacao1);
   printf("Tamanho da área: %f km²\n", area1);
   printf("PIB: %f reais\n", PIB1);
   printf("Quantidade de pontos turísticos: %d\n", pontosturisticos1);
   
   printf("\n");
   printf("CARTA 02\n");
   printf("Estado: %s\n", estado2);
   printf("Código do estado: %s\n", codigoestado2);
   printf("Cidade: %s\n", cidade2);
   printf("Número de habitantes: %f\n", populacao2);
   printf("Tamanho da área: %f km²\n", area2);
   printf("PIB: %f reais\n", PIB2);
   printf("Quantidade de pontos turísticos: %d\n", pontosturisticos2);

return 0; // para indicar que o programa terminou com retorno de 0
    }
