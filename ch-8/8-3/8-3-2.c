#include<stdio.h>

int main()
{
    int r,c;
    printf("enter row size:");
    scanf("%d",&r);
    printf("enter column size:");
    scanf("%d",&c);

    int a[r][c],i,j,b[r][c];
    printf("      array A: \n    ");
    for(i=0; i<r; ++i) 
    {
        for(j=0;j<c;j++)
        {
            printf("a[%d][%d]:",i,j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("     array B:    \n  ");
    for(i=0; i<r; ++i) 
    {
        for(j=0;j<c;j++)
        {
            printf("b[%d][%d]:",i,j);
            scanf("%d", &b[i][j]);
        }
    }
    printf("   array c: \n ");
    
    for(i=0; i<r; ++i) 
    {
        for(j=0;j<c;j++)
        {
            printf("c[%d][%d]:%d\n",i,j,a[i][j]+b[i][j]);
     
        }
        
    }
    for(i=0; i<r; ++i) 
    {
        for(j=0;j<c;j++)
        {
            printf(" %d",a[i][j]+b[i][j]);

     
        }
        printf("\n");
        
    }
    


   

}