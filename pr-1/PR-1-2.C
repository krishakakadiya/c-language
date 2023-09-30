#include<stdio.h>
#include<conio.h>
main(){
	int HRA,DA,TA,n;
	clrscr();
	printf("enter base salary:");
	scanf("%d",&n);
	printf("enter HRA:");
	scanf("%d",&HRA);
	printf("enter DA:");
	scanf("%d",&DA);
	printf("enter TA:");
	scanf("%d",&TA);

	printf("Rs:%d",n+HRA+DA+TA);


	getch();
}