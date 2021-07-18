#include <stdio.h>;
#include <locale.h>;
void main (){
    setlocale(LC_ALL, "portuguese");
    printf("<<< EX024 - Ordem em dois nùmeros >>>\n\n");
    printf("Me diga dois números e eu os colocarei em ordem crescente.\n");
    printf("Primeiro número: ");
    int n1;
    scanf("%i", &n1);
    printf("Segundo número: ");
    int n2;
    scanf ("%i", &n2);
    int v1, v2;
    if (n1<n2) {
        v1=n1;
        v2=n2;
    } else{
        if (n2<n1) {
            v1=n2;
            v2=n1;
        }
    }
    printf("Os numeros em ordem são %i e %i", v1, v2);
    }

