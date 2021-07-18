#import <stdio.h>;
#import <locale.h>;
#import <time.h>
void main (){
    setlocale (LC_ALL, "portuguese");
    printf("<<<EX025 - serviço militar v2.0>>>\n\n");
    time_t t;
    time(&t);
    struct tm*data;
    data=localtime (&t);
    int ano_atual = data -> tm_year+1900;
    printf("Atualmente estamos no ano de %i\n", ano_atual);
    printf("Em que ano você nasceu? ");
    int ano;
    scanf("%i",&ano);
    printf("---------------------------------\n");
    int idade;
    idade = ano_atual-ano;
    printf("Sua idade atual é %i anos.\n", idade);
    if (idade==18){
        printf("Você completa 18 anos exatamente em %i. Vá se alistar!", ano_atual);
    } else {
        if (idade<18) {
            int rest = 18-idade;
            int anofut = rest+ano_atual;
            printf("seu alistamento será em %i. Ainda faltam %i anos.", anofut, rest);
        } else {
            if (idade>18) {
                int anoalist = ano+18;
                int pass = ano_atual - anoalist;
                printf("seu alistamento foi em %i. Já se passaram %i anos.", anoalist, pass);
            }
        }
    }

}
