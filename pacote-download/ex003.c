#include <stdio.h>;
#include <locale.h>;
void main (){
    setlocale(LC_ALL, "portuguese");
    char nome[50];
    int anos;
    float peso;
    printf("<<< EX003 - Dados >>>\n\n");
    printf("Qual é o seu nome: ");
    gets(nome);
    printf("Quantos anos você tem: ");
    scanf("%d", &anos);
    printf("Qual é o seu peso: (kg): ");
    scanf("%f", &peso);
    printf("---<<< PROCESSANDO >>>---\n\n");
    printf("Muito prazer %s, Você tem %d anos e pesa %.1fkg correto?\n\nFim.", nome, anos, peso);

    }

