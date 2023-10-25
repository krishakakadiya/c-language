#include<stdio.h>

int main()
{
    int r,c;
    printf("enter row :");
    scanf("%d",&r);
    printf("enter column:");
    scanf("%d",&c);
    int i,j,a[r][c],sum=0,avg=0;

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
            sum+=a[i][j];
            avg=sum/(r*c);

        }

    }
    printf("%d",avg);
    
    
    
        
        
    
}