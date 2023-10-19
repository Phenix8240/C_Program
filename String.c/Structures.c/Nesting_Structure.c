#include<stdio.h>
#include<string.h>
#include<conio.h>
typedef struct employee{
    int id;
    char name[20];
    int age;
    float salary;
}emp;
typedef struct specialemployee{
    emp normal;
    float bonush;
}spemp;
int main(){
    emp a,b;
    spemp c;
    printf("Enter the Employee id:");
    scanf("%d",&a.id);
    printf("Enter Name:");
    scanf("%s",&a.name);
    printf("Enter age:");
    scanf("%d",&a.age);
    printf("Enter salary:");
    scanf("%f",&a.salary);

    printf("Enter the Employee id:");
    scanf("%d",&c.normal.id);
    printf("Enter Name:");
    scanf("%s",&c.normal.name);
    printf("Enter age:");
    scanf("%D",&c.normal.age);
    printf("Enter salary:");
    scanf("%f",&c.normal.salary);
    printf("Enter Bonus:");
    scanf("%f",&c.bonush);
    printf("\n***Employee Information List***\n");
    
    printf("Name:%s\n",a.name);
    printf("ID No:%d\n",a.id);
    printf("Age:%d\n",a.age);
    printf("Salary:%f$\n",a.salary);
    printf("\n");
    printf("Name:%s\n",c.normal.name);
    printf("ID No:%d\n",c.normal.id);
    printf("Age:%d\n",c.normal.age);
    printf("Salary:%f$\n",c.normal.salary);
    printf("Bonus:%f$\n",c.bonush);

    getch();
    return 0;
}

