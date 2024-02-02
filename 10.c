#include<stdio.h>
main()
{
	int f=0,s=1,t,n,i;
	printf("Enter any number :\n");
	scanf("%d",&n);
	printf("%d\t%d\t",f,s);
	for(i=1; i<=n; i++)
	{
		printf("%d\t",t);
		f=s;
		s=t;
		t=f+s;
	}
}
