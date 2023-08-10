#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
     int r,i,j=0,s=0;
     srand(time(NULL));
     r = rand() % 30+1;
     
     do
	 {
     printf("Enter your Guess between 1 to 30:");
     scanf("%d",&i);
	 s++;
	 }while(i!=r);
     
     printf("\nTotal attemps:%d",s);
     printf("\nThe lucky number was:%d",r);
}
