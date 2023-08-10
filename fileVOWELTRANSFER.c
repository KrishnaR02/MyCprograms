#include<stdio.h>
main()
{
	FILE *f1,*f2,*f3;
	char ch;
	
	f1=fopen("d:\\abc.txt","r");
	f2=fopen("d:\\sql.txt","w");
	f3=fopen("d:\\ouj.txt","w");
	
	while(ch!=EOF)
	{
		ch=getc(f1);
		if(ch=='a'||ch=='a'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
		{
			putc(ch,f2);
		}  
		else
		{
			putc(ch,f3);
		
		}
	}
	fclose(f1);
	fclose(f2);
	fclose(f3);
	printf("Transfered");
}
