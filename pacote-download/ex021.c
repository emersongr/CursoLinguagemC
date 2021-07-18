#include <stdio.h>;
#include <locale.h>;
void main () {
   setlocale (LC_ALL, "portuguese");
   float num, res;
   printf ("Digite um número (positivo ou negativo): ");
   fflush(stdin);
   scanf("%f", &num);
   if (num>0) {
        res = 1/num;
        printf("O inverso de %.0f é igual a %.4f\n", num, res);
   } else {
        res = num * (-1);
        printf("O oposto de %.0f é igual a %.4f\n", num, res);
   }

}

