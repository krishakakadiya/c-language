#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	clrscr();
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	printf("enter c:");
	scanf("%d",&c);
	(a<b)
		?(a<c)
			?printf("a is small")
			:printf("c is small")
		:(b<c)
			?printf("b is small")
			:printf("c is small");
	getch();
}

