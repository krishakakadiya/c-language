#include<stdio.h>

main(){

    int n,sum=0,i;
    printf("enter any number:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){

        sum+=i;

    }
    printf("sum of all numbers:%d\n",sum);
}