#include<stdio.h>
//print odd number
main()
{
    int i=1,n;
    printf("Enter a value :\n");
    scanf("%d",&n);
    do
    {
        if(i%2==0)
        {
        	printf("%d\n",i);
		}
        i++;
    } while (i<=10);
    
}
