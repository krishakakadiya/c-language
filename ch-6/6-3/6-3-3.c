#include<stdio.h>

main(){

    int n;

    printf("enter any number:");
    scanf("%d",&n);

    int i;

    for(i=1;i<=10;i++){
        printf("%d * %d : %d\n",n,i,n*i);
    }
}