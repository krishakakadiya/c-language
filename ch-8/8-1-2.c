#include<stdio.h>

int main()
{
    int n;
    printf("enter size of array:");
    scanf("%d",&n);

    int i,a[n],sum=0;

    for(i=0;i<n;i++)
    {
        printf("a[%d]:",i);
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("%d",sum/n);
}