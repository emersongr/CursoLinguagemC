#import <stdio.h>
void main() {
    printf("<<< EX013 - Operacoes Bitwise >>>\n\n");
    printf("Digite o primeiro valor: ");
    int n1;
    scanf("%i", &n1);
    printf("Digite o segundo valor: ");
    int n2;
    scanf("%i", &n2);
    printf("\n----OPERACOES BITWISE----\n");
    int ec = n1 & n2;
    printf("Calculando %i & %i e igual %i\n",n1, n2, ec);
    int pp = n1 | n2;
    printf("Calculando %i | %i e igual %i\n",n1, n2, pp);
    int cr = n1 ^ n2;
    printf("Calculando %i ^ %i e igual %i\n", n1, n2, cr);
}
