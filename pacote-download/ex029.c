#include <stdio.h>;
#include <locale.h>;
void main (){
    setlocale(LC_ALL, "portuguese");
    printf("<<< EX029 - seu peso nos planetas v1.0 >>>\n\n");
    printf("Seu peso na terra (kg): ");
    float pterra;
    scanf ("%f", &pterra);
    printf("\n=====================\n");
    printf("1 Merc�rio\n");
    printf("2 V�nus\n");
    printf("3 Marte\n");
    printf("4 J�pter\n");
    printf("5 saturno\n");
    printf("=====================\n");
    printf("Digite sua op��o => ");
    int opcao;
    scanf("%i", &opcao);
    float pmerc = (pterra*0,37);
    float pven = (pterra*0,88);
    float pmart = (pterra*0,38);
    float pjup = (pterra*2,64);
    float psat = (pterra*1,15);
    switch (opcao) {
    case 1:
        printf("No planeta Merc�rio seu peso seria %.1fkg", pmerc);
        break;
    case 2:
        printf("No planeta V�nus seu peso seria %.1fkg", pven);
        break;
    case 3:
        printf("No planeta Marte seu peso seria %.1fkg", pmart);
        break;
    case 4:
        printf("No planeta J�pter seu peso seria %.1fkg", pjup);
        break;
    case 5:
        printf("No planeta Saturno seu peso seria %.1fkg", psat);
        break;
    default:
        printf("Seu peso n�o pode ser calculado em outros planetas. Tente novamente");
        break;
   }
   printf("\n-------------------------------");
   printf("\nVolte sempre!");
}

