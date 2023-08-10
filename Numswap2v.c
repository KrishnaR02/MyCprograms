#include<stdio.h>
main()
{
	int a,b;
	printf("Enter the numbers:");
	scanf("%d %d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("%d %d",a,b);
}
