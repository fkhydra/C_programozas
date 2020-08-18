#include <stdio.h>
#include <stdlib.h>

int egesz_szam = 15;
long hosszu_szam = 734234798324932;
double lebegopontos_szam = 13.78923213;
char szoveg1[128], szoveg2[128], szoveg3[128];

int main()
{
 printf("Szamok szovegge konvertalasa\n");
 _itoa_s(egesz_szam,szoveg1,10);
 printf("A szam: %s\n", szoveg1);

 _ltoa_s(hosszu_szam, szoveg2, 10);
 printf("A szam: %s\n", szoveg2);

 _gcvt_s(szoveg3, 128,lebegopontos_szam, 5);
 printf("A szam: %s\n", szoveg3);

 printf("Szovegek szamma konvertalasa\n");
 egesz_szam = atoi(szoveg1);
 printf("A szam: %d\n", egesz_szam);

 hosszu_szam = atol(szoveg2);
 printf("A szam: %li\n", hosszu_szam);

 lebegopontos_szam = atof(szoveg3);
 printf("A szam: %f\n", lebegopontos_szam);

 return 0;
}
