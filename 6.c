#include<stdio.h>
//print odd number n to 1
main()
{
    int n,i;
    printf("Enter starting number:\n");
    scanf("%d",&n);
    for(i=15; i>=n; i--)
    {
    	if(i%2==1)
    	{
    		printf("%d\n",i);
		}
	}
}
