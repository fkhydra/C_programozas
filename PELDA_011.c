#include <stdio.h>

int erdemjegy;

int main()
{
 printf("Hanyas jegyet kaptal? Erdemjegy megadasa: ");
 scanf_s("%d", &erdemjegy);

 switch (erdemjegy) {
 case 5: printf("Kivalo!"); break;
 case 4: printf("Szep eredmeny!"); break;
 case 3: printf("Elmegy!"); break;
 case 2: printf("Legkozelebb jobb is lesz!"); break;
 case 1: printf("Ez igy keves lesz!"); break;
 default: printf("Ez nem is erdemjegy!"); break;
 }

 return 0;
}
