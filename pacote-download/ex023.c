#include <stdio.h>;
#include <locale.h>;
void main (){
    setlocale(LC_ALL, "portuguese");
    printf("<<< EX023 - Positivo, negativo ou nulo >>>\n\n");
    printf("Me diga um número e eu te direi se ele é positivo, negativo ou nulo.\n");
    printf("Digite um número: ");
    int num;
    scanf("%i", &num);
    if (num>0) {
        printf("O valor digitado é POSITIVO!");
    } else {
        if (num<0) {
            printf("O valor digitado é NEGATIVO!");
        } else {
            if (num==0) {
                printf("O valor digitado é NULO!");
            }
        }
    }

    }

