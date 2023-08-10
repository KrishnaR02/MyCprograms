#include<stdio.h>
main()
{
	int i,j,k,n;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("Enter the elemnt[%d]:",i+1);
		scanf("%d",&a[i]);
	}for(i=0;i<n;i++){printf("\nIteration[%d]:",i+1);
		for(j=0;j<n-i;j++){
			if(a[j-1]>a[j]){
				k=a[j];
				a[j]=a[j-1];
				a[j-1]=k;
			}
		}for(i=0;i<n;i++){
			printf("%d,",a[i]);
		}
}for(i=0;i<n;i++){
		printf("%d,",a[i]);
	}
	
}
