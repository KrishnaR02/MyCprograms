#include<stdio.h>
#include<string.h>
struct hotel
{
	int a,b,c;
	char name[100],type[100];
};
main()
{
	struct hotel e[100];
	int i,n,f;
	char ch[100];
	printf("Enter the total numbers of hotel:");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		fflush(stdin);
		printf("Enter the name of the hotel:");
		gets(e[i].name);
		fflush(stdin);
		printf("Enter the room type:");
		gets(e[i].type);
		printf("Enter the price per night:");
		scanf("%d",&e[i].a);
		printf("Enter the room ID:");
		printf("%d",&e[i].b);
	}
	printf("\n========================================================");
	printf("\nEnter your budget:");
	scanf("%d",&f);
	fflush(stdin);
	printf("\nEnter the room type");
	gets(ch);
	printf("\n\tNAME\tROOMID\tROOMTYPE\tPRICE");
    for(i=0;i<n;i++)
    {
    	if(f>=e[i].a && strcmp(ch,e[i].type)==0)
    	{
    		printf("\n===========================================================");
    	    printf("\n\t%s\t%d\t%s\t%d",e[i].name,e[i].b,e[i].type,e[i].a);
		}
	}
	printf("\n===============================================================");
}
