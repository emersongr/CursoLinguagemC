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
   int inicio = 10;
   float preco = 20;
   printf("\n=============== CINEMA ESTUDONALTA ===============\n");
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
   } else {
      printf("Infelizmente não é possivel comprar o ingresso! Volte outro dia!\n");
   }
}

