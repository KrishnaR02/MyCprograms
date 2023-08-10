#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
     int r,i,j=0,s=0,b;
     printf("Enter the range:");
     scanf("%d",&b);
     printf("Your range is from 0 to %d",b);
     srand(time(NULL));
     r = rand() % b+1;
     do
	 {
	 printf("\nEnter your Guess between 1 to %d:",b);
     scanf("%d",&i);
	 s++;
	 if(i<r)
	 {
	 	printf("\nBada socho beta.");
	 	printf("\nYour range is now from %d to %d",i,b);
	 }
	 else if(i>r)
	 {
	 	printf("\nItna bhi bada nai.");
	 	printf("\nThe number is not between %d to %d",i,b);
	 }
	 }while(i!=r);
     
     printf("\nTotal attemps:%d",s);
     printf("\nThe lucky number was:%d",r);
}
