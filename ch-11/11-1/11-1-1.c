#include<stdio.h>

main(){

    int s;
    printf("enter array size:");
    scanf("%d",&s);

    int a[s],i;

    int *p[s];
    for(i=0;i<s;i++)
    {
        p[i] = &a[i];
    }

    for(i=0;i<s;i++)
    {
        printf("a[%d]:",i);
        scanf("%d",&a[i]);
    }

    
    printf("square of array\n");

    for(i=0;i<s;i++)
    {
        printf("a[%d]:%d\n",i,*p[i]*(*p[i]));
    }
}