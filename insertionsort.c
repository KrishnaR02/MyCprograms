#include<stdio.h>
main(){
	int i,j,k,n;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("\nEnter the elements[%d]:",i+1);
		scanf("%d",&a[i]);
	}for(i=0;i<n;i++){
		j=i;
		while(a[j-1]>a[j] && j>0){
			k=a[j];
			a[j]=a[j-1];
			a[j-1]=k;
			j=j-1;
		}
	}for(i=0;i<n;i++){
		printf("%d ,",a[i]);
	}
}
