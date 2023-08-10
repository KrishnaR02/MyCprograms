#include<stdio.h>
main()
{  
    int i,j,k,l,n;      
    printf("enter the range=");    
    scanf("%d",&n);    
    for(i=1;i<=n;i++)    
    {    
        for(j=n;j>=i;j--)    
        {    
            printf(" ");    
        }     
        for(k=1;k<=i;k++)     
        {    
            printf("%d ",k);    
        }    
        printf("\n");    
    }     
}
