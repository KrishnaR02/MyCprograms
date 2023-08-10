#include<stdio.h>

main()
{
	int i=0,n,j=0;
    char game[]={'_','_','_','_','_','_','_','_','_'};
    char p1[100],p2[100];
    printf("\nEnter player1 name:");
    gets(p1);
    printf("\nEnter player2 name:");
    gets(p2);
    while(i<9 && i>=0)
    {
    	if(i%2==0)
    	{
    		printf("\nmove[%d]:%s your turn",i+1,p1);
    		printf("\nEnter the position:");
    		scanf("%d",&n);
    		game[n-1]='O';
    printf("\n\t|%c|\t|%c|\t|%c|",game[0],game[1],game[2]);
    printf("\n\t|%c|\t|%c|\t|%c|",game[3],game[4],game[5]);
    printf("\n\t|%c|\t|%c|\t|%c|",game[6],game[7],game[8]);
    		
		}
		else
		{
			printf("\nmove[%d]:%s your turn.",i+1,p2);
			printf("\nEnter the position:");
			scanf("%d",&n);
			game[n-1]='X';
    printf("\n\t|%c|\t|%c|\t|%c|",game[0],game[1],game[2]);
    printf("\n\t|%c|\t|%c|\t|%c|",game[3],game[4],game[5]);
    printf("\n\t|%c|\t|%c|\t|%c|",game[6],game[7],game[8]);
		}
		i++;
		if(game[0]=='X' &&game[2]=='X' &&game[1]=='X'||game[3]=='X' &&game[4]=='X' &&game[5]=='X'||game[6]=='X' &&game[7]=='X' &&game[8]=='X'||game[0]=='X' &&game[3]=='X' &&game[6]=='X'||game[1]=='X' &&game[4]=='X' &&game[7]=='X'||game[2]=='X' &&game[5]=='X' &&game[8]=='X'||game[0]=='X' &&game[4]=='X' &&game[8]=='X'||game[2]=='X' &&game[4]=='X' &&game[6]=='X')
		{
			printf("\n%s is the winner.",p2);
			j=1;
			break;
		}
		else if(game[0]=='O' &&game[2]=='O' &&game[1]=='O'||game[3]=='O' &&game[4]=='O' &&game[5]=='O'||game[6]=='O' &&game[7]=='O' &&game[8]=='O'||game[0]=='O' &&game[3]=='O' &&game[6]=='O'||game[1]=='O' &&game[4]=='O' &&game[7]=='O'||game[2]=='O' &&game[5]=='O' &&game[8]=='O'||game[0]=='O' &&game[4]=='O' &&game[8]=='O'||game[2]=='O' &&game[4]=='O' &&game[6]=='O')
		{
			printf("\n%s is the winner.",p1);
			j=1;
			break;
		}
	}
	if(j==0)
	{
		printf("\nIts a tie try again.");
	}
}
