#include<stdio.h>

main()
{
	int a,b,i;
	printf("<<<<BASIC CALCULATOR>>>>");
	printf("\nEnter the num1:");
	scanf("%d",&a);
	printf("\nEnter the num2:");
	scanf("%d",&b);
	printf("\nPress 1 to Add");
	printf("\nPress 2 to Subtract");
	printf("\nPress 3 to Multiply");
	printf("\nPress 4 to Divide");
	printf("\nEnter the function:");
	scanf("%d",&i);
	if(i==1)
	{
		printf("\nSum:%d",a+b);
	}
	else if(i==2)
	{
		printf("\nDifference:%d",a-b);
	}
	else if(i==3)
	{
		printf("\nProduct:%d",a*b);
	}
	else if(i==4)
	{
		printf("\nQuotient:%d",a/b);
	}
	else
	{
		printf("\nBAs");
	}
}
