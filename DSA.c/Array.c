#include <stdio.h>
#include<conio.h>
void Creation(int a[],int n){
printf("Taking input an Array:\n");
for(int i=0;i<n;i++){
printf("Enter the element at %d position:",i+1);
scanf("%d",&a[i]);
}
}
void Insertion(int a[],int *n){
    int x,pos;
    printf("Enter the element you want to insert:");
    scanf("%d",&x);
    printf("Enter the position:");
    scanf("%d",&pos);
    if(pos<0 || pos>*n){
        printf("Invalid Postion!");
        return ;
    }
    for(int i=(*n);i>=pos;i--){
    a[i]=a[i-1];
    }
    a[pos-1]=x;
    (*n)++;
     printf("\nElement is Inserted Successfully!\n");
}

void Deletion(int a[],int *n){
    int pos;
    printf("Enter the position of element You want to Delete:");
    scanf("%d",&pos);
    if(pos<0 || pos>*n){
        printf("Invalid Postion!");
        return ;
    }
    for(int i=pos-1;i<(*n)-1;i++){
        a[i]=a[i+1];
    }
    (*n)--;
    printf("\nElement is Deleted Successfully!\n");
}
void Display(int a[],int n){
    printf("\nPrinting Array:\n");
    for(int i=0;i<n;i++){
        printf(" %d ",a[i]);
    }
}
int WhatToDo(){
int a[100],n,ch;
    while(1){
    printf("\n Menu:\n");
    printf("1.Creation\n2.Insertion\n3.Deletion\n4.Dispaly\n");
    printf("Enter Your Choice:");
    scanf("%d",&ch);
    switch(ch){
        case 1:printf("Enter the size of array:");
               scanf("%d",&n);
               Creation(a,n);
               break;
        case 2:if(n>0){
                   Insertion(a,&n);
               }
               else{
                printf("Please create the array first!\n");
               }
               break;
        case 3:if(n>0){
                   Deletion(a,&n);
               }
               else{
                printf("Please create the array first!\n");
               }
               break;
        case 4:if(n>0){
                   Display(a,n);
               }
               else{
                printf("Please create the array first!\n");
               }
               break;
        case 5:printf("Exiting the Program!");
               return 0;
               break;
        default:printf("Invalid option");
    }
    }
}
int main(){
    WhatToDo();
  getch();
  return 0;
}