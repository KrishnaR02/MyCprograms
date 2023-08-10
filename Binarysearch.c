#include<stdio.h>
main()
{
	int n,i,a[100];
	printf("Enter the number of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter element[%d]:",i+1);
		scanf("%d",&a[i]);
	}int l,h,j,m,k;
	printf("Enter the element to search:");
	scanf("%d",&k);
	l=a[0];
	h=a[n-1];
	while(l<=h){m=(l+h)/2;
		if(m>k){
			h=m-1;
		}else if(m<k){
			l=m+1;
		}else{
			j=1;
			break;
		}
	}if(j==0){
		printf("Not found.");
	}else{
		printf("Found.");
	} 
}
