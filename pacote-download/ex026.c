#import <stdio.h>;
#import <locale.h>;
#import <string.h>;
void main (){
    setlocale (LC_ALL, "portuguese");
    printf("<<<EX026 - Qual � o seu estado>>>\n\n");
    printf("Em que estado do Brasil voc� nasceu? ");
    char estado[20];
    gets (estado);
    if (strcmp(estado,"sp") == 0) {
        printf("Nascento em %s voc� � paulista!", estado);
    } else {
        if (strcmp(estado,"mg") == 0) {
            printf("Nascento em %s voc� � mineiro!", estado);
        } else {
            if (strcmp(estado,"rj") == 0){
                printf("Nascento em %s voc� � carioca!", estado);
            } else {
                printf("Nascendo no %s voc� � natural da sua cidade, mais ainda n�o sei como te chamar!", estado);
            }
        }
    }

}
