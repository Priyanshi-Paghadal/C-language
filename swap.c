#include<stdio.h>

main()
{
    int a=0,b=1,i,c,n;
    printf("Enter any number :\n");
    scanf("%d",&n);
    printf("%d\t%d\t",a,b);
    for(i=3; i<=n; i++)
    {
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
    }
}