#include<stdio.h>
main()
{
	int a=7,b=2;
	printf("Before pre-incrimenting :");
	printf("\nValue of a=%d",a);
	printf("\nValue of b=%d",b);
    b=++a;
    printf("\nAfter pre-incrimneting:");
    printf("\nValue of a=%d",a);
    printf("\nValue of b=%d",b);
}
