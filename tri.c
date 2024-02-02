#include<stdio.h>
int main()
{
    int base,height;
    float area;
    printf("Enter Base & Height Values:");
    scanf("%d %d",&base,&height);
    area=0.5*base*height;
    printf("Area of triangle=%f",area);
}