#include<stdio.h>

main()
{
    int x,y,z;
    printf("Enter First & second angle of triangle :");
    scanf("%d %d",&x,&y);
    z=180-(x+y);
    printf("Third angle of triangle = %d",z);
}