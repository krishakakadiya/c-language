#include<stdio.h>

struct info{

	char name[50];
	int cn;
	int pn;
	char pname[100];
	int nqty;
};
main()
{	
	struct info io;
	
	printf("enter your name :");
	scanf("%s",&io.name);
	printf("enter your contact no.:");
	scanf("%d",&io.cn);
	printf("enter your product no.:");
	scanf("%d",&io.pn);
	printf("enter your product name:");
	scanf("%s",&io.pname);
	printf("enter your number of quantity:");
	scanf("%d",&io.nqty);
	
}