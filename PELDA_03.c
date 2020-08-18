#include <stdio.h>
#include <string.h>

char szoveg[] = "Udvozollek, dicso lovag!";
char szoveg2[128];
int szam;

int main()
{
 printf("A sztring: %s\n", szoveg);
 printf("A szoveg hossza %i\n", (int)strlen(szoveg));
 
 strcpy_s(szoveg2,"Masodik szoveg.");
 printf("A masodik sztring: %s\n", szoveg2);
 
 strcat_s(szoveg2," Kiegeszites.");
 printf("A masodik sztring kiegeszitve: %s\n", szoveg2);
 
 if(strcmp(szoveg, szoveg2) == 0) printf("A ket sztring egyezik!\n");
 else printf("A ket sztring nem egyezik!\n");
 
 return 0;
}
