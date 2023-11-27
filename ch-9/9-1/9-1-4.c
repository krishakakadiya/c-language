#include<stdio.h>

main(){

    char name[20];
    
    printf("enter your name :");
    scanf("%s",&name);
    
         if(name[0]>='a' && name[0]<='z'){
            name[0]-=32;
        }
    printf("%s",name);

}