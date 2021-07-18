#import <stdio.h>
void main () {
    printf("Produto: ");
    char produto[20];
    gets(produto);
    printf("preco de %s: ", produto);
    float preco;
    scanf ("%f", &preco);
    printf("desconto (%%): ");
    float desc;
    scanf ("%f", &desc);
    float novop;
    novop = preco-(preco * desc / 100);
    printf("O produto %s custava %.2f, mas com %.1f%% de desconto, passa a custar %.2f.", produto, preco, desc, novop);
}
