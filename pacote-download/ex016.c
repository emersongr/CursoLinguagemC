#import <stdio.h>;
#import <locale.h>;
void main (){
    setlocale (LC_ALL, "portuguese");
    printf("<<<EX016 - Consumidor ganha desconto>>>\n\n");
    printf("Qual foi o valor total da compra? R$");
    float tcomp;
    fflush(stdin);
    scanf("%f",&tcomp);
    printf("Você comprou R$%.2f na nossa loja", tcomp);
    float desc = tcomp*10/100;
    float pfinal = tcomp-desc;

    if (tcomp>=500) {
        printf("\n=-=-=ATENÇÃO=-=-=\n");
        printf("Por fazer mais que R$500,00 em compras, você vai receber R$%.2f de desconto", desc);
        printf("\nO valor a ser pago é R$%.2f", pfinal);
        printf("\nVolte sempre!");
    }
    if (tcomp<500){
        printf("\n--------------------------\n");
        printf("O valor a ser pago é R$%.2f", tcomp);
        printf("\nVolte sempre!");
    }

}
