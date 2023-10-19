#include<stdio.h>
#include<string.h>
#include<conio.h>
struct Student{
    char name[50];
    int rollno;
    int maths,phy,chem;
    int avg;
};
int main(){
    int n,i;
    printf("Enter the no. of Students:");
    scanf("%d",&n);
    struct Student st[n];
    for(i=0;i<n;i++){
        printf("Enter the name:");
        scanf("%s",st[i].name);
        printf("Enter the rollno:");
        scanf("%d",&st[i].rollno);
        printf("Enter the marks in Maths,Physics and Chemistry");
        scanf("%d %d %d",&st[i].maths,&st[i].phy,&st[i].chem);
        st[i].avg=(st[i].maths+st[i].phy+st[i].chem)/3;
    }
    printf("Students Info List:\n");
    for(i=0;i<n;i++){
        printf("Student No.%d\n",i+1);
        printf("Name:%s\n",st[i].name);
        printf("RollNo:%d",st[i].rollno);
        printf("Avg Marks:%d",st[i].avg);    
    }
    getch();
    return 0;
}