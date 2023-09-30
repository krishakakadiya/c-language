#include<stdio.h>
#include<conio.h>
main(){
	int a,b;
	clrscr();
	printf("enter 1st angle:");
	scanf("%d",&a);
	printf("enter 2nd angle:");
	scanf("%d",&b);
	printf("3rd angle:%d",180-(a+b));
	getch();
}