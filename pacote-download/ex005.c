#include <stdio.h>;
#include <stdlib.h>;
#include <time.h>;
void main (){
    srand(time (NULL));
    int na = rand () %5+1;
    int nd;
    printf("Vou pensar em um numero entre 1 e 5. Tente adivinhar!\n");
    printf("Qual e o seu palpite? ");
    scanf("%d", &nd);
    printf("Eu pensei no numero %d e voce pensou no numero %d",na,nd);

    }

