#include <stdio.h>;
#include <locale.h>;
void main (){
    setlocale(LC_ALL, "portuguese");
    printf("<<< EX024 - Ordem em dois n�meros >>>\n\n");
    printf("Me diga dois n�meros e eu os colocarei em ordem crescente.\n");
    printf("Primeiro n�mero: ");
    int n1;
    scanf("%i", &n1);
    printf("Segundo n�mero: ");
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
    printf("Os numeros em ordem s�o %i e %i", v1, v2);
    }

