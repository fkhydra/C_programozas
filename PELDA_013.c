#include <stdio.h>
int lepteto;

int main()
{
 for (lepteto = 0; lepteto < 10; ++lepteto)
 {
  if (lepteto == 4) continue;
  printf("A valtozo erteke : % d\n", lepteto);
  if (lepteto == 6) break;
 }
 printf("\n");

 return 0;
}
