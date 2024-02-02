#include<stdio.h>
/*
    1 2 3 4 5 5 4 3 2 1
    1 2 3 4     4 3 2 1
    1 2 3         3 2 1
    1 2             2 1
    1                 1
*/
main()
{
    int row=5,i,j;
    for ( i = 0; i < row; i++)
    {
        for (j = 1; j <= 5 - i; j++) {
            printf("%d ", j);
        }
        for (j = 1; j < 2 * i; j++) {
            printf("  ");
        }
        for (j = 5 - i; j >= 1; j--) {
            if (j != 5)
                printf("%d ", j);
        }
        printf("\n");
    }
    
    
}
