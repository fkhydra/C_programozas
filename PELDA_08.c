#include <stdio.h>

int tomb[5][2];
int x, y;

int main()
{
 for (x = 0; x < 5; ++x)
  for (y = 0; y < 2; ++y)
  {
   tomb[x][y] = y * 5 + x;
   printf("tomb[%d][%d] = %d\n",x,y, tomb[x][y]);
  }   

 return 0;
}
