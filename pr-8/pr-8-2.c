#include<stdio.h>

main(){

    int n,i,j;
    printf("enter size of array:");
    scanf("%d",&n);

    int a[n][n];
    int *ptr;

    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++){
            printf("a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++){
             ptr=&a[i][j];         
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++){
            printf("a[%d][%d]:%d\n",i,j,(*ptr)*(*ptr)*(*ptr));
        }
    }
    
    
}