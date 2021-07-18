#import <stdio.h>
void main() {
    printf("<<< EX014 - Operadores de deslocamento >>>\n\n");
    printf("Digite um numero: ");
    int n;
    scanf("%i", &n);
    printf("Digite o deslocamento: ");
    int d;
    scanf("%i", &d);
    printf("\n----OPERACOES SHIFT----\n");
    int rg = n >> d;
    printf("Calculando %i >> %i e igual %i\n",n, d, rg);
    int lf = n << d;
    printf("Calculando %i << %i e igual %i\n",n, d, lf);
}
