#include<stdio.h>
main()
{
	char a;
	printf("Enter the character");
	scanf("%c",&a);
    if(a>=97)
    {
    	printf("%c",a-32);
	}else{
		printf("%c",a+32);
	}
}

