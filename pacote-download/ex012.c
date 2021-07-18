#import <stdio.h>
#import <locale.h>
void main() {
    setlocale(LC_ALL, "portuguese");
    float n1;
    printf("Primeira nota: ");
    scanf("%f", &n1);
    float n2;
    printf("Segunda nota: ");
    scanf("%f", &n2);
    float m;
    m = (n1+n2)/2;
    printf("A média do aluno foi %.1f",m);
    printf("\nA situação é %s", (m>=7)?"Aprovado!":"Reprovado!");
}
