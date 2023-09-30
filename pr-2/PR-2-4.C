#include<stdio.h>
#include<conio.h>
main()
{
	char c;
	clrscr();
	printf("M)monday\n");
	printf("T)tuesday\n");
	printf("W)wednesday\n");
	printf("t)thrusday\n");
	printf("F)friday");
	printf("S)saturday\n");
	printf("s)sunday\n");
	printf("enter your choice:");
	scanf("%c",&c);
	switch(c)
	{
	case 'M':
		printf("monday");
		break;
	case 'T':
		printf("tuesday");
		break;
	case 'W':
		printf("wednesday");
		break;
	case 't':
		printf("thrusday");
		break;
	case 'F':
		printf("friday");
		break;
	case 'S':
		printf("saturday");
		break;
	case 's':
		printf("sunday");
		break;
	default:
		printf("invalid character!!");
		break;
	}
	getch();
}