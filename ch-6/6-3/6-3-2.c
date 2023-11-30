#include<stdio.h>

main(){

    int n,fact=1,i;
    printf("enter any number:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){

        fact*=i;

    }
    printf("sum of all numbers:%d\n",fact);
}