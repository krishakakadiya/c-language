#include<stdio.h>
#include<conio.h>

main(){
	int a,b;
	clrscr();
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);

	printf("addition :%d\n",a+b);
	printf("subtraction:%d\n",a-b);
	printf("multiplication:%d\n",a*b);
	printf("division:%d\n",b/a);
	printf("modulus:%d",b%a);

	getch();
}