#include<stdio.h>

main(){

    int a,b;

    int *ap;
    int *bp;

    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);

    ap = &a;
    bp = &b;

    *ap=a+b;
    *bp=a-b;
    *ap=a-b;

    printf("A:%d\n",*ap);
    printf("B:%d",*bp);

    


    



}