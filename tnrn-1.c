#include<stdio.h>
void cube();
void main()
{
    cube();
}
void cube()
{
    int i;
    printf("Enter any number for cube :\n");
    scanf("%d",&i);
    printf("cube = %d\n",i*i*i);
}