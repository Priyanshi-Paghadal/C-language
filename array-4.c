#include<stdio.h>
// print and find the sum of all boundary elements from a given 5x5 2D array
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
    printf("Boundry elements :\n");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            if(i==0 || i==m-1 || j==0 || j==n-1)
            {
                printf("%d ",a[i][j]);
                sum=sum+a[i][j];
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("sum of boundry elements = %d",sum);
}