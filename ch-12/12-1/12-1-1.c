#include<stdio.h>

struct student{
    int Id;
    char name[50];
    int age;
    char course[1000];
    char city[50];
    int standard;
    char school[1000]; 

};

main(){
    
    int i,n,s=2;
    struct student os;

    printf("enter the number of students :");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        printf("enter your Id:");
        scanf("%d",&os.Id);
        printf("enter your name:");
        scanf("%s",&os.name);
        printf("enter your age:");
        scanf("%d",&os.age);
        printf("enter your course:");
        scanf("%s",&os.course);
        printf("enter your city:");
        scanf("%s",&os.city);
        printf("enter your standard:");
        scanf("%d",&os.standard);
        printf("enter your school:");
        scanf("%s",&os.school);
    }
    printf("---------:DATA OF STUDENTS:1--------\n");

    for(i=1;i<=n;i++){

    printf("Id:%d\t",os.Id);
    printf("NAME:%s\t",os.name);
    printf("AGE:%d\t",os.age);
    printf("COURSE:%s\t",os.course);
    printf("CITY:%s\t",os.city);
    printf("STANDARD:%d\t",os.standard);
    printf("SCHOOL:%s\t",os.school);
    if(i<n){
    printf("----------:DATA OF STUDENT:%d-------\n",s);
    s++;
    }

    }

    

    
}