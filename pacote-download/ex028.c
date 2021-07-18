#include <stdio.h>;
#include <locale.h>;
void main (){
    setlocale(LC_ALL, "portuguese");
    printf("<<< EX028 - super calculadora v1.0 >>>\n\n");
    printf("Valor 1: ");
    int v1;
    scanf ("%i", &v1);
    printf ("Valor 2: ");
    int v2;
    scanf ("%i", &v2);
    printf("\n=====================\n");
    printf("+\tadição\n");
    printf("-\tsubtração\n");
    printf("x\tmultiplicação\n");
    printf("\/\tdivisão\n");
    printf("=====================\n");
    printf("Digite sua opção => ");
    char opcao;
    fflush(stdin);
    scanf("%c", &opcao);
    int soma=v1+v2;
    int sub=v1-v2;
    int mult=v1*v2;
    int div=v1/v2;
    switch (opcao) {
    case '+':
        printf("O resultado de %i+%i é igual a %i", v1, v2, soma);
        break;
    case '-':
        printf("O resultado de %i-%i é igual a %i", v1, v2, sub);
        break;
    case 'x':
        printf("O resultado de %ix%i é igual a %i", v1, v2, mult);
        break;
    case '/':
        printf("O resultado de %i/%i é igual a %i", v1, v2, div);
        break;
    default:
        printf("Não foi possivel fazer a operação. Tente novamente");
        break;
   }
   printf("\n-------------------------------");
   printf("\nVolte sempre!");
}

