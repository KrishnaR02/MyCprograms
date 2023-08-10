#include<stdio.h>
union stu
{
	int a,b,c;
};
main()
{
	union stu s1,s2;
	printf("Enter student1 roll num:");
	scanf("%d",&s1.a);
	printf("Enter student1 hindi marks:");
	scanf("%d",&s1.b);
	printf("Enter student1 english marks:");
	scanf("%d",&s1.c);

	printf("\nEnter student2 roll num:");
	scanf("%d",&s2.a);
	printf("\nEnter student2 hindi marks:");
	scanf("%d",&s2.b);
	printf("Enter student2 english marks:");
	scanf("%d",&s2.c);
	
	printf("\n\tROLL NUM\tHINDI MARKS\tENGLISH MARKS");
	printf("\n\t%d\t%d\t%d",s1.a,s1.b,s1.c);
	printf("\n\t%d\t%d\t%d",s2.a,s2.b,s2.c);
}
