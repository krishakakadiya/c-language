#include<stdio.h>
#include<conio.h>
main(){
	int a=35,b=23;
	clrscr();
	printf("addition of %d and %d:%d\n",a,b,a+b);
	printf("subtraction of%d and %d:%d\n",a,b,a-b);
	printf("multiplication of %d and %d:%d\n",a,b,a*b);
	printf("division of %d and %d:%d\n",a,b,a/b);
	printf("reminder of %d and %d:%d\n\n",a,b,a%b);

	printf("%d+%d:%d\n",a,b,a+b);
	printf("%d-%d:%d\n",a,b,a-b);
	printf("%d*%d:%d\n",a,b,a*b);
	printf("%d/%d:%d\n",a,b,a/b);
	printf("%d%%%d:%d",a,b,a%b);

	getch();

}
