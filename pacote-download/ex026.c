#import <stdio.h>;
#import <locale.h>;
#import <string.h>;
void main (){
    setlocale (LC_ALL, "portuguese");
    printf("<<<EX026 - Qual é o seu estado>>>\n\n");
    printf("Em que estado do Brasil você nasceu? ");
    char estado[20];
    gets (estado);
    if (strcmp(estado,"sp") == 0) {
        printf("Nascento em %s você é paulista!", estado);
    } else {
        if (strcmp(estado,"mg") == 0) {
            printf("Nascento em %s você é mineiro!", estado);
        } else {
            if (strcmp(estado,"rj") == 0){
                printf("Nascento em %s você é carioca!", estado);
            } else {
                printf("Nascendo no %s você é natural da sua cidade, mais ainda não sei como te chamar!", estado);
            }
        }
    }

}
