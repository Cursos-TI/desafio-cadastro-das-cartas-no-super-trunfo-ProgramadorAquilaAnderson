#include <stdio.h>

    int main(){

        int idade;
        float altura;
        char inicial;
        char nome[20];

        printf("Digite a sua idade: ");
        scanf("%d", &idade);
        printf("A sua idade é: %d\n", idade);

        printf("Digite sua altura: ");
        scanf("%f", &altura);
        printf("A sua altura é: %.2f\n", altura);
        
        printf("Digite a inicial do seu nome: ");
        scanf(" %c", &inicial); // colocar um espaço antes do especificador de formato %c para ler na tela.
        printf("A inicial do seu nome é: %c\n", inicial);

        printf("Digite seu nome: ");
        scanf("%s", &nome);
        printf("Seu nome é: %s", nome);
    }