#import <stdio.h>
#import <locale.h>
void main() {
    setlocale(LC_ALL, "portuguese");
    int n;
    printf("Digite um n�mero qualquer: ");
    scanf("%i", &n);
    printf("O n�mero que voc� digitou � %s", (n%2==0)?"PAR":"IMPAR");
}
