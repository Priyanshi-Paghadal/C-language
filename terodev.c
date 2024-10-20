#include<stdio.h>
main()
{
    int num;
    printf("Enter any number for check odd or even:");
    scanf("%d",&num);
    (num%2==1) ? printf("Your number is odd")
    : printf(" your number is even");
}