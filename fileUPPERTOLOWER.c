#include<stdio.h>

main()
{
	FILE *f1;
	char ch;
	int c=0,f=0;
	
	f1=fopen("d:\\abc.txt","r");
	
	while(ch!=EOF)
	{
		ch=getc(f1);
		if(ch>=97 && ch<=122)	
		{
			printf("%c",toupper(ch));
		}
		else if(ch>=65 && ch<=90)
		{
			printf("%c",tolower(ch));
		}	
	}
	fclose(f1);
}
