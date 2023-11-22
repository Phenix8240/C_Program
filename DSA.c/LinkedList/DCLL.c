#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


struct dcnode{
    int num;
    struct dcnode *left;
    struct dcnode *right;
}*dhead,*tail;

void Creation(){
    struct dcnode *p;
    int i,n,a;
    dhead=NULL;
    printf("\nEnter the Number of Nodes:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        p=(struct dcnode *)malloc(sizeof(struct dcnode));
        if(p==NULL){
            printf("\nList is Empty!");
            return;
        }
        printf("Enter the Data in Node%d:",i);
            scanf("%d",&a);
            p->num=a;
            p->left=NULL;
            p->right=NULL;
            if(dhead==NULL){
                dhead=tail=p;
                dhead->left=dhead;
                dhead->right=dhead;
            }
            else{
                tail->right=p;
                p->left=tail;
                p->right=dhead;
                dhead->left=p;
                tail=p;
            }
    }
}

void Display(){
    struct dcnode *t=dhead,*m,*n;
    if(dhead==NULL){
        printf("\nList is Empty!");
        return;
    }
    else{
       do{
           m=t->left;
           n=t->right;
        printf("[|%p| %d |%p|]->",m,t->num,n);
        t=t->right;
        }while(t!=dhead);
    }
}

void InsertFirst(){
    struct dcnode *p;
    int a;
     printf("\nEnter the value in Node:");
     scanf("%d",&a);
     p=(struct dcnode *)malloc(sizeof(struct dcnode));
     p->num=a;
     p->left=NULL;
     p->right=NULL;
    if(dhead==NULL){
        printf("\nList is Empty!");
        return;
    }
    else{
     p->right=dhead;
     dhead->left=p;
     p->left=tail;
     tail->right =p;
     dhead=p;
    }
    Display();
}
void InsertAnyPos() {
    int position;
    struct dcnode *p, *x = dhead, *y = NULL;
    
    printf("\nEnter the position to insert the node:");
    scanf("%d", &position);

    if (position < 1) {
        printf("\nInvalid position!");
        return;
    }
    p = (struct dcnode *)malloc(sizeof(struct dcnode));
    p->num = data;
    p->left = NULL;
    p->right = NULL;

    if (dhead == NULL) {
        dhead = tail = p;
        p->left = p->right = p; 
    }
    else if(position==1){
        InsertFirst();
        return;
    }
    else {
        int data;
        printf("\nEnter the value in Node:");
        scanf("%d", &data);
        for (int i = 1; i < position && x->right != dhead; i++) {
            y = x;
            x = x->right;
        }

        if (position > 1 && x == tail) {
            p->left = tail;
            tail->right = p;
            p->right = dhead;
            dhead->left = p;
            tail = p;
        } else {
            p->left = y;
            p->right = x;
            x->left = p;
            y->right = p;
            
        }
    }

    Display();
}



void InsertLast(){
    struct dcnode *p;
    int a;
     printf("\nEnter the value in Node:");
     scanf("%d",&a);
     p=(struct dcnode *)malloc(sizeof(struct dcnode));
     p->num=a;
     p->left=NULL;
     p->right=NULL;
    if(dhead==NULL){
        printf("\nList is Empty!");
        return;
    }
    else{
     p->left=tail;
     tail->right=p;
     p->right=dhead;
     dhead->left=p;
     tail=p;
    }
    Display();
}



void DeleteFirst(){
    struct dcnode*x,*t=dhead;
     if(dhead==NULL){
        printf("\nList is Empty!");
        return;
    }
    else if(dhead->right==dhead){
        free(dhead);
        dhead=NULL;
        return;
    }
    else{
        x=dhead;
        while(x->right!=dhead){
            x=x->right;
        }
     dhead=t->right;
    x->right=dhead;
    dhead->left=x;
    free(t);
    }
    Display();
}
void DeleteLast(){
    struct dcnode*x,*y,*t=dhead;
    if(dhead==NULL){
        printf("\nList is Empty!");
        return;
    }
    else if(dhead->right==dhead){
      free(dhead);
      dhead=NULL;
      return;
    }
    else{
        x=dhead;
         while(x->right!=dhead){
            y=x;
            x=x->right;
        }
      y->right=dhead;
      dhead->left=y;
      free(x);
    }
    Display();
}
void DeleteAnyPos(){
    struct dcnode *x,*y,*t;
    int pos;
    if(dhead==NULL){
        printf("\nList is Empty!");
        return;
    }
    else{
    printf("\nEnter the Position:");
    scanf("%d",&pos);
    if(pos==1){
        DeleteFirst();
    }
    else if(pos<1){
        printf("\nInvalid Position!");
        return ;
    }
    else{
        x=dhead;
        for(int i=0;i<pos-1;i++){
            y=x;
            x=x->right;
            if (x == dhead) {
            printf("\nPosition exceeds the length of the list!");
            return;
        }
        }
        t=x;
        y->right=x->right;
        x->right->left=y;
        free(t);
        
    }
    }
    Display();
}
int WhatToDo(){
int ch;
    while(1){
        printf("\n 1.Creation\n 2.Insert At First\n 3.Insert At Any Position\n 4.Insert Last\n 5.Delete First\n 6.Delete Any Position\n 7.Delete Last\n 8.Display\n 9.Exit");
        printf("\nEnter Your Choice:");
        scanf("%d",&ch);
        switch(ch){
            case 1:Creation();
                   break;
            case 2:InsertFirst();
                   break;
            case 3:InsertAnyPos();
                   break;
            case 4:InsertLast();
                   break;
            case 5:DeleteFirst();
                   break;
            case 6:DeleteAnyPos();
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
