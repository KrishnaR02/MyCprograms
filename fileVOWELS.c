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
		if(ch=='a'||ch=='a'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
		{
			printf("%c",ch);
		}
	}
	fclose(f1);
}
