#include<stdio.h>
struct emp
{
	int a,b,c;
	char name[100];
};
main()
{
    struct emp e[100];
	int i,n,f;
	printf("Enter the total studentd:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
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
	printf("\nFor only pass students press 1");
	printf("\nFor only fail students press 2");
	printf("\nFor both students press 3");
	printf("\nEnter the option:");
	scanf("%d",&d);
	if(d==3)
	{
		printf("\n\tName\tRolln\tHindimarks\tEnglishmarks\tStatus");
		printf("\n===============================================");

		for(i=0;i<n;i++)
		{
			f=e[i].b+e[i].c;
			if(f>=50)
			{
				printf("\n\t%s\t%d\t%d\t%d\tpass",e[i].name,e[i].a,e[i].b,e[i].c);
			}
			else
			{
				printf("\n\t%s\t%d\t%d\t%d\tfail",e[i].name,e[i].a,e[i].b,e[i].c);
			}
		}
    }
    else if(d==1)
    {
    		printf("\n\tName\tRolln\tHindimarks\tEnglishmarks\tStatus");
			printf("\n===============================================");
		
			for(i=0;i<n;i++)
			{
				f=e[i].b+e[i].c;
				if(f>=50)
				{
					printf("\n\t%s\t%d\t%d\t%d\tpass",e[i].name,e[i].a,e[i].b,e[i].c);
				}
			}
    }
    else if(d==2)
    {	
			printf("\n\tName\tRolln\tHindimarks\tEnglishmarks\tStatus");
			printf("\n===============================================");
	
			for(i=0;i<n;i++)
			{
				f=e[i].b+e[i].c;
				if(f<50)
				{
					printf("\n\t%s\t%d\t%d\t%d\tfail",e[i].name,e[i].a,e[i].b,e[i].c);
				}
			}
    }
	else
	{
			printf("Bhaila 3 aj thaay ho.");
	}
    printf("\n=======================================================");
}
