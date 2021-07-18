#import <stdio.h>
void main () {
    printf("Digite um numero: ");
    float n;
    scanf("%f", &n);
    int d;
    d = n+n;
    float tp;
    tp = n/3;
    printf("Analisando o numero %.1f, seu dobro e %d e sua terca parte e %.1f.",n,d,tp);
}
