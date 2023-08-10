#include<stdio.h>
struct emp
{
	int a,b,c;
	char name[100];
};
main()
{
    struct emp e[100];
	int i,n,f,c=0;
	printf("Enter the total studentd:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{ 
	    fflush(stdin);
		printf("\nEnter student's name:");
		gets(e[i].name);
		printf("\nEnter students roll.number:");
		scanf("%d",&e[i].a);
		printf("\nEnter student's hindi marks:");
		scanf("%d",&e[i].b);
		printf("\nEnter student's english marks:");
		scanf("%d",&e[i].c);
	}
	int d;
	printf("Enter the student roll num to show the record:");
	scanf("%d",&d);

	for(i=0;i<n;i++)
	{

	if(d==e[i].a)
	{
		
		printf("\n\tName\tRolln\tHindimarks\tEnglishmarks\tStatus");
		printf("\n===============================================");
		
		f=e[i].b+e[i].c;
			if(f>=50)
			{
				printf("\n\t%s\t%d\t%d\t%d\tpass",e[i].name,e[i].a,e[i].b,e[i].c);
			}
			else
			{
				printf("\n\t%s\t%d\t%d\t%d\tfail",e[i].name,e[i].a,e[i].b,e[i].c);
			}
		c=1;
	}
}

	if(c==0)
	{
		printf("Wrong roll number");
	}
}
