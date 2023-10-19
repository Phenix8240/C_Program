#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

// struct node{
//     int data;
//     struct node *next;
// }*head;

// void Display(){
//     struct node *t;
//     if(head==NULL){
//         printf("\nList is Empty!");
//         return;
//     }
//     else{
//         t=head;
//         printf("\nCircular Linked List:");
//         printf("%d ",t->data);
//         t=t->next;
//         while(t!=head){
//             printf("%d ",t->data);
//             t=t->next;
//         }
//     }
// }
// void Create(){
//     struct node *p,*t;
//     int n,a;
//     head=NULL;
//     printf("\nEnter the Size of Node:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         p=(struct node *)malloc(sizeof(struct node));
//         if(p==NULL){
//             printf("\nList is Empty!");
//             return;
//         }
//        printf("\nEnter the Data in Node %d:",i);
//        scanf("%d",&a);
//        p->data=a;
//        p->next=NULL;
//        if(head==NULL){
//         head=t=p;
//        }
//        else{
//         t->next=p;
//         t=p;
//        }
// }
//     if(head!=NULL){
//         t->next=head;
//        }
//     printf("\nList Created successfully!");
//     Display();
// }
// void InsertFirst(){
//     int a;
//     struct node *p,*t;
//     if(head==NULL){
//         printf("\nList is Empty!");
//         return ;
//     }
//     else{
//     t=head;
//      p=(struct node *)malloc(sizeof(struct node));
//     printf("\nEnete the Data in Node:");
//     scanf("%d",&a);
//     p->data=a;
//     p->next=NULL;
//     if(p==NULL){
//         printf("\nMemory Allocation Failed!");
//         return;
//     }
//     else{
//       while(t->next!=head){
//         t=t->next;
//       }
//       p->next=head;
//       t->next=p;
//       head=p;
//     }
//     }
//     printf("\nNode Inserted Successfully!");
//     Display();
// }
// void InsertLast(){
//     int a;
//     struct node *p,*t;
//     if(head==NULL){
//         printf("\nList is Empty!");
//         return;
//     }
//     else{
//         t=head;
//         p=(struct node*)malloc(sizeof(struct node));
//         printf("\nEnter the Data in Node:");
//         scanf("%d",&a);
//         p->data=a;
//         p->next=NULL;
//         if(p==NULL){
//             printf("\nMemory Allocation Failed!");
//             return ;
//         }
        
//             while(t->next!=head){
//                 t=t->next;
//             }
//             t->next=p;
//             p->next=head;
//         }
    
//     printf("\nNode Inserted Successfully!");
//     Display();
// }
 
// void InsertAny(){
//     int a,pos;
//     struct node *p,*x,*y;
//      if(head==NULL){
//         printf("\nList is Empty!");
//         return;
//     }
//     else{
//       printf("\nEnter the Position:");
//       scanf("%d",&pos);
//       if(pos<1){
//         printf("Wrong Position!");
//         return ;
//       }
//       else if(pos==1){
//       InsertFirst();
//       free(p);
//       }
//       else{
//         x=head;
//       p=(struct node *)malloc(sizeof(struct node));
//       printf("\nEnter the data in Node:");
//       scanf("%d",&a);
//       p->data=a;
//       p->next=NULL;
//       if(head==NULL){
//         head=p;
//         p->next=head;
//         Display();
//         return;
//       }
//       for(int i=1;i<=pos-1 && x->next!=head;i++){
//         y=x;
//         x=x->next;
//       }
//       y->next=p;
//       p->next=x;
//       }
      
//     }
//     printf("\nNode Inserted Successfully!");
//       Display();
// }
// void DeleteFirst(){
//     struct node *p,*t,*x;
//     if(head==NULL){
//         printf("\nList is Empty!");
//         return;
//     }
//     x=head;
//     while(x->next!=head){
//         x=x->next;
//     }
//         t=head;
//         x->next=t->next;
//         head=head->next;
//         free(t);
//         printf("\nNode deleted Successfully!");
//         Display();
//     }
// void DeleteLast(){
//     struct node *p,*t,*x,*y;
//       if(head==NULL){
//         printf("\nList is Empty!");
//         return;
//     }
//     x=head;
//     while(x->next!=head){
//         y=x;
//         x=x->next;
//     }
//     y->next=x->next;
//     free(x);
//     printf("\nNode deleted Successfully!");
//     Display();
// }
// void DeleteAny(){
//     int i,pos;
//     struct node *p,*t,*x,*y;
//       if(head==NULL){
//         printf("\nList is Empty!");
//         return;
//     }
//     else{
//         printf("\nEnetr the Positon:");
//         scanf("%d",&pos);
//         if(pos==1){
//             DeleteFirst();
//             return;
//         }
//         else{
//             x=head;
//             for(i=1;i<=pos-1 && x->next!=head;i++){
//                 y=x;
//                 x=x->next;
//             }
//             y->next=x->next;
//             free(x);
//         }
//     }
//      printf("\nNode deleted Successfully!");
//     Display();
// }

// int main(){
//     Create();
//     Display();
//     // InsertFirst();
//     // InsertLast();
//     InsertAny();
//     DeleteFirst();
//     DeleteLast();
//     DeleteAny();
//     getch();
//     return 0;
// }


// int queue[100],i,front,rear,item,n;
// void insertion();
// void deletion();
// void display();
// int main(){
// front=-1,rear=-1;

// }

// void insertion(){
//     if(rear<=n-1){
//         printf("Queue is Full!");
//         return;
//     }
//     else{
//     if(front==-1)
//          front=0;
//     printf("\nEnter the Data:");
//     scanf("%d",&item);
//     rear++;
//     queue[rear]=item; 
//     }
// }
// void deletion(){
//     if(front==-1 && rear==-1){
//         printf("\nQueue is Empty!");
//         return;
//     }
//     else{
//         printf("%d is deleted!",queue(rear));
//         rear--;
//         if(front==rear)
//         front=-1;
//         rear=-1;
//     }
// }
// void Display(){
//     if(front>=0){
//         printf("Elements in Queue:");
//         for(i=front;i<=rear;rear++){
//             printf("%d ",queue[front]);
//         }
//     }
//     else{
//         printf("\nList is Empty!");
//     }
// }

struct node{
    int x;
    struct node *l;
};
// struct node *front=NULL;
// struct node *rear=NULL;
// void Insert(){
//     int a;
//     struct node *p;
//     p=(struct node *)malloc(sizeof(struct node));
//     printf("\nEnter the data in Node");
//     scanf("%d",&a);
//     p->x=a;
//     p->l=NULL;
//     if(p==NULL){
//     printf("\nMemory Allocation Failed!");
//     return;
//     }
//     if(front==NULL && rear==NULL){
//         front=rear=p;
//     }
//     else{
//         rear->l=p;
//         rear=p;
//     }
// }
// void Delete(){
//     struct node *t=front;
//     if(front==NULL && rear==NULL){
//         printf("\nList is Empty!");
//         return;
//     }
//     else{
//         printf("%d elements is deleted!",front->x);
//      front=front->l;
//      free(t);
//     }
// }
// void Display(){
//     struct node *t;
//     if(front==NULL && rear==NULL){
//         printf("\nList is Empty!");
//         return ;
//     }
//     else{
//         t=front;
//         while(t!=NULL){
//             printf("%d ",t->x);
//             t=t->l;
//         }
//     }
// }

// int stack[100],n,x,top,i;
// void push();
// void pop();
// void display();

// int main(){
// top=0;
// n=100;
// push();
// push();
// display();
// pop();
// display();
// getch();
// return 0;
// }
// void push(){
//     if(top>=n){
//         printf("\nOverflow!");
//         return;
//     }
//     else{
//         printf("\nEnter the Value :");
//         scanf("%d",&x);
//         top++;
//         stack[top]=x;
//     }
// }
// void pop(){
//     if(top<=0){
//         printf("\nUnderflow!");
//         return;
//     }
//     else{
//         printf("\nthe item to be poped %d",stack[top]);
//         top--;
//     }
// }
// void display(){
//     if(top>=0){
//         for(int i=top;i>0;i--){
//             printf("%d ",stack[i]);
//         }
//     }
//     else{
//         printf("\nStack is Empty!");
//         return;
//     }
// }


// int main(){
//     Insert();
//     Display();
//     Insert();
//     Display();
//     Insert();
//     Display();
//     Delete();
//     Display();
    
//     getch();
//     return 0;
// }

struct node *top=NULL;
void Push(){
struct node *p;
int a;
p=(struct node *)malloc(sizeof(struct node));
printf("\nEnter the data:");
scanf("%d",&a);
p->x=a;
p->l=top;
top=p;
}
void Pop(){
    struct node *t=top;
    if(top==NULL){
        printf("\nList is Empty!");
        return;
    }
    else{
    printf("Poped Element %d",t->x);
    top=top->l;
    free(t);
    }
}
void Display(){
    struct node *t=top;
    if(top==NULL){
        printf("\nList is Empty!");
        return;
    }
    else{
    while(t!=NULL){
        printf("%d ",t->x);
        t=t->l;
    }
    }
}
int main(){
    Push();
    Display();
    Push();
    Display();
    Push();
    Display();
    Pop();
    Display();
    getch();
    return 0;
}