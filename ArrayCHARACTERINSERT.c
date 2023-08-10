#include<stdio.h>
#include<string.h>
main()
{
	int i,n=0,f=0,k;
	char ch,a[100],b;
	
	printf("Enter the name:");
	gets(a);
	n=strlen(a);
	fflush(stdin);
	printf("Enter the character to insert:");
	scanf("%c",&b);
	printf("Enter the position to enter:");
	scanf("%d",&f);
	for(i=n;i>=f;i--)
	{
		a[i]=a[i-1];
	}
	a[f-1]=b;
    printf("\n%s",a);
}

