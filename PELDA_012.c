#include <stdio.h>
int lepteto;

int main()
{
 lepteto = 1;
 while (lepteto < 5) printf("A valtozo erteke : % d\n", lepteto++);
 printf("\n");

 do {
  printf("A valtozo erteke : % d\n", lepteto);
  ++lepteto;
 } while (lepteto < 5);

 printf("\n");

 for (lepteto = 0; lepteto < 5; ++lepteto)
 {
  printf("A valtozo erteke : % d\n", lepteto);
 }
 printf("\n");

 return 0;
}
