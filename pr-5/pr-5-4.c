#include<stdio.h>

int main()
{
    int r,c;
    printf("enter row:");
    scanf("%d",&r);
    printf("enter column:");
    scanf("%d",&c);

    int i,j,a[r][c];

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {     
         printf("a[%d][%d]:",i,j);
         scanf("%d",&a[i][j]);
        }

    }
    int row,col,rsum=0,csum=0;
                printf("enter row:");
                scanf("%d",&row);
    for(i=0;i<r;i++)
    {
        for (j=0;j<c;++j)
        {
            if(i==row)
            {
               
                printf("rows:%d\n",a[i][j]);
            }
        }
    }
                  printf("enter column:");
                  scanf("%d",&col);
      for(i=0;i<r;i++)
    {
        for (j=0;j<c;++j)
        {
            if(j==col)
            {
               
            printf("column:%d\n",a[i][j]);
          
            }
        }
    }
    for(i=0;i<r;i++)
    {
        for (j=0;j<c;++j)
        {
            if(i==row)
            {
                rsum+=a[i][j];
            }
                
        }
    }
    printf("rows:%d\n",rsum);
     for(i=0;i<r;i++)
    {
        for (j=0;j<c;++j)
        {
         if(j==col)
         {
             csum+=a[i][j];
         }
           
        }
    }
    printf("column:%d\n",csum);

    
         
          
}