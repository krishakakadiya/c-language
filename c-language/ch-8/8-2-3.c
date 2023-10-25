#include<stdio.h>

int main()
{
    int s;
    printf("enter size of array:");
    scanf("%d",&s);
    int a[s],i;

    for(i=0;i<s;i++)
    {
        printf("a[%d]:",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<s;i++)
    {
        printf("%d\n",a[i]*a[i]);
    }

}