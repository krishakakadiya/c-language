#include<stdio.h>

int main()

{
    int n;
    printf("enter the size of array:");
    scanf("%d",&n);

    int i,a[n],b[n],c[n];
    printf("\n array a\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]:",i);
        scanf("%d",&a[i]);
    }
    printf("\n array b\n");
    for(i=0;i<n;i++)
    {
        printf("b[%d]:",i);
        scanf("%d",&b[i]);
    }
    printf("\n addition of a and b \n");
    for(i=0;i<n;i++)
    {
        printf("c[%d]:%d\n",i,a[i]+b[i]);
    }


   
}