#import <stdio.h>;
#import <locale.h>;
#import <time.h>
void main (){
    setlocale (LC_ALL, "portuguese");

    printf("<<<EX017 - Fila de banco>>>\n\n");

    printf("Em que ano você nasceu? ");
    int ano;
    scanf("%i",&ano);

    time_t t;
    time(&t);
    struct tm*data;
    data=localtime (&t);
    int anoat = data -> tm_year+1900;

    int idade=anoat-ano;
    printf("-------------------------\n");
    printf("Você tem %i anos, certo?", idade);

    if (idade<65) {
        printf ("\nSeja bem-vindo(a) ao banco Estudonauta!");
    }
    if (idade>=65) {
        printf ("\nSeja bem-vindo(a) ao banco Estudonauta!");
        printf ("\n===ATENÇÃO! Dirija-se para fila preferêncial===");
    }
}
