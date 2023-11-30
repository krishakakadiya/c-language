#include<stdio.h>

main(){

    int n;
    printf("enter size of array:");
    scanf("%d",&n);

    int a[n],i,x=n-1;
    int *ptr[n];
    int **ptr2[n];

    
    for(i=0;i<n;i++){
        ptr[i]=&a[i];

    }

    for(i=0;i<n;i++){
        printf("a[%d]:",i);
        scanf("%d",&a[i]);
    }

    printf("----REVERSE----\n");
    for(i=0;i<n;i++){

        ptr2[x]=&ptr[i];
        printf("a[%d]:%d\n",i,*ptr[x]);
        x--;
    }



    
    

}