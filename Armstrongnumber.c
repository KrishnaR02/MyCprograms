#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("Enter the number:");
	scanf("%d",&a);
	while(a>0);
	{
		b=a%10n;
		c=c+(a*a*a);
		a=a/10;
	}
	if(a==c)
	{
		printf("Armstrong number");
	}
	else
	{
		printf("Not an Armstrong number");
	}
}
