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
   //Cabe�alho do programa
   int inicio = 10;
   float preco = 20;
   printf("\n=============== CINEMA ESTUDONALTA ===============\n");
   printf("HOR�RIO DO FILME: %ih - PRE�O DO INGRESSO: R$%.2f\n", inicio, preco);
   printf("--------------------------------------------------\n");
   printf("Hora atual: %ih\n\n",h);
   //Entrada de dados
   float din;
   printf("Quanto de dinheiro voc� tem? R$");
   fflush(stdin);
   scanf("%f", &din);
   //Verifica��o
   if (h<inicio && din>=preco) {
      printf("Voc� consegue comprar o ingresso. Seja bem-vindo(a)!\n");
   } else {
      printf("Infelizmente n�o � possivel comprar o ingresso! Volte outro dia!\n");
   }
}

