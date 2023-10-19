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

void InsertAtPosition(int position) {
    if (position < 1) {
        printf("\nInvalid position!");
        return;
    }

    struct dcnode *p, *current;
    int a;
    int count = 1; // Initialize the node count to 1

    printf("\nEnter the value in Node:");
    scanf("%d", &a);

    p = (struct dcnode *)malloc(sizeof(struct dcnode));
    p->num = a;
    p->left = NULL;
    p->right = NULL;

    if (dhead == NULL) {
        // List is empty; this is the first node
        dhead = tail = p;
        p->left = p->right = p; // Circular structure
        return;
    }

    current = dhead;

    // Traverse the list to find the position
    while (count < position - 1 && current->right != dhead) {
        current = current->right;
        count++;
    }

    if (count < position - 1) {
        printf("\nPosition exceeds the length of the list!");
        free(p); // Free the newly allocated node
        return;
    }

    // Insert the new node at the desired position
    p->left = current;
    p->right = current->right;
    current->right->left = p;
    current->right = p;

    if (position == 1) {
        // Update dhead if inserting at the beginning
        dhead = p;
    }

    if (position == count + 1) {
        // Update tail if inserting at the end
        tail = p;
    }
}

int main(){
Creation();
Display();
InsertFirst();
InsertLast();
getch();
return 0;
}
