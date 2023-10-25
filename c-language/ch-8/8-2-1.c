#include<stdio.h>

int main()
{
    int as,bs;

    printf("enter array A size:");
    scanf("%d",&as);
    printf("enter array B size :");
    scanf("%d",&bs);

    int a[as],b[bs],c[as+bs],i;

    for(i=0; i<as;i++)
    {
        printf("a[%d]:",i);
        scanf("%d",&a[i]);

    }
    for(i=0;i<bs;i++)
    {
        printf("b[%d]:",i);
        scanf("%d",&b[i]);
    }
    for(i=0;i<as;i++)
    {
        c[i]=a[i];
    }
    
    for(i=0;i<bs;i++)
    {
        c[i+as]=b[i];
    }
    for(i=0;i<as+bs;i++)
    {
        printf("c[%d]:%d\n",i,c[i]);
    }


}