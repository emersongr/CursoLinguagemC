#import <stdio.h>
void main () {
    printf("Digite uma letra: ");
    char l;
    scanf("%c", &l);
    char a;
    a = l-1;
    char s;
    s = l+1;
    printf("Antes da letra %c temos a letra %c. Depois temos a letra %c.",l,a,s);
}
