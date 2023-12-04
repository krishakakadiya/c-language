#include<stdio.h>

struct student{
        int rollno;
        char name[100];
        int chem;
        int maths;
        int phy;
}
main(){

    struct student sd;
    int i,n,s=1;
    printf("enter number of students:");
    scanf("%d",&n);

    printf("enter details of student %d:\n",s);

    for(i=1;i<=n;i++){

        printf("ROLL NO:");
        scanf("%d",&sd.rollno);
        printf("NAME:");
        scanf("%s",&sd.name);
        printf("CHEMISTRY:");
        scanf("%d",&sd.chem);
        printf("MATHS:");
        scanf("%d",&sd.maths);
        printf("PHYSICS:");
        scanf("%d",&sd.phy);
        s++;
    }
    for(i=1;i<=n;i++){

        printf("%s(%d)\n",sd.name,sd.rollno);
        printf("%d\n",sd.chem);
        printf("%d\n",sd.maths);
        printf("%d\n",sd.phy);
        printf("%d/300\n",sd.chem+sd.maths+sd.phy);
        printf("%d%%\n",(sd.chem+sd.maths+sd.phy/3)*100);

    }
}