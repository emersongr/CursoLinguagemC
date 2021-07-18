#include <stdio.h>;
#include <locale.h>;
void main (){
    setlocale(LC_ALL, "portuguese");
    printf("<<< EX030 - pre�o por �poca >>>\n\n");
    printf("Digite o pre�o de um produto (R$): ");
    float preco;
    scanf ("%f", &preco);
    printf("\nEscolha um produto:");
    printf("\n=====================\n");
    printf("1 Carnaval [+10]\n");
    printf("2 F�rias escolares [+20]\n");
    printf("3 Dia das crian�as [+5]\n");
    printf("4 Black Friday [-30]\n");
    printf("5 Natal [-5]\n");
    printf("=====================\n");
    printf("Digite sua op��o => ");
    int opcao;
    scanf("%i", &opcao);
    float pcar = preco+(preco*10/100);
    float pfe = preco+(preco*20/100);
    float pdcri = preco+(preco*5/100);
    float pbf = preco-(preco*30/100);
    float pnat = preco-(preco*5/100);
    switch (opcao) {
    case 1:
        printf("Na �poca de carnaval, o produto vai para R$%.2f", pcar);
        break;
    case 2:
        printf("Na �poca de f�rias escolares, o produto vai para R$%.2f", pfe);
        break;
    case 3:
        printf("Na �poca de dia das crian�as, o produto vai para R$%.2f", pdcri);
        break;
    case 4:
        printf("Na �poca de black friday, o produto vai para R$%.2f", pbf);
        break;
    case 5:
        printf("Na �poca de Natal, o produto vai para R$%.2f", pnat);
        break;
    default:
        printf("Em �pocas assim, mantenha o produto em R$%.2f", preco);
        break;
   }
   printf("\n-------------------------------");
   printf("\nVolte sempre!");
}

