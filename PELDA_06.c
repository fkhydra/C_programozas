#include <stdio.h>
char szoveg[128];

int main()
{
 printf("Szabad a kedves nevet ? ");
 gets_s(szoveg,sizeof(szoveg));
 printf("Nagyon orvendek, kedves %s!\n", szoveg);
 return 0;
}
