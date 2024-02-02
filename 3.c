#include<stdio.h>
//print number is odd or even using ternary operator
main()
{
    int num;
    printf("Enter number :\n");
    scanf("%d",&num);
    (num%2==1) ? printf("Number is odd\n")
    :printf("Number is even.");
}