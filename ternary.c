#include<stdio.h>

main()
{
	int a,b,c;
    printf("Enter a ,b & c values :");
    scanf("%d %d %d",&a,&b,&c);
    (a < b) ? (a < c) ? printf("a is minimum")
     : printf("c is minimum")
     : 
     (b < c) ? printf("b is minimum")
      : printf("c is minimum");
}
