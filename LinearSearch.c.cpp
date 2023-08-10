#include<stdio.h>
main(){
	int i,k,n,b=0;
	printf("Enter the size of array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("Enter the element[%d]:",i+1);
		scanf("%d",&a[i]);
	}printf("Enter the searching element:");
	scanf("%d",&k);
	for(i=0;i<n;i++){
		if(a[i]==k){
			printf("Element found at [%d]",i);
			b=1;
		}
	}if(b==0){
		printf("Element not found.");
	}
}
