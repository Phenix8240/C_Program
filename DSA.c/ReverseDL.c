// Searching and Reverse Doubly Linked List

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct dnode{
    int num;
    struct dnode *rl;
    struct dnode*ll;
}*dhead;

void Creation(){
    struct dnode *p,*t;
    int i,n,a;
    printf("\nEnter the Number of Nodes:");
    scanf("%d",&n);
    dhead=NULL;
    for(i=1;i<=n;i++){
        p=(struct dnode *)malloc(sizeof(struct dnode));
        if(p==NULL){
            printf("\nList is Empty!");
        }
        p->ll=NULL;
        p->rl=NULL;
        printf("Enter the Data in Node%d:",i);
        scanf("%d",&a);
        p->num=a;
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
void Reverse(){
    struct dnode * c=dhead,*n=NULL;
    while(c!=NULL){
        n=c->rl;
        c->rl=c->ll;
        c->ll=n;
        c=c->ll;
    }
}
void PrintReverseDLL(){
    struct dnode *c =dhead;
    while(c!=NULL && c->rl!=NULL){
        c=c->rl;
    }
    while(c!=NULL){
        printf("%d ",c->num);
        c=c->ll;
    }
    printf("\n");
}
void Search() {
    int x, c = 1;
    struct dnode *p = dhead;
    if (dhead == NULL) {
        printf("\nList is Empty!");
        return;
    }
    printf("\nEnter the Number you want to Find: ");
    scanf("%d", &x);
    while (p != NULL) {
        if (p->num == x) {
            printf("\n%d is found at position %d.", x, c);
            printf("\nAddress of %d is %p", x, (void *)&(p->num));
            return;
        }
        p = p->rl;
        c += 1;
    }
    printf("\n%d not found in the list.", x);
}


int main(){
    Creation();
    Search();
    // Reverse();
    // PrintReverseDLL();
    
    getch();
    return 0;
}