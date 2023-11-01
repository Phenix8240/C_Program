#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node{
    int n;
    struct node *l;
}*head;
void Print(){
    struct node *t;
   if(head==NULL){
    printf("List is Empty");
    return;
   }
   else{
    printf("\nCircular Linkedlist:\n");
    t=head;
    printf("%d",t->n);
    t=t->l;
    while(t!=head){
        printf(" %d ",t->n);
        t=t->l;
    }
   }
}
void Create(){
int n,i,a;
struct node*p,*t;
head=NULL;
    printf("\nEnter the No. of Nodes:");
    scanf("%d",&n);
for(i=1;i<=n;i++){
    p=(struct node *)malloc(sizeof(struct node));
    if(p==NULL){
            printf("\nList is Empty!");
            break;
        }
    printf("Enter the Data in Node %d:",i);
    scanf("%d",&a);
    p->n=a;
    p->l=NULL;
    if(head==NULL){
        head=t=p;
    }
    else{
        t->l=p;
        t=p;
    }
}
if(head!=NULL){
    t->l=head;
}
printf("\nLinked List Successfully Created!\n");
Print();
}
void InsertFirst(){
    int a;
    struct node*p,*t;
    if(head==NULL){
        printf("\nNode is Empty");
        return;
    }
    else{
        t=head;
        p=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter the Data in Node:");
        scanf("%d",&a);
        p->n=a;
        p->l=NULL;
        if(p==NULL){
            printf("\nMemory allocation Failed!");
            return;
        }
        else{
        while(t->l!=head){
            t=t->l;
        }
        p->l=head;
        t->l=p;
        head=p;
        }
    }
    printf("\nNode Successfully Inserted!\n");
    Print();
}
void InsertLast(){
    int a;
    struct node*p,*t;
    
    if(head==NULL){
        printf("\nNode is Empty");
        return;
    }
    else{
        t=head;
        p=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter the Data in Node:");
        scanf("%d",&a);
        p->n=a;
        p->l=NULL;
        if(p==NULL){
            printf("\nMemory allocation Failed!");
            return;
        }
        else{
        while(t->l!=head){
            t=t->l;
        }
        t->l=p;
        p->l=head;
        }
    }
    printf("\nNode Successfully Inserted!\n");
    Print();
}
void InsertAnyPosition(){
    int a,pos,i;
    struct node*p,*x,*y;
    p=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the Position:");
    scanf("%d",&pos);
    if(pos<1){
        printf("\nWrong Position!");
    }
    
    if(pos==1){
        InsertFirst();
        free(p);
    }
    else{
    x=head;
    printf("Enter the Data in Node:");
    scanf("%d",&a);
    p->n=a;
    p->l=NULL;
    if(head==NULL){
        head=p;
        p->l=head;
        return;
    }
    for(i=1;i<=pos-1 && x->l!=head;i++){
      y=x;
      x=x->l;
    }
    
    y->l=p;
    p->l=x;
    
    printf("\nNode Inserted Successfully!\n");
    Print();
    }
    }
void DeleteFirst(){
    struct node*t,*x;
    if(head==NULL){
        printf("\nList is Empty!");
        return ;
    }
    x=head;
    while(x->l!=head){
        x=x->l;
    }
    t=head;
    x->l=head->l;
    head=head->l;
    free(t);
    printf("\nNode Deleted Successfully!");
    Print();
}
void DeleteLast(){
  struct node*x,*y;
  if(head==NULL){
    printf("\nList is Empty!");
    return ;
  }
  x=head;
  while(x->l!=head){
    y=x;
    x=x->l;
  }
  y->l=x->l;
  free(x);
  printf("\nNode Deleted Successfully!\n");
  Print();
}
void DeleteAnyPosition(){
    int i,pos;
    struct node *x,*y;
    printf("\nEnetr the Position:");
    scanf("%d",&pos);
    if(pos<1){
        printf("Invalid Position!");
        return ;
    }
    if(pos==1){
        DeleteFirst();
        Print();
        }
        else{
        x=head;
        if(head==NULL){
            printf("\nList is Empty!");
            return;
        }
        for(i=1;i<=pos-1 && x->l!=head;i++){
            y=x;
            x=x->l;
        }
        y->l=x->l;
        free(x);
        }
        printf("\nNode Deleted Successfully!\n");
        Print();
}
int WhatToDo(){
int ch;
    while(1){
        printf("\n\n");
        printf("....Menu....");
        printf("\n 1.Creation\n 2.InsertFirst\n 3.InsertAnyPosition]\n 4.InsertLast\n 5.DeleteFirst\n 6.DeleteAnyPosition\n 7.DeleteLast\n 8.Display\n 9.Exit");
        printf("\nEnter Your Choice:");
        scanf("%d",&ch);
        switch(ch){
            case 1:Create();
                   break;
            case 2:InsertFirst();
                   break;
            case 3:InsertAnyPosition();
                   break;
            case 4:InsertLast();
                   break;
            case 5:DeleteFirst();
                   break;
            case 6:DeleteAnyPosition();
                   break;
            case 7:DeleteLast();
                   break;
            case 8:Print();
                   break;
            case 9:printf("\nExiting Program!");
                   return 0;
            default:printf("\nInvalid Option!");
        }
    }
}
int main(){
    // Create();
    // Print();
    // InsertLast();
    // Print();
    WhatToDo();
    getch();
    return 0;
}