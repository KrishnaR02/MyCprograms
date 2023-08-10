#include<stdio.h>
void swap(int x,int y)
{
	int t;
	t=x;
	x=y;
	y=t;
	return;
};
main()
{
	int x=2,y=1;
	printf("Before swap:%d %d",x,y);
	swap(x,y);
	printf("\n%d %d",x,y);
}
