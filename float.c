#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	
    int num1 ,num2;
    float num3 , num4;
    scanf("%d %d",&num1,&num2);
    scanf("%f %f",&num3,&num4);
    int add=num1+num2;
    printf("%d",add);
    int sub=num1-num2;
    printf(" %d\n",sub);
    float add1 = num3+num4;
    float sub1 = num3-num4;
    printf("%.1f",add1);
    printf(" %.1f",sub1);
    // printf(" ",num1-num2);
    return 0;
}