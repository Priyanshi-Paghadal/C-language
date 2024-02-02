#include<stdio.h>
main()
{
    int num;
    printf("Enter any number :\n");
    scanf("%d",&num);
    if(num%3==0 && num%5==0)
    {
        printf("Number is devided by 3 & 5 both.");
    }
    else
    {
        printf("Number is not devided by 3 & 5 both.");
    }
}