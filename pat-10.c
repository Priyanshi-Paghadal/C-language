#include <stdio.h>
/*
           1
         1 2 1
       1 2 3 2 1
     1 2 3 4 3 2 1
   1 2 3 4 5 4 3 2 1
*/
main()
{
    int i, j, k, rows = 5;

    for (i = 1; i <= rows; i++)
    {
        for (j = i; j < rows; j++)
        {
            printf("   ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
            if (j != i)
            {
                printf("  ");
            }
        }
        for (k = i - 1; k >= 1; k--)
        {
            printf("  %d", k);
        }
        printf("\n");
    }
}
