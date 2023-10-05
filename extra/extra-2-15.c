#include<stdio.h>

main()
{
	int i,j,s;
	for(i='E';i>='A';i--)
	{
		for(s=1;s<='E'-i;s++)
		{
		    printf(" ");
		}
		for(j='A';j<=i;j++)
		{
			printf("%c",j);
		}
		printf("\n");
		
	}
	
}
