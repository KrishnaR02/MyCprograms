#include<stdio.h>

main()
{
	FILE *f1,*f2,*f3;
	char ch,c;
	
	f1=fopen("d:\\abc.txt","r");
	f2=fopen("d:\\pqr.txt","r");
	f3=fopen("d:\\d.txt","w");
	
	while(ch!=EOF)
	{
		ch=getc(f1);
		putc(ch,f3);
	}
	while(c!=EOF)
	{
		c=getc(f2);
		putc(c,f3);
	}
	fclose(f1);
	fclose(f2);
	fclose(f3);
	printf("Transfered");
}
