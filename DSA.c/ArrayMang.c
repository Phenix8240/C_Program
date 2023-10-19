#include<stdio.h>
#include<conio.h>
int Creation(int a[],int *n){
    while(1){
    printf("Enter the Size of the Array:");
    scanf("%d",n);
    if(*n<0  || *n>100){
    printf("Invalid Input!");
    }else{
        break;
    }
    }
    for(int i=0;i<*n;i++){
        while(1){
        int v;
        printf("Enter the element at %d position:",i+1);
        scanf("%d",&v);
        if(v==-999){
             printf("Invalid Input!\n"); 
        }
        else{
           a[i]=v;
            break;
        }
        }
    }
   return 1;
}
void Display(int a[],int *n){
    printf("Display Array:\n");
    for(int i=0;i<*n;i++){
        if(a[i]==-999){
            printf(" (O-O) ");
        }else{
        printf(" %d ",a[i]);
        }
    }
    printf("\n");
}
void Insertion(int a[],int *n){
    int m,x,i,pos,ch;
    while(1){
        printf("\nEnter the number of Elements you want to Insert: ");
        scanf("%d",&m);
        if(m<=0){
        printf("Invalid Input!");
        }
        else{
            break;
        }
    }
    for(int i=1;i<=m;i++){
        while(1){
        printf("\nEnter the element you want to insert(except -999):");
        scanf("%d",&x);
        if(x==-999){
             printf("Invalid Input!\n");
        }
        else break;
        }
        while(1){
        printf("\nEnter the position:");
        scanf("%d",&pos);
        if(pos<0 ||pos>100){
            printf("Invalid Input!");
        }
        else break;
        }
        if(*n<=pos){
           while(*n<pos){
            a[*n]=-999;
            (*n)++;
           }
        }
        if(a[pos-1]!=-999){ 
              while(1){
            printf("\nThere is already an element.");
            printf("\nDo You want to override this Position:");
            printf("\n1.Yes\n2.No\n");
            scanf("%d",&ch);
                switch(ch){
                    case 1:a[pos-1]=x;
                           Display(a,n);
                           break;
                    case 2:a[*n]=x;
                           (*n)++;
                           Display(a,n);
                           break;
                    default:printf("\nInvalid option!");
                                
                }
                if(ch==1 || ch==2){
                    break;
                }
            }
        }else{
            a[pos-1]=x;
            Display(a,n);
        }
    }
}
void Deletion(int a[],int *n){
    int i,pos,m;
  while(1){
        printf("\nEnter the number of Elements you want to Delete:");
        scanf("%d",&m);
        if(m<=0){
        printf("Invalid Input!");
        }
        else{
            break;
        }
    }
    for(i=1;i<=m;i++){
        while(1){
        printf("\nEnter the position:");
        scanf("%d",&pos);
        if(pos<0 || pos>100){
            printf("Invalid Input!");
        }
        else break;
        }
        if(a[pos-1]==-999){
            printf("Position is Already Empty!");
        }
        else{
            a[pos-1]=-999;
        }
        Display(a,n);
    }
}
int WhatToDo(){
int n=0,a[100],i,f=0,ch;
    
    while(1){
    printf("\nMenu");
    printf("\n1.Creation\n2.Insertion\n3.Deletion\n4.Display\n5.Exit\n");
    scanf("%d",&ch);
    switch(ch){
    case 1: if (f) {
                    printf("Array is already created!\n");
                     Display(a, &n);
                } else {
                    f = Creation(a, &n);
                    if (f) {
                        printf("Array Created Successfully:\n");
                        Display(a, &n);
                    }
                }
    break;
    case 2:if (f) {
        Insertion(a,&n);
    } else {
        printf("Array is Not created!\n");
    }
    break;
    case 3:if (f) {
        Deletion(a,&n);
    } else {
        printf("Array is Not created!\n");
    }
    break;
    case 4: if (f) {
        Display(a,&n);
    } else {
        printf("Array is Not created!\n");
    }
    break;
    case 5:printf("\nExiting the Program!");
           return 0;
    default:printf("Invalid option!");
    }
    }
}
int main(){
    WhatToDo();
    getch();
    return 0;
}