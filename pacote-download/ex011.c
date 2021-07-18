#import <stdio.h>
#import <locale.h>
void main() {
    setlocale(LC_ALL, "portuguese");
    int n;
    printf("Digite um número qualquer: ");
    scanf("%i", &n);
    printf("O número que você digitou é %s", (n%2==0)?"PAR":"IMPAR");
}
