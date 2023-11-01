#include<stdio.h>
#include<conio.h>
#include<stdlib.h> 

struct node{
    int num;
    struct node *next;
}*shead;

struct dnode{
    int num;
    struct dnode *rl;
    struct dnode *ll;
}*dhead;

struct cnode{
    int num;
    struct node *next;
}shead;


void Create(){
    int n,x;
    printf("\nEnter the No. of Nodes:");
    scanf("%d",&n);
    struct node *p,*t;
    shead=NULL;
    for(int i=1;i<=n;i++){
    p=(struct node*)malloc(sizeof(struct node));
    if(p==NULL){
        printf("\nMemory Cannot be Allocated");
        break;
    }
    printf("Enter the Data in Node%d:",i);
    scanf("%d",&x);
    p->num=x;
    p->next=NULL;
    if(shead==NULL){
        shead=p;
    }
    else{
    t->next=p;
    }
    t=p;
    }
}
void Display(){
    struct node *t=shead;
    if(shead==NULL){
        printf("\nList is Empty.");
    }
    else{
        printf("\nSingly Linked List:");
        while(t!=NULL){
            printf("%d ",t->num);
            t=t->next;
        }
    }
}
void InsertFirst(){
    struct node * t;
    if(shead==NULL){
        printf("\nList is Empty!");
    }
    else{
        int x;
        printf("\nEnter the Data in Node:");
        scanf("%d",&x);
        t=(struct node*)malloc(sizeof(struct node));
        t->num=x;
        t->next=shead;
        shead=t;
    }
    printf("\nNode Inserted Successfully!\n");
    Display();
}

void InsertLast(){
    struct node * t,*y;
    if(shead==NULL){
        printf("\nList is Empty!");
    }
    else{
        int x;
        printf("\nEnter the Data in Node:");
        scanf("%d",&x);
        t=(struct node *)malloc(sizeof(struct node));
        t->num=x;
        t->next=NULL;
        y=shead;
        while(y->next!=NULL){
            y=y->next;
        }
        y->next=t;
    }
    printf("\nNode Inserted Successfully!\n");
    Display();
}

void InsertAnyPosition(){
    int i,a,pos;
    struct node *x,*y,*t;
    if(shead==NULL){
        printf("\nList is Empty!");
    }
    else{
        printf("\nEnter the Data in Node:");
        scanf("%d",&a);
        t=(struct node*)malloc(sizeof(struct node));
        t->num=a;
        t->next=NULL; 
        printf("\nEnter the Position:");
        scanf("%d",&pos);
        if(pos<1  || pos==1){
            printf("Wrong Position!");
            return;
        }
        else {
          x=shead;
          for( i=1;i<=pos-1;i++){
            y=x;
            x=x->next;
          }
          if(x==NULL && i<pos ){
            printf("\nPosition Exceeds the Number of Nodes!");
          }
          else{
          y->next=t;
          t->next=x;
          }
        }
    }
    printf("\nNode Inserted Successfully!\n");
    Display();
}
void DeleteFirst(){
    struct node *t=shead;
    shead=shead->next;
    free(t);
    printf("\nFirst Node Deleted Successfully!\n");
    Display();
}
void DeleteLast(){
    struct node *x=shead,*y;
    while(x->next!=NULL){
        y=x;
        x=x->next;
    }
    y->next=NULL;
    free(x);
    printf("\nLast Node Deleted Successfully!\n");
    Display();
}
void DeleteAnyPosition(){
    struct node *x,*y;
    int i,pos;
    printf("\nEnter the position:");
    scanf("%d",&pos);
    if(pos<1){
        printf("\nInvalid Position!");
        return ;
    }
    else{
     x=shead;
     for(i=1;i<=pos-1;i++){
        y=x;
        x=x->next;
     }
    }
    if(x->next==NULL){
        DeleteLast();
    }
else if(pos==1){
    DeleteLast();
}
else{
    y->next=x->next;
}
free(x);
Display();
}
void DisplayDL(){
    struct dnode *t=dhead;
    if(dhead==NULL){
        printf("\nList is Empty");
        return;
    }
    else{
        printf("\nDoubly Linked List:\n");
        while(t!=NULL){
            printf("%d ",t->num);
            t=t->rl;
        }
    }
}
void CreateDL(){
int n,i,x;
struct dnode *p,*t;
printf("\nEnter the Number of Nodes:");
scanf("%d",&n);
dhead=NULL;
    for(i=1;i<=n;i++){
        p=(struct dnode*)malloc(sizeof(struct dnode));
        if(p==NULL){
            printf("\nList is Empty!");
        }
        printf("Enter the Data in Node:");
        scanf("%d",&x);
        p->num=x;
        p->ll=NULL;
        p->rl=NULL;
        if(dhead==NULL){
            dhead=p;
        }
        else{
            t->rl=p;
            p->ll=t;
        }
        t=p;
    }
}
void InsertFDl(){
    int x;
    struct dnode *t;
    if(dhead==NULL){
        printf("\nList is Empty!");
    }
    else{
        printf("\nEnter the Data in Node:");
        scanf("%d",&x);
        t=(struct dnode *)malloc(sizeof(struct dnode));
        t->ll=NULL;
        t->rl=NULL;
        t->num=x;
        t->rl=dhead;
        dhead->ll=t;
        dhead=t;
    }
    printf("\nNode Inserted Successfully!");
    DisplayDL();
}
void InsertLDL(){
    int a;
    struct dnode * p,*x;
    if(dhead==NULL){
        printf("\nList is Empty!");
    }
    else{
        printf("\nEnter the Data in Node:");
        scanf("%d",&a);
        p=(struct dnode *)malloc(sizeof(struct dnode));
        p->ll=NULL;
        p->rl=NULL;
        p->num=a;
        x=dhead;
        while(x->rl!=NULL){
            x=x->rl;
        }
        x->rl=p;
        p->ll=x;
    }
     printf("\nNode Inserted Successfully!");
    DisplayDL();
}

void InsertAnyDL(){
    int pos,i,a;
    struct dnode * p,*x,*y;
    printf("\nEnter the position:");
    scanf("%d",&pos);
    if(pos<1){
        printf("\nWrong Positon!");
        return;
    }
    else if(pos==1){
        InsertFDl();
    }
    else{
        x=dhead;
        p=(struct dnode *)malloc(sizeof(struct dnode));
        if(p==NULL){
            printf("\nList is Empty!");
            return ;
        }
        printf("\nEnter the Data in Node:");
        scanf("%d",&a);
        p->num=a;
        p->ll=NULL;
        p->rl=NULL;
        for(i=1;i<=pos-1 && x!=NULL;i++){
            y=x;
            x=x->rl;
        }
        if(x==NULL && i!=pos){
            printf("\nPosition exceeds No. of Nodes.");
            free(p);
            return;
        }
        y->rl=p;
        p->ll=y;
        p->rl=x;
        if(x!=NULL){
            x->ll=p;
        }
    }
    printf("\nNode Inserted Successfully!");
    DisplayDL();
}
void DeleteFDL(){
    struct dnode * t=dhead;
    if(dhead==NULL){
        printf("\nList is Empty!");
        return;
    }
    else{
        dhead=t->rl;
        dhead->ll=NULL;
        t->rl=NULL;
        free(t);
    }
    printf("\nNode Deleted Successfully!");
    DisplayDL();
}
void DeleteLDL(){
    struct dnode *x,*y;
    if(dhead==NULL){
        printf("\nList is Empty!");
        return;
    }
    else{
        x=dhead;
        while(x->rl!=NULL){
            y=x;
            x=x->rl;
        }
        x->ll=NULL;
        y->rl=NULL;
        free(x);
    }
    printf("\nNode Deleted Successfully!");
    DisplayDL();
}

void DeleteAnyDL(){
    int pos,i;
    struct dnode *x,*y;
    if(dhead==NULL){
        printf("\nList is Empty!");
        return ;
    }
    printf("\nEnter the Position:");
    scanf("%d",&pos);
    if(pos<1){
        printf("\nInvalid Position!");
        return ;
    }
    else if(pos==1){
        DeleteFDL();
    }
    else{
        y=dhead;
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
    printf("\nNode Deleted Successfully!");
    DisplayDL();
}
void SearchSL(){
    int x,c=0;
    struct node *t=shead;
    if(shead==NULL){
        printf("\nList is Empty!");
        return ;
    }
    printf("\nEnter the Element you want to Search:");
    scanf("%d",&x);
    while(t!=NULL){
        if(t->num==x){
            printf("\n%d is found at %d position.",x,c);
            printf("\nAddress of %d is %d",x,(void *)&(t->num));
            return;
        }
        t=t->next;
        c++;
    }
    printf("\n %d is not found in Linked List.",x);
}
void SearchDL(){
    int x,c=0;
    struct dnode *t=dhead;
    if(dhead==NULL){
        printf("\nList is Empty!");
        return ;
    }
    printf("\nEnter the Element you want to Search:");
    scanf("%d",&x);
    while(t!=NULL){
        if(t->num==x){
            printf("\n%d is found at %d position.",x,c);
            printf("\nAddress of %d is %d",x,(void *)&(t->num));
            return;
        }
        t=t->rl;
        c++;
    }
    printf("\n %d is not found in Linked List.",x);
}

void CreateCL(){
    int i,n,a;
    

}
struct dnode * ConvertDL(struct node *shead){
    struct dnode *dhead=NULL;
    struct dnode *prev=NULL;
    while(shead!=NULL){
        struct dnode * new;
        new=(struct dnode *)malloc(sizeof(struct dnode));
        new->num=shead->num;
        new->rl=NULL;
        if(prev!=NULL){
            prev->rl=new;
            new->ll=prev;
        }
        else{
            dhead=new;
        }
        prev=new;
        shead=shead->next;
    }
    return dhead;
}
struct node * ConvertSL(struct dnode *dhead){
    struct node *shead=NULL;
    struct node *tail=NULL;
    while(dhead!=NULL){
        struct node * new=(struct node *)malloc(sizeof(struct node));
        new->num=dhead->num;
        new->next=NULL;
        if(shead==NULL){
            shead=new;
            tail=new;
        }
        else{
            tail->next=new;
            tail=new;
        }
        dhead=dhead->rl;
    }
    return shead;
}
int Singly(){
int ch1;
while(1){
          printf("\n\n...Singly Linked List...");
          printf("\n1.Creation\n2.Insert at First\n3.Insert at Last\n4.Insert at Any Position\n5.Delete First\n6.Delete Last7.Delete Any Position\n8.Search\n9.Display\n10.Exit");
          printf("\nEnetr Your Choice:");
          scanf("%d",&ch1);
          switch(ch1){
            case 1:Create();
                   Display();
                   break;
            case 2:InsertFirst();
                   break;
            case 3:InsertLast();
                   break;
            case 4:InsertAnyPosition();
                   break;
            case 5:DeleteFirst();
                   break;
            case 6:DeleteLast();
                   break;
            case 7:DeleteAnyPosition();
                   break;
            case 8:SearchSL();
                   break;
            case 9:Display();
                   break;
            case 10:printf("\nExiting Singly Linked List Section!");
                    return 0;
                    break;
            default:printf("\nInvalid Choice!");
          }
          if(ch1==10)
          break;
   }
}
int Doubly(){
     int ch2;
    while(1){
         
          printf("\n\n...Doubly Linked List...");
          printf("\n1.Creation\n2.Insert at First\n3.Insert at Last\n4.Insert at Any Position\n5.Delete First\n6.Delete Last\n7.Delete Any Position\n8.Search\n9.Display\n10.Exit");
          printf("\nEnetr Your Choice:");
          scanf("%d",&ch2);
          switch(ch2){
            case 1:CreateDL();
                   DisplayDL();
                   break;
            case 2:InsertFDl();
                   break;
            case 3:InsertLDL();
                   break;
            case 4:InsertAnyDL();
                   break;
            case 5:DeleteFDL();
                   break;
            case 6:DeleteLDL();
                   break;
            case 7:DeleteAnyDL();
                   break;
            case 8:SearchDL();
                   break;
            case 9:DisplayDL();
                   break;
            case 10:printf("\nExiting Doubly Linked List Section!");
                    return 0;
                    break;
            default:printf("\nInvalid Choice!");
          }
          if(ch2==10)
          break;
   }
}
int WhatToDo(){
int ch,f=0;
   while(!f){
    printf("\n...Linked List Manager...\n");
   printf("\n1.Singly Linked List\n2.Doubly Linked List\n3.Convert Singly Linked List to Doubly Linked List\n4.Convert Doubly Linked List To Singly Linked List\n5.Exit");
   printf("\nEnter your Choice:");
   scanf("%d",&ch);
   switch(ch){
   case 1:Singly();
   break;
   case 2:Doubly();
   break;
   case 3:dhead=ConvertDL(shead);
          printf("\nConverted to Doubly Linked List Successfully!");
          DisplayDL();
          break;
    case 4:shead=ConvertSL(dhead);
        printf("\nConverted to Singly Linked List Successfully!");
          DisplayDL();
           Display();
           break;
    case 5:printf("\nExiting program!");
           return 0;
    default:printf("\nInvalid Choice!");
   }
   }
}
int main(){
   WhatToDo();
    getch();
    return 0;
}