#include <stdio.h>;
#include <locale.h>;
#include <time.h>;
void main () {
   setlocale (LC_ALL, "portuguese");
   //Pegar a hora atual
   time_t t;
   struct tm *hora;
   time (&t);
   hora = localtime(&t);
   int h = hora->tm_hour;
   //Cabeçalho do programa
   int inicio = 16;
   float preco = 20;
   printf("\n===================== CINEMA =====================\n");
   printf("HORÁRIO DO FILME: %ih - PREÇO DO INGRESSO: R$%.2f\n", inicio, preco);
   printf("--------------------------------------------------\n");
   printf("Hora atual: %ih\n\n",h);
   //Entrada de dados
   float din;
   printf("Quanto de dinheiro você tem? R$");
   fflush(stdin);
   scanf("%f", &din);
   //Verificação
   if (h<inicio && din>=preco) {
      printf("Você consegue comprar o ingresso. Seja bem-vindo(a)!\n");
      system("pause");
    char b[10]={0,0,0,0,0,0,0,0,0,0};
    char r;
    int cad;
    int i;
    do{
        system("cls");
        printf("Vamos reservar os acentos:\n");
        printf("--------------------------\n");
        for(i=1; i<10; i++){
        if(b[i]==0){
            printf("[B%i]", i);
        }else{
            printf("[--}");
        }
    }
    printf("\n------------------------------------");
        printf("\nReservar a cadeira: B");
        scanf("%i", &cad);
        if(b[cad]==0){
            b[cad]=1;
            printf("Cadeira B%i reservada", cad);
        }else{
            printf("Erro: Lugar reservado!");
        }
        printf("\nQuer reservar outro? [s/n] ");
        fflush(stdin);
        scanf("%c", &r);
        if (r=='n') {
            printf("Obrigado. Volte sempre!");
        }
    }while (r=='s');
   } else {
      printf("Infelizmente não é possivel comprar o ingresso! Volte outro dia!\n");
   }
}
