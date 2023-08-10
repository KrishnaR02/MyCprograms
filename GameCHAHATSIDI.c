#include<stdio.h>
#include<time.h>
#include<stdlib.h>
main()
{
	int i,f,t=0,r=0;
	char a[100],b[100];
	printf("Player 1:");
	gets(a);
	printf("\nPlayer 2:");
	gets(b);
	while(i<=100 && f<=100)
	{
		t++;
		if(t%2==0 && i<100)
		{
			printf("\nRolling dice");
			srand(time(NULL));
            int r = rand() % 6 + 1;
            printf("\n%d", r);
            i=i+r;
		}
		else if(t%2!=0 && f<100)
		{
			printf("\nRolling dice");
			srand(time(NULL));
            int r = rand() % 6 + 1;
            printf("\n%d", r);
            f=f+r;
		}
		if(i==100)
		{
			printf("\n%s is the winner.",a);
			break;
		}
		else if(f==100)
		{
			printf("\n%s is the winner.",b);
			break;
		}
	}
	printf("\nYour scores are:");
	printf("\n%d",i);
	printf("\n%d",f); 
}
