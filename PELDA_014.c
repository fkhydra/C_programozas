#include <stdio.h>
int valtozo, i;

void hozzaadas(int* szam, int szam2);

int main()
{
 valtozo = 1;

 for (i = 0; i < 10; ++i)
 {
  hozzaadas(&valtozo, 5);
  printf("A valtozo erteke: %d\n", valtozo);
 }

 return 0;
}

void hozzaadas(int* szam, int szam2)
{
 *szam += szam2;
}
