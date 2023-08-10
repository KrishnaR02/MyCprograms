#include<stdio.h>
main(){
	int i,n,a[100],s=0;
	printf("Enter the total numbers:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the num[%d]:",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			s+=a[i];
		}
	}
	printf("Sum of even:%d",s);
}
	
