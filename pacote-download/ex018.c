#include <stdio.h>;
#include <locale.h>;
#include <time.h>;
void main () {
    setlocale(LC_ALL, "portuguese");

    time_t t;
    time(&t);
    struct tm*data;
    data=localtime (&t);
    int ano_atual = data -> tm_year+1900;

    printf("<<<EX018 - Servi�o militar v1.0>>>\n\n");
    printf("Atualmente estamos no ano de %i.", ano_atual);
    printf("\nEm que ano voc� nasceu? ");
    int nasc;
    scanf("%i", &nasc);
    printf("--------------------------\n");
    int idade=ano_atual-nasc;
    printf("Sua idade atual � %i anos.", idade);

    if (idade>=18) {
        printf("\nj� fez %i anos. Espero sinceramente que voc� tenha se alistado.", idade);
    }else {
        printf("\nVoc� n�o tem 18 anos. N�o pode se alistar.");
    }

}

