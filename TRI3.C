#include <stdio.h>
/* 5
   5 4
   5 4 3
   5 4 3 2
   5 4 3 2 1
*/
int main()
{
  for (int i = 1; i <= 5; i++)
  {
    for (int j = 5; j >= 6 - i; j--)
    {
      printf("%d ", j);
    }
    printf("\n");
  }
  // int row,col;
  // for(row=1;row<=5;row++)
  // {
  //   for(col=5;col>=6-row;col--)
  //   {
  //     printf("%d ",col);
  //   }
  //    printf("\n");
  // }
  return 0;
}