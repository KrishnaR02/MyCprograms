#include<stdio.h>

main()
{
	FILE *f1;
	char ch;
	int c=0;
	
	f1=fopen("d:\\abc.txt","r");
	
	while(ch!=EOF)
	{
		ch=getc(f1);
		if(ch==' ')	
		{
			c++;
		}	
	}
	
	fclose(f1);
	printf("\nSpaces are = %d",c);
}
