#include <stdio.h>;
#include <locale.h>;
void main (){
    setlocale(LC_ALL, "portuguese");
    char nome[50];
    int anos;
    float peso;
    printf("<<< EX003 - Dados >>>\n\n");
    printf("Qual � o seu nome: ");
    gets(nome);
    printf("Quantos anos voc� tem: ");
    scanf("%d", &anos);
    printf("Qual � o seu peso: (kg): ");
    scanf("%f", &peso);
    printf("---<<< PROCESSANDO >>>---\n\n");
    printf("Muito prazer %s, Voc� tem %d anos e pesa %.1fkg correto?\n\nFim.", nome, anos, peso);

    }

