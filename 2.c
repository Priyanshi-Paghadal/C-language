#include<stdio.h>
//swaped values using without third variable
main()
{
    int a,b;
    printf("Enter a & b values :\n");
    scanf("%d %d",&a,&b);
    printf("\na=%d\nb=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Swaped values :\n");
    printf("\na=%d\nb=%d",a,b);
}