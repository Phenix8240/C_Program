#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
    int n;
    struct node*ll;
    struct node*rl;
}*head;
void Display(){
    struct node* t=head;
    printf("\nDoubly Linked List:");
    while(t!=NULL){
        printf("%d ",t->n);
        t=t->rl;
    }
}
void Create(){
    int n,i;
    printf("\nEnter the Number of Node:");
    scanf("%d",&n);
    struct node *p,*t;
    head=NULL;
    for( i=1;i<=n;i++){
        p=(struct node *)malloc(sizeof(struct node));
        if(p==NULL){
            printf("\nList is Empty!");
            break;
        }
        p->ll=NULL;
        p->rl=NULL;
        int data;
        printf("Enter the Data in Node %d:",i);
        scanf("%d",&data);
        p->n=data;
        if(head==NULL){
            head=p;
        }
        else{
        t->rl=p;
        p->ll=t;
        }
       t=p;
    }
    Display();
}
void DeleteFirst(){
    struct node* t=head;
    head=t->rl;
    head->ll=NULL;
    t->rl=NULL;
    free(t);
}
void DeleteLast(){
    struct node* x,*y;
    x=head;
    while(x->rl!=NULL){
        y=x;
        x=x->rl;
    }
    x->ll=NULL;
    y->rl=NULL;
    free(x);
}
void DeleteAnyPosition() {
    int i, pos;
    struct node *x, *y;
    printf("\nEnter the Position:");
    scanf("%d", &pos);
    if (pos < 1) {
        printf("\nWrong Position!");
        return;
    }
    if (head == NULL) {
        printf("\nList is Empty!");
        return;
    }
    if (pos == 1) {
        x = head;
        head = head->rl;
        if (head != NULL) {
            head->ll = NULL;
        }
        x->rl = NULL; // Update next pointer of deleted node
        free(x);
    } else {
        y=head;
        for(i=1;i<pos-1;i++){
            y=y->rl;
        }
        if(y==NULL || y->rl==NULL){
            printf("\nPosition Exceeds No. of Nodes");
            return ;
        }
        x=y->rl;
        y->rl=x->rl;
        if(x->rl!=NULL){
            x->rl->ll=y;
        }
        x->rl=NULL;
        x->ll=NULL;
        free(x);
    }
}
void InsertFirst(){
    int x;
    struct node *y;
    if(head==NULL){
        printf("\nList is Empty!");
    }else{
    printf("\nEnter the Data in Node:");
    scanf("%d",&x);
    y=(struct node *)malloc(sizeof(struct node));
    y->rl=NULL;
    y->ll=NULL;
    y->n=x;
    y->rl=head;
    head->ll=y;
    head=y;
    }
}
void InsertLast(){
    int a,i;
    struct node *x,*y,*p;
    if(head==NULL){
        printf("\nList id Empty!");
    }else{
        printf("\nEnter the Data in Node:");
        scanf("%d",&a);
        p=(struct node *)malloc(sizeof(struct node));
        p->ll=NULL;
        p->rl=NULL;
        p->n=a;
        x=head;
        while(x->rl!=NULL){
            x=x->rl;
        }
        x->rl=p;
        p->ll=x;
    }
}
void InsertAnyPosition(){
    int a,pos,i;
    struct node *p,*x,*y;
    printf("\nEnter the Position:");
    scanf("%d",&pos);
    if(pos<1){
        printf("\nWrong Position!");
        return;
    }
    if(pos==1){
        InsertFirst();
    }
    else{
        x=head;
        p=(struct node *)malloc(sizeof(struct node));
        if(p==NULL){
            printf("\nMemory allocation Failed!");
            return;
        }
        printf("\nEnter the Data in Node:");
        scanf("%d",&a);
        p->n=a;
        p->rl=NULL;
        p->ll=NULL;
        for(i=1;i<pos && x!=NULL;i++){
            y=x;
            x=x->rl;
        }
        if(x==NULL || i != pos){
            printf("\nPosition Exceeds No. of Nodes");
            free(p);
            return ;
        }
        y->rl=p;
        p->ll=y;
        p->rl=x;
        if(x!=NULL){
             x->ll=p;
        }
    }
}
int WhatToDo(){
int ch;
    while(1){
        printf("\n 1.Creation\n 2.Insert At First\n 3.Insert At Any Position\n 4.Insert Last\n 5.Delete First\n 6.Delete Any Position\n 7.Delete Last\n 8.Display\n 9.Exit");
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
            case 8:Display();
                   break;
            case 9:printf("\nExiting Program!");
                   return 0;
            default:printf("\nInvalid Option");
        }
    }
}
int main(){
    WhatToDo();
    getch();
    return 0;
}