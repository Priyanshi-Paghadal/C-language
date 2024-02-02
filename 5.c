#include<stdio.h>
//find minimum using ternary operator
main()
{
    int a,b,c;
    printf("Enter a , b & c values :\n");
    scanf("%d %d %d",&a,&b,&c);
    (a<b) ? (a<c) ? printf("a is minimum") : printf("c is minimum")
    : (b<c) ? printf("b is minimum")
            :printf("c is minimum");
}