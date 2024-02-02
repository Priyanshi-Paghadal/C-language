#include<stdio.h>
// find unit 
main()
{
    int unit;
    float amount;
    printf("Enter your unit :\n");
    scanf("%d",&unit);
    if(unit<50)
    {
        amount=unit*0.50;
        printf("amount=%f\n",amount);
    }
    else if(unit<150)
    {
        amount=(unit-50)*0.75+(50*0.50);
        printf("amount=%f\n",amount);
    }
    else if(unit<250)
    {
        amount=(unit-150)*1.20+(100*0.75)+(50*0.50);
        printf("amount=%f\n",amount);
    }
    else
    {
        amount=((unit-250)*1.50)+(100*1.20)+(100*0.75)+(50*0.50);
        printf("amount=%f\n",amount);
    }
    printf("Total bill = %f",amount+(amount*0.20));
}
