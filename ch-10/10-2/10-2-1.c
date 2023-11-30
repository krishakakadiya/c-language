#include<stdio.h>

main(){

    int s;

    printf("enter size of array:");
    scanf("%d",&s);

    int a[s],i,sum=0;

    for(i=0;i<s;i++){

        printf("a[%d]:",i);
        scanf("%d",&a[i]);
    }

    
    for(i=0;i<s;i++){

        sum+=a[i];
    }

    printf("sum:%d",sum);

}