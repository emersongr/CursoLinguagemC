#include <stdio.h>;
#include <locale.h>;
void main (){
    setlocale(LC_ALL, "portuguese");
    printf("<<< EX027 - tr�s valores em ordem >>>\n\n");
    printf("Me diga tr�s n�meros e eu os colocarei em ordem crescente.\n");
    printf("Primeiro n�mero: ");
    int n1;
    scanf("%i", &n1);
    printf("Segundo n�mero: ");
    int n2;
    scanf ("%i", &n2);
    printf("Terceiro n�mero: ");
    int n3;
    scanf ("%i", &n3);
    int v1, v2, v3;
    if ((n1<n2) || (n1<n3) || (n2<n3)){
        v1=n1;
        v2=n2;
        v3=n3;
    } else {
        if ((n2<n1) || (n2<n3) || (n1<n3)){
            v1=n2;
            v2=n1;
            v3=n3;
        } else {
            if ((n3<n1) || (n3<n2) || (n2<n1)){
                v1=n3;
                v2=n2;
                v3=n1;
            }
        }
    }

    printf("Os n�meros em ordem s�o %i, %i e %i", v1, v2, v3);
}










