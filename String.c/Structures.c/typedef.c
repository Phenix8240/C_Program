#include<stdio.h>
#include<string.h>
#include<conio.h>

typedef struct cricketer{
        char firstname[15];
        char lastname[15];
        int age;
        int no0fMatches;
        float average;
    }crickter;

int main(){
    int i;
    
   crickter a[3];
   for( i=0;i<3;i++){
    scanf("%s",a[i].firstname);
    scanf("%s",a[i].lastname);
    scanf("%d",&a[i].age);
    scanf("%d",&a[i].no0fMatches);
    scanf("%f",&a[i].average);
 }
 for( i=0;i<3;i++){
    printf("Name:%s %s\n",a[i].firstname,a[i].lastname);
    printf("Age:%d\n",a[i].age);
    printf("Mathches played:%d\n",a[i].no0fMatches);
    printf("Avg Run:%f\n",a[i].average);
 }


    getch();
    return 0;
}