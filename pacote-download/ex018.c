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

    printf("<<<EX018 - Serviço militar v1.0>>>\n\n");
    printf("Atualmente estamos no ano de %i.", ano_atual);
    printf("\nEm que ano você nasceu? ");
    int nasc;
    scanf("%i", &nasc);
    printf("--------------------------\n");
    int idade=ano_atual-nasc;
    printf("Sua idade atual é %i anos.", idade);

    if (idade>=18) {
        printf("\njá fez %i anos. Espero sinceramente que você tenha se alistado.", idade);
    }else {
        printf("\nVocê não tem 18 anos. Não pode se alistar.");
    }

}

