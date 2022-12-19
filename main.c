// Make Rock Paper Scissors (in Indonesian)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  // int scissor = 1, rock = 2, paper = 3;
  int userChoose;

  srand(time(0));
  int botChoose = (rand() % 3) +1;

  const char win[] = "Kamu Menang!";
  const char lose[] = "Kamu Kalah!";
  const char tie[] = "Seri";

  // printf("%d", botChoose); // TEST
  printf("\nPilih salah satu-\n[1] Gunting\t[2] Batu\n[3] Kertas\nPilih angka > ");
  scanf("%i", userChoose);

  if (botChoose == 1)
    printf("Bot Memilih Gunting\n");
  else if (botChoose == 2)
    printf("Bot Memilih Batu\n");
  else if (botChoose == 3)
    printf("Bot Memilih Kertas\n");

  // ! Gunting 1, Batu 2, Kertas 3
  if (userChoose == 1 && botChoose == 1)
    printf("%s", tie);
  else if (userChoose == 1 && botChoose == 2)
    printf("%s", lose);
  else if (userChoose == 1 && botChoose == 3)
    printf("%s", win);
  else if (userChoose == 2 && botChoose == 1)
    printf("%s", win);
  else if (userChoose == 2 && botChoose == 2)
    printf("%s", tie);
  else if (userChoose == 2 && botChoose == 3)
    printf("%s", lose);
  else if (userChoose == 3 && botChoose == 1)
    printf("%s", lose);
  else if (userChoose == 3 && botChoose == 2)
    printf("%s", win);
  else if (userChoose == 3 && botChoose == 3)
    printf("%s", tie);
  else printf(NULL);

  return 0;
}
