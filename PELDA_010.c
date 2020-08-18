#include <stdio.h>
int erdemjegy;

int main()
{
 printf("Hanyas jegyet kaptal? Erdemjegy megadása: ");
 scanf_s("%d", &erdemjegy);



 if (erdemjegy == 5) printf("Kivalo!");
 else if (erdemjegy == 1) printf("Ezen meg dolgozni kell!");
 else printf("Szep eredmeny!");

 return 0;
}
