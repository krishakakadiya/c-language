#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	clrscr();
	printf("enter 1st year:");
	scanf("%d",&a);
	printf("enter 2nd year:");
	scanf("%d",&b);
	while(a<=b)
	{
		if(a%4==0)
		{
		printf("%d\n",a);
		}
		a++;
	}
	getch();
}