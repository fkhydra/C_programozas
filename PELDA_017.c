#include <stdio.h>
FILE* myfile;
char szoveg[128];

int main(int argc, char* argv[])
{
 //kiírás
 printf("Szoveg kiirasa...\n");
 fopen_s(&myfile, "szovegfajl.txt", "wt");
 if (myfile != NULL)
  fprintf_s(myfile, "Szovegsor.");
 fclose(myfile);

 //beolvasás
 printf_s("Szoveg visszaolvasasa...\n");
 fopen_s(&myfile, "szovegfajl.txt", "rt");
 if (myfile != NULL)
  fscanf_s(myfile, "%s", szoveg,sizeof(szoveg));
 fclose(myfile);
 printf("A visszaolvasott szoveg: %s\n", szoveg);

 return 0;
}
