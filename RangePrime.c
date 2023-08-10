#include<stdio.h>

main()
{
	int i,n,j,k=0;
	printf("Enter the limi=>");
	scanf("%d",&n);
	
	printf("1 is prime\n2 is prime\n3 is prime");
    for(i=3;i<=n;i++)
    {
    	k=1;
    	for(j=2;j<i;j++)
    	{
    		if(i%j==0)
    		{
    			k=0;
    			break;
			}
		}
		if(k==1)
		{
			printf("\n%d is prime",i);
		}
		else
		{
			printf("\n%d is consonant",i);
		}
	}
}
