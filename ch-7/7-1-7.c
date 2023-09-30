#include<stdio.h>
main()
{
	int i,j;
	for (i='A';i<='E';i++)
	{
		for(j=i;j>='A';j--)
		{
			printf("%c",j);
		}
		printf("\n");
	}
}
