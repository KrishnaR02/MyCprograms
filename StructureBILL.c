#include<stdio.h>

struct bill
{
	int a,b,c;
	char pro[100];
};
main()
{
	struct bill e[100];
	int i,n,f,s=0,k=0,d;
	printf("Number of products:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		fflush(stdin);
		printf("[%d]Enter the product name:",i+1);
		gets(e[i].pro);
		printf("Enter the price");
		scanf("%d",&e[i].a);
		printf("Quantity buyed:");
		scanf("%d",&e[i].b);
		printf("Product ID");
		scanf("%d",&e[i].c);
	}
	printf("\n\tID\tPRODUCTNAME\tPRICE\tQUANTITY\tSUBTOTAL");
	for(i=0;i<n;i++)
	{
	d=e[i].a*e[i].b;	
	printf("\n=============================================================================");
	printf("\n\t%d\t%s\t%d\t%d\t%d",e[i].c,e[i].pro,e[i].a,e[i].b,d);
	
	s=s+d;
	}
	printf("\n==============================================================================");
	printf("\n                                 TOTAL :%d",s);
	printf("\n==============================================================================");
}
