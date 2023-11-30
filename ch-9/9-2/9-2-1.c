#include<stdio.h>

main(){

    char pswd[50];
    int i,p,q,r,s;

    printf("create your new password:");
    scanf("%s",&pswd);

    for(i=0;i<50;i++){
        if(pswd[i]>='a'|| pswd[i]<='z'){
        p==0;
    }
    else if(pswd[i]>='A'|| pswd[i]<='Z'){
        q==0;

    }
    else if(pswd[i]>='0' || pswd[i]<='9'){
        r==0;

    }
    else{
        s==0;

    }
    }
    

    if(p==0 && q==0 && r==0 && s==0){
        printf("password is strong ");
    }
    else{
        printf("password is not strong");
    }
}