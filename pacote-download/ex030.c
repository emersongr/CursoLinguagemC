#include <stdio.h>;
#include <locale.h>;
void main (){
    setlocale(LC_ALL, "portuguese");
    printf("<<< EX030 - preço por época >>>\n\n");
    printf("Digite o preço de um produto (R$): ");
    float preco;
    scanf ("%f", &preco);
    printf("\nEscolha um produto:");
    printf("\n=====================\n");
    printf("1 Carnaval [+10]\n");
    printf("2 Férias escolares [+20]\n");
    printf("3 Dia das crianças [+5]\n");
    printf("4 Black Friday [-30]\n");
    printf("5 Natal [-5]\n");
    printf("=====================\n");
    printf("Digite sua opção => ");
    int opcao;
    scanf("%i", &opcao);
    float pcar = preco+(preco*10/100);
    float pfe = preco+(preco*20/100);
    float pdcri = preco+(preco*5/100);
    float pbf = preco-(preco*30/100);
    float pnat = preco-(preco*5/100);
    switch (opcao) {
    case 1:
        printf("Na época de carnaval, o produto vai para R$%.2f", pcar);
        break;
    case 2:
        printf("Na época de férias escolares, o produto vai para R$%.2f", pfe);
        break;
    case 3:
        printf("Na época de dia das crianças, o produto vai para R$%.2f", pdcri);
        break;
    case 4:
        printf("Na época de black friday, o produto vai para R$%.2f", pbf);
        break;
    case 5:
        printf("Na época de Natal, o produto vai para R$%.2f", pnat);
        break;
    default:
        printf("Em épocas assim, mantenha o produto em R$%.2f", preco);
        break;
   }
   printf("\n-------------------------------");
   printf("\nVolte sempre!");
}

