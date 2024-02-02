#include<stdio.h>
//swaped values using third variable
main()
{
    int a,b,c;
    printf("Enter a& b values :\n");
    scanf("%d %d",&a,&b);
    printf("\na=%d\nb=%d\n",a,b);
    c=a+b;
    a=c-a;
    b=c-b;
    printf("Swapped values:");
    printf("\na=%d\nb=%d",a,b);
}