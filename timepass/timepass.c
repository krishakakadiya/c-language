#include<stdio.h>

main()
{
	int i,j,k=143;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",k%93);
			k++;
		}
		printf("\n");
	}
}
