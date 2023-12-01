#include<stdio.h>


struct employ{
    int Id;
    char name[50];
    int age;
    char role[100];
    char city[50];
    char exp[1000];
    char cmpname[1000];


};
main(){

    int i,n,s=2;
    printf("enter number of employs:");
    scanf("%d",&n);

    struct employ op[50];

     for(i=1;i<=n;i++){
        printf("enter your Id:");
        scanf("%d",&op->Id);
        printf("enter your name:");
        scanf("%s",&op->name);
        printf("enter your age:");
        scanf("%d",&op->age);
        printf("enter your role:");
        scanf("%s",&op->role);
        printf("enter your city:");
        scanf("%s",&op->city);
        printf("enter your experience:");
        scanf("%d",&op->exp);
        printf("enter your compny name:");
        scanf("%s",&op->cmpname);
    }
     printf("---------:DATA OF STUDENTS:1--------\n");

     for(i=1;i<=n;i++){
    
        printf("ID:%d\n",op->Id);
        printf("NAME:%s\n",op->name);
        printf("AGE:%d\n",op->age);
        printf("ROLE:%s\n",op->role);
        printf("CITY:%s\n",op->city);
        printf("EXPERIENCE:%d\n",op->exp);
        printf("COMPNY NAME:%s\n",op->cmpname);

         if(i<n){
            printf("----------:DATA OF STUDENT:%d-------\n",s);
             s++;
                }

    }



}