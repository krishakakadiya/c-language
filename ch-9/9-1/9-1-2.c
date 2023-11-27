#include<stdio.h>

main(){

    char name[20];
    int i;

    printf("enter your name :");
    scanf("%s",&name);
    for(i=0;i<=name[i]!=0;i++)
    {
        
    if(name[i]>=97 || name[i]<=120)
    {
        name[i]+=32;
  
    }
    }
    printf("%s",name);

}