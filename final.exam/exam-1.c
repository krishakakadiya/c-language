#include<stdio.h>

void sum(int i,int n)
{	
		int s=0;	
			
		printf("enter any number:");
		scanf("%d",&n);
		for(i=1;i<=n;i++){
		
		s+=i;		
		}
		printf("sum:%d\n",s);
		sum(i,n);
		
}
main(){
	
	int n,i;
	
	sum(i,n);
	
	
	
}