#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node {
    int n;
    struct node *l;
};
struct node*front=NULL;
struct node*rear=NULL;
void Insert(){
    int x;
    struct node *p;
    if(p==NULL){
        printf("\nList is Empty!");
    }
    else{
    p=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the Data in Node:");
    scanf("%d",&x);
    p->n=x;
    p->l=NULL;
    if(front==NULL && rear==NULL){
        front=rear=p;
    }
    else{
        rear->l=p;
        rear=p;
    }
    }
}
void Delete(){
    struct node *t;
    t=front;
    if(front==NULL && rear==NULL){
        printf("\nQueue is EMpty!");
    }
    else{
        printf("\nDeQueue Data:%d",front->n);
        front=front->l;
        free(t);
    }
}
void Display(){
    struct node*t;
    if(front==NULL && rear==NULL){
        printf("\nList is Empty!");
    }
    else{
        t=front;
        while(t!=NULL){
            printf(" %d ",t->n);
            t=t->l;
        }
    }
}
int main(){
    int ch;
   while(1){
   printf("\n1.Insertion\n2.Deletion\n3.Display\n4.Exit");
   printf("\nEnter Your Choice:");
   scanf("%d",&ch);
   switch(ch){
    case 1:Insert();
           break;
    case 2:Delete();
           break;
    case 3:Display();
           break;
    case 4:printf("\nExiting Program!");
           return 0;
           break;
    default:printf("\nInvlaid Choice!");
   }
    }
    getch();
    return 0;
}