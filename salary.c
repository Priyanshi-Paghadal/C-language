#include<stdio.h>

main()
{
    float basic,hra,da,ta,total;
    printf("Enter Your basic salary :");
    scanf("%f",&basic);
    printf("Enter rate of hra :");
    scanf("%f",&hra);
    printf("hra = %f",basic*hra/100);
    printf("Enter rate of da :");
    scanf("%f",&da);
    printf("da = %f",basic*da/100);
    printf("Enter rate of ta :");
    scanf("%f",&ta);
    printf("ta = %f",basic*ta/100);
    total=basic+hra+da+ta;
    printf("Total salary = %.1f",total);
}