#include<stdio.h>
main()
{
	int a,b;
	printf("Enter the Dividend:");
	scanf("%d",&a);
	printf("\nEnter the divisor:");
	scanf("%d",&b);
	printf("\nQuotient=%d",b/a);
	printf("\nRemainder=%d",b%a);
}
