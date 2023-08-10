#include<stdio.h>
#include<string.h>
main()
{
	int i,n=0,f=0,k;
	char ch,a[100],b[100];
	fflush(stdin);
	printf("Enter the name:");
	gets(a);
	n=strlen(a);
	printf("Enter the position to enter:");
	scanf("%d",&f);
	for(i=f+1;i<n;i--)
	{
		a[i]=a[i+1];
	}
	a[f]=0;
    printf("\n%s",a);
}
