#include<stdio.h>
#include<conio.h>
main()
{
	char a;
	clrscr();
	printf("enter any character:");
	scanf("%d",&a);
	if(a>='a'|| a<='z'|| a>='A'|| a<='Z')
	{
	printf("this is alphabet!!");
	}
	else if(a>='0'||a<='9')
	{
	printf("this is digit!!");
	}
	else
	{
	printf("this is special character!");
	}
	getch();
}