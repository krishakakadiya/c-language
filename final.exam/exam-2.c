#include<stdio.h>
main()
{
	char email[50];
	char pswd[50];
	int a,b,c,d,e,f,g,i;
	
	printf("enter your email Id:");
	scanf("%s",&email);
	printf("enter your password:");
	scanf("%s",&pswd);
	

	 if(email[i]>='a' && email[i]<='z'){
		a=1;
	}
	else if(email[i]>='0' && email[i]<='9'){
		b=1;
	}
	else {
		c=1;
	}
	if(a==1||b==1||c==1){
		printf("email is strong\n");
	}
	else
	{
		printf("email is not strong\n");
	}

	if(pswd[i]>=8){
		
		if(pswd[i]>='a' && pswd[i]<='z'){
		d=1;
	}
	else if(pswd[i]>='A' && pswd[i]<='z'){
		e=1;
	}
	else  if(pswd[i]>='0' || pswd[i]<='9'){
		f=1;
	}
	else{
		g==1;
	}
	if(d==1||e==1||f==1||g==1){
		printf("password is strong\n");
	}
	else
	{
		printf("password is not strong\n");
	}
}
}