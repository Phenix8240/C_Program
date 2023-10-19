#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node {
    int n;
    struct node*l;
};
struct node*top=NULL;
void Push(){
    int x;
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter the Data in Node:");
    scanf("%d",&x);
    p->n=x;
    p->l=top;
    top=p;
}
void Pop(){
struct node *t;
t=top;
if(top==0){
    printf("\nList is Empty!");
}
else{
printf("\n%d is Poped!",top->n);
top=top->l;
free(t);
}
}
void Peek(){
    struct node *t=top;
if(top==0){
    printf("\nList is Empty!");
}
else{
    printf("\nTop Element is %d",t->n);
    while(t->l!=NULL){
        t=t->l;
    }
   
    printf("\nBottom Element %d:",t->n);
   
}
}
void Display(){
    struct node *t;
    t=top;
    if(top==0){
        printf("\nList is Empty!");
    }
    else{
    while(t!=NULL){
        printf(" %d ",t->n);
        t=t->l;
    }
    }
}
int main(){
    int ch;
    while(1){
    printf("\n1.Push\n2.Pop\n3.Display\n4.Peek\n5.Exit");
    printf("\nENter Your Choice:");
    scanf("%d",&ch);
    switch(ch){
        case 1:Push();
               break;
        case 2:Pop();
               break;
        case 3:Display();
               break;
        case 4:Peek();
               break;
        case 5:printf("\nExiting from Stack!");
    default:printf("\nInvalid Choice!");
    }
    }
    getch();
    return 0;
}