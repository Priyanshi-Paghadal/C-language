#include<stdio.h>
//print leap year
main()
{
    int sy,ey,i;
    printf("Enter starting year :\n");
    scanf("%d",&sy);
    printf("Enter ending year :\n");
    scanf("%d",&ey);
    for(i=sy; i<=ey; i++)
    {
        if(i%4==0)
        {
            printf("%d\n",i);
        }
    }
}