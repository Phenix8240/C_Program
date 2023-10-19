#include<stdio.h>
#include<conio.h>
#include<string.h>
struct employee{
    int id;
    char name[50];
    float salary;
}e1,e2;
int main(){
    printf("Enter 1st employee information:\n");
    printf("Enter Employee id:");
    scanf("%d",&e1.id);
    printf("Enter name:");
    scanf("%s",&e1.name);
    printf("Enter salary:");
    scanf("%f",&e1.salary);
    printf("%d\n",e1.id);
    printf("%s\n",e1.name);
    printf("%f\n",e1.salary);
    // printf("Enter 2nd employee information:\n");
    // printf("Enter Employee id:");
    // scanf("%d",&e2.id);
    // printf("Enter name:");
    // scanf("%s",&e2.name);
    // printf("Enter salary:");
    // scanf("%f",&e2.salary);
    // printf("%d\n",e2.id);
    // printf("%s\n",e2.name);
    // printf("%f\n",e2.salary);
    e2=e1;
    //Copying one structure to another Structure
    printf("%d\n",e2.id);
    printf("%s\n",e2.name);
    printf("%f\n",e2.salary);

    getch();
    return 0;
}