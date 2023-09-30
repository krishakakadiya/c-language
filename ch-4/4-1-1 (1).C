#include<stdio.h>
#include<conio.h>

main(){
	int a;
	clrscr();
	printf("enter any number:");
	scanf("%d",&a);
	printf("%d\n",a++);
	printf("%d",a);

	getch();
}