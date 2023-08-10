#include<stdio.h>
#include<string.h>
struct student
{
	int a,b,c;
	char name[100];
};
main()
{
	struct student s[100];
	int i,n,f,c=0;
	printf("Total students=>");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		fflush(stdin);
		printf("Enter student's name:");
		gets(s[i].name);
		printf("\nEnter student's roll number:");
		scanf("%d",&s[i].a);
		printf("\nEnter student's Hindi marks:");
		scanf("%d",&s[i].b);
		printf("\nEnter studentd's English marks:");
		scanf("%d",&s[i].c);
	}
	char d[100];
	fflush(stdin);
	printf("\nEnter the students name to view record:");
	gets(d);
	for(i=0;i<n;i++)
	{
	    if(strcmp(d,s[i].name)==0)
	    {
	    	printf("\n\tName\tRollnum\tHindi marks\tEnglish marks\tStatus");
	    	printf("\n===================================================");
	    	f=s[i].b+s[i].c;
	    	if(f>=50)
	    	{
	    		printf("\n\t%s\t%d\t%d\t%d\tpass",s[i].name,s[i].a,s[i].b,s[i].c);
			}
			else
			{
				printf("\n\t%s\t%d\t%d\t%d\tfail",s[i].name,s[i].a,s[i].b,s[i].c);
			}
			printf("\n==================================================");
			c=1;
		}
	}
	if(c==0)
	{
		printf("Wrong name.");
	}
}
