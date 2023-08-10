#include<stdio.h>
#include<string.h>
main()
{
	char n[100],ch;
	printf("Enter the name:");
	gets(n);
	int i,f,a;
	a=strlen(n);
	for(i=0;i<a;i++)
	{
		for(f=0;f<=i;f++)
		{
		    ch=n[f];
			printf("%c",ch);
		}
		printf("\n");
	}
}
