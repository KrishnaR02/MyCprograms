#include<stdio.h>
#include<string.h>
main()
{
	int j;
	char a[100],b;
	printf("Enter the word:");
	gets(a);
	b=puts(strrev(a));
	j=strcmp(b,a);
	if(j==0){
		printf("Palindrome");
	}else{
		printf("Not");
	}
}
