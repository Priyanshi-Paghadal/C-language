#include<stdio.h>
//sum of diagonal elements
main()
{
    int m,n,i,j,sum=0;
    printf("Enter row & column size :\n");
    scanf("%d %d",&m,&n);
    int a[m][n];
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }   
    }
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            if(i==j)
            {
                sum=sum+a[i][j];
            }
        }
    }
    printf("sum of diagonal elements = %d",sum);
}