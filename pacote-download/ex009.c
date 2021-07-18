#import <stdio.h>
void main () {
    printf("Nome do aluno: ");
    char nome[20];
    gets(nome);
    printf("Nota 1: ");
    float nota1;
    scanf ("%f", &nota1);
    printf("Nota 2: ");
    float nota2;
    scanf ("%f", &nota2);
    float media;
    media = (nota1+nota2)/2;
    printf("O aluno %s tirou as notas %.1f e %.1f, e ficou com media %.1f.", nome, nota1, nota2, media);
}
