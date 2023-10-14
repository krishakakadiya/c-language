#include<stdio.h>

int main()
{
    int n;
    printf("enter size of array:");
    scanf("%d",&n);

    int i,a[n];
    for(i=0;i<n;i++)
    {
        printf("a[%d]:",i);
        scanf("%d",&a[i]);
    }

    printf("length of array is :%d",n);
}