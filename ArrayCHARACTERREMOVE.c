#include<stdio.h>
main()
{
	int i,n,a;
	char name[100],b[100];
	printf("Enter the word:");
	gets(name);
	printf("Enetr the character position to remover:");
	scanf("%d",&a);
	for(i=a;i<n;i++)
	{
		name[i]=name[i+1];
		printf("%c",name);
    }
    printf("%c",name);
}



