#include <stdio.h>

int main(int argc, char* argv[])
{
 int i;

 if (argc < 2) printf("Nem adott meg extra parametert!");
 else
 {
  for (i = 0; i < argc; ++i)
   printf("A megadott parameter : % s\n", argv[i]);
 }

 return 0;
}
