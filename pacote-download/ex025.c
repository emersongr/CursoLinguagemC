#import <stdio.h>;
#import <locale.h>;
#import <time.h>
void main (){
    setlocale (LC_ALL, "portuguese");
    printf("<<<EX025 - servi�o militar v2.0>>>\n\n");
    time_t t;
    time(&t);
    struct tm*data;
    data=localtime (&t);
    int ano_atual = data -> tm_year+1900;
    printf("Atualmente estamos no ano de %i\n", ano_atual);
    printf("Em que ano voc� nasceu? ");
    int ano;
    scanf("%i",&ano);
    printf("---------------------------------\n");
    int idade;
    idade = ano_atual-ano;
    printf("Sua idade atual � %i anos.\n", idade);
    if (idade==18){
        printf("Voc� completa 18 anos exatamente em %i. V� se alistar!", ano_atual);
    } else {
        if (idade<18) {
            int rest = 18-idade;
            int anofut = rest+ano_atual;
            printf("seu alistamento ser� em %i. Ainda faltam %i anos.", anofut, rest);
        } else {
            if (idade>18) {
                int anoalist = ano+18;
                int pass = ano_atual - anoalist;
                printf("seu alistamento foi em %i. J� se passaram %i anos.", anoalist, pass);
            }
        }
    }

}
