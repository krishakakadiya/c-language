#include<stdio.h>

int main()
{
    int r,c;
    printf("Enter the number of rows and column: ");
    scanf("%d %d",&r,&c);

    int a[r][c],i,j,sum=0;
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
            printf("%d",a[i][j]);

        }
        printf("\n");
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j)
            {
                printf(" %d",a[i][j]);
            }
            else{
                printf(" ");
            }
        }
        printf(" \n");
        
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j)
            {
                sum+=a[i][j];
            }
        }
    }
    printf("%d",sum);
    
    

}