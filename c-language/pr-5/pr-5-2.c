#include<stdio.h>

int main()
{
    int r,c;
    printf("enter size of row:");
    scanf("%d",&r);
    printf("enter column size:");
    scanf("%d",&c);

    int a[r][c],i,j,large=0;
    
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
            if(a[i][j]>large)
            {
                large=a[i][j];
            }
            
        }
    }
    printf("%d",large);
    
    
}