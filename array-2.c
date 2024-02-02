#include <stdio.h>
//third array
main()
{
    int m,n,i,j;
    printf("Enter row & column size :\n");
    scanf("%d %d",&m,&n);
    int a[m][n],b[m][n],c[m][n];
    printf("Enter first array element :\n");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter second array element :\n");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("b[%d][%d] = ",i,j);
            scanf("%d",&b[i][j]);
        } 
    }
    printf("Third array element :\n");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d  ",c[i][j]);
        }   
        printf("\n");
    }
}
