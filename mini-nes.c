#include<stdio.h>

main()
{
    int a,b,c;
    printf("Enter a , b & c values :");
    scanf("%d %d %d",&a,&b,&c);
    if(a<b)
    {
        if(a<c)
        {
            printf("a is minimum ");
        }
        else
        {
            printf("c is minimum");
        }
    }
    else
    {
        if(b<c)
        {
            printf("b is minimum ");
        }
        else
        {
            printf("c is minimum");
        }
    }
}