//Reverse Singly Linked List and Searching 

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node{
    int n;
    struct node*l;
}*head;
void Create(){
    int n,i,a;
    printf("\nEnter the Number of Nodes:");
    scanf("%d",&n);
    struct node*p,*t;
    head=NULL;
    for(i=1;i<=n;i++){
        p=(struct node*)malloc(sizeof(struct node));
        if(p==NULL){
            printf("\nMemory Cannot be Allocated!");
            break;
        }
        printf("Enter the Data in Node %d:",i);
        fflush(stdin);
        scanf("%d",&a);
        p->n=a;
        p->l=NULL;
        if(head==NULL){
            head=p;
        }
        else{
        t->l=p;
        }
        t=p;
    }
}
void Print(){
    struct node*p=head;
    if(p==NULL){
        printf("\nList is Empty!");
    }
    else{
        printf("\nSingle Linked List:\n");
        while(p!=NULL){
        printf(" %d ",p->n);
        p=p->l;
        }
    }
}
void Reverse(){
    struct node *current,*previous,*next;
    previous=NULL;
    current=next=head;
    while(next!=NULL){
        next=next->l;
        current->l=previous;
        previous=current;
        current=next;
    }
    head=previous;
}
void Search(){
    int x,c=1;
    struct node *p=head;
    
    if(p==NULL){
        printf("\nList is Empty!");
        return;
    }
    
    printf("\nEnter the Element You want to find:");
    fflush(stdin);
    scanf("%d",&x);
    while(p!=NULL){
        if(p->n==x){
            printf("\n%d is found at %d position.",x,c); 
            printf("\nAddress of %d is %p.",x,(void *)&(p->n));
            return;
        }
        p=p->l;
        c++;
    }
    printf("\n %d is not found in Linked List.",x);
}


int main(){
    Create();
    Print();
    Search();
    // Reverse
    
    getch();
    return 0;
}