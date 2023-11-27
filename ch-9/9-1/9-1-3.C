#include<stdio.h>

main(){

    char name[20];
    int i;

    printf("enter your name :");
    scanf("%s",&name);

    for(i=0;i<20;i++){

        if(name[i]>='a' && name[i]<='z'){
            name[i]-=32;
        }
        else if(name[i]>='A' && name[i]<='Z'){
            name[i]+=32;
        }
    }


    printf("%s",name);

}