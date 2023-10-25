#include<stdio.h>

int main()
{
    int r,c;
    printf("enter row:");
    scanf("%d",&r);
       printf("enter column:");
    scanf("%d",&c);

    int a[r][c],i,j;

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
             printf("a[%d][%d]:",i,j);
             scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
           printf("%d",a[j][i]);
        }
        printf("\n");
    }
    
    
}