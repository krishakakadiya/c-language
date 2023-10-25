#include<stdio.h>

int main()
{
    int n;
    printf("emter size of array:");
    scanf("%d",&n);

    int a[n],i;
    for(i=0; i<n; i++)
    {
        printf("a[%d]:",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            printf("negative number :%d\n",a[i]);

        }
        
    }
}