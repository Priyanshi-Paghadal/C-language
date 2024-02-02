#include<stdio.h>
main()
{
    int unit;
    float rs,total;
    printf("Enter Your Unit :\n");
    scanf("%d",&unit);
    if(unit<=50){
        rs=0.50;
    }
    else if(unit<=100)
    {
        rs=0.75;
    }
    else if(unit<=150)
    {
        rs=1.20;
    }
    else if(unit>=250)
    {
        rs=1.50;
    }
    printf("amount of bil = %.2f",unit*rs);
    printf("Electricity Charge = %.2f",unit*rs*0.2);
    printf("Total Electricity bill = %.2f",unit*rs+unit*rs*0.2);
}