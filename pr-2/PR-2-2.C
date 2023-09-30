#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	clrscr();
	printf("enter any number:");
	scanf("%d",&a);
	if(a%2==0)
	{
	printf("this number is even!!");
	}
	else
	{
	printf("this number is odd!!");
	}
	getch();
}
