#include<stdio.h>

main()
{
	int n1,n2,n3,n;
	n1=0;
	n2=1;
	printf("enter any number:");
	scanf("%d",&n);
	printf("%d\n%d\n",n1,n2);
	while(n>=1)
	{
		n3=n1+n2;
		printf("%d\n",n3);
		n1=n2;
		n2=n3;
		n--;
	}
	
}
