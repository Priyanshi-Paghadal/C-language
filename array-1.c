#include<stdio.h>
//average from given 2-d array
main()
{
    int m,n,i,j;
    float avg,sum=0,size;
    printf("Enter row & column size :\n");
    scanf("%d %d",&m,&n);
    int a[m][n];
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("a[%d][%d] =",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            sum=sum+a[i][j];
        }
    }
    size=m+n;
    printf("sum=%.2f\n",sum);
    avg =sum / (m * n);
    printf("avg of 2-d array = %.2f",avg);
}