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
			c++;
		}
		else if(ch>=65 && ch<=90)
		{
			f++;
		}	
	}
	fclose(f1);
	printf("Total upper cases:%d\nTotal lower cases:%d",f,c);
}
