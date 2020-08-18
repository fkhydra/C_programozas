#include <stdio.h>

int karakter;

int main()
{
 printf(”nyomjon le egy billentyűt!”);
 karakter = getchar();
 printf("A billentyű kódja: %d\n", karakter);
 printf(”Nyomjon le egy billentyűt a befejezéshez!”);
 getchar();
 return 0;
}
