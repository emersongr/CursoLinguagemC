#include <stdio.h>;
#include <locale.h>;
void main (){
    setlocale(LC_ALL, "portuguese");
    printf("<<< EX023 - Positivo, negativo ou nulo >>>\n\n");
    printf("Me diga um n�mero e eu te direi se ele � positivo, negativo ou nulo.\n");
    printf("Digite um n�mero: ");
    int num;
    scanf("%i", &num);
    if (num>0) {
        printf("O valor digitado � POSITIVO!");
    } else {
        if (num<0) {
            printf("O valor digitado � NEGATIVO!");
        } else {
            if (num==0) {
                printf("O valor digitado � NULO!");
            }
        }
    }

    }

