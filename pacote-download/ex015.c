#import <stdio.h>;
#import <locale.h>;
void main (){
    setlocale (LC_ALL, "portuguese");
    printf("<<<EX015 - Bons alunos merecem parab�ns>>>\n\n");
    printf("Digite a sua primeira nota: ");
    float nota1;
    fflush(stdin);
    scanf("%f",&nota1);
    printf("Digite a sua segunda nota: ");
    float nota2;
    fflush(stdin);
    scanf("%f",&nota2);
    printf("--------------------------\n");
    float media=(nota1+nota2)/2;

    if (media>=7) {
        printf("Meus PARAB�NS! A sua m�dia final foi %.1f\n", media);
        printf("--------------------------\n");
    }
    if (media<7){
        printf("A sua m�dia final foi %.1f\n", media);
        printf("--------------------------\n");
    }

}
