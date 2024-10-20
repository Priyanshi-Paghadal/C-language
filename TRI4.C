#include <stdio.h>
/* 5
   4 5
   3 4 5
   2 3 4 5
   1 2 3 4 5
*/
int main()
{
  for (int i = 1; i <= 5; i++)
  {
    for (int j = 6 - i; j <= 5; j++)
    {
      printf("%d ", j);
    }
    printf("\n");
  }
  // int row,col;
  // for(row=1;row<=5;row++)
  // {
  //   for(col=6-row;col<=5;col++)
  //   {
  //     printf("%d ",col);
  //   }
  //    printf("\n");
  // }
  return 0;
}