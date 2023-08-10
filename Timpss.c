#include<stdio.h>
main(){
	char a[100],b[100];
	char g[]={'_','_','_','_','_','_','_','_','_'};
	printf("Enter the name of player1:");
	gets(a);
	printf("Enter the name of player2:");
	gets(b);
	int i=0,j=0,n;
	for(i=0;i<9;i++){
		if(i%2==0){
			printf("\nMove[%d]:[%s]'s turn:",i+1,a);
			scanf("%d",n);
		    g[n-1]='O';
		    printf("\n|%c| |%c| |%c|",g[0],g[1],g[2]);
		    printf("\n|%c| |%c| |%c|",g[3],g[4],g[5]);
		    printf("\n|%c| |%c| |%c|",g[6],g[7],g[8]);
		}else{
			printf("\nMove[%d]:[%s]'s turn:",i+1,b);
			scanf("%d",n);
		    g[n-1]='X';
		    printf("\n|%c| |%c| |%c|",g[0],g[1],g[2]);
		    printf("\n|%c| |%c| |%c|",g[3],g[4],g[5]);
		    printf("\n|%c| |%c| |%c|",g[6],g[7],g[8]);
		}
		if(g[0]=='O'&&g[1]=='O'&&g[2]=='O'||g[3]=='O'&&g[4]=='O'&&g[5]=='O'||g[6]=='O'&&g[7]=='O'&&g[8]=='O'||g[0]=='O'&&g[3]=='O'&&g[6]=='O'||g[1]=='O'&&g[4]=='O'&&g[7]=='O'||g[2]=='O'&&g[5]=='O'&&g[8]=='O'||g[0]=='O'&&g[4]=='O'&&g[8]=='O'||g[2]=='O'&&g[4]=='O'&&g[6]=='O'){
			printf("\n%s is the winner.",a);
			j=1;
			break;
		}else if(g[0]=='X'&&g[1]=='X'&&g[2]=='X'||g[3]=='X'&&g[4]=='X'&&g[5]=='X'||g[6]=='X'&&g[7]=='X'&&g[8]=='X'||g[0]=='X'&&g[3]=='X'&&g[6]=='X'||g[1]=='X'&&g[4]=='X'&&g[7]=='X'||g[2]=='X'&&g[5]=='X'&&g[8]=='X'||g[0]=='X'&&g[4]=='X'&&g[8]=='X'||g[2]=='X'&&g[4]=='X'&&g[6]=='X'){
			printf("\n%s is the winner.",b);
			j=1;
			break;
		} 	
	}if(j==0){
		printf("\nTie");
	}
}
