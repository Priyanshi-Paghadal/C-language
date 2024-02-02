#include<stdio.h>
/*
    1 2 3 4 5
    1 2 3 4
    1 2 3
    1 2
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
*/
main()
{
    int i,j;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=6-i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}
