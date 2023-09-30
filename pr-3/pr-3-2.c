#include<stdio.h>
main()
{
	int a;
	printf("enter any number:");
	scanf("%d",&a);
	if(a>=0 && a<=9)
	{
		printf("total number of digit:1");
	}
	else if(a>=10 && a<=99)
	{
			printf("total number of digit:2");
	}
	else if(a>=100 && a<=999)
	{
			printf("total number of digit:3");
	}
		else if(a>=1000 && a<=9999)
	{
			printf("total number of digit:4");
	}
		else if(a>=10000 && a<=99999)
	{
			printf("total number of digit:5");
	}
		else if(a>=100000 && a<=999999)
	{
			printf("total number of digit:6");
	}
	else
	{
		printf("");
	}
	
}
