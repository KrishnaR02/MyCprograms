#include<stdio.h>
#include<string.h>
struct htl
{
	int a,b,c;
	char name[100],type[100];
};
main()
{
	struct htl e[100];
	int i,n,f,k=0;
	char choice[100];
	printf("Enter the number of hotels:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		fflush(stdin);
		printf("Enter the hotel name: ");
		gets(e[i].name);
		fflush(stdin);
		printf("Enter the room type:");
		gets(e[i].type);
		printf("Enter the room price:");
		scanf("%d",&e[i].a);
		printf("Enter the hotel ID:");
		scanf("%d",&e[i].b);
	}
	printf("\n=============================================================================");
	printf("Enter your budget:");
	scanf("%d",&f);
	fflush(stdin);
	printf("Enter the room choice:");
	gets(choice);
	for(i=0;i<n;i++)
	{
		if(f>=e[i].a && strcmp(e[i].type,choice)==0)
		{
			printf("\n===============================================================================");
			printf("\n\tID\tNAME\tROOM\tPRICE");
			printf("\n\t%d\t%s\t%s\t%d",e[i].b,e[i].name,e[i].type,e[i].a);
			k=1;
		}
	}
	printf("\n================================================================================");
	if(k==0)
	{
		printf("Budget vadhaar");
	}
}

