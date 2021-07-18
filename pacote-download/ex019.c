#include <stdio.h>;
#include <locale.h>;
void main () {
    setlocale(LC_ALL, "portuguese");
    printf("<<<EX019 - Ano Bissexto>>>\n\n");
    int ano;
    printf("\nDigite um ano qualquer: ");
    fflush(stdin);
    scanf("%i", &ano);
    if (ano%4==0 && ano%100!=0 || ano%400==0) {
        printf("O ano %i é bissexto!\n", ano);
    } else {
        printf("O ano %i não é bissexto!\n", ano);
    }

}

