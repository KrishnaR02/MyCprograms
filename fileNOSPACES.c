#include<stdio.h>
#include<string.h>
main()
{
	FILE *f1,*f2;
	int n=0,i,x=0;
	char ch,c[100];
	
	f1=fopen("d:\\abc.txt","r");
	f2=fopen("d:\\qp.txt","w");
	while(ch!=EOF)
	{
		ch=getc(f1);
		if(ch==' ')
		{
			x++;
		    if(x==1)
			{
				putc(ch,f2);
			}
		}
		else
		{
			putc(ch,f2);
			x=0;
		}
	}
	fclose(f1);
	fclose(f2);
	printf("Transfer complete.");
}
