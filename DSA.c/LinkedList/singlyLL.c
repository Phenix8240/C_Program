// #include<stdio.h>
// #include<stdlib.h>
// #include<conio.h>
// struct node{
//     int num;
//     struct node *nextptr;
// }*head;
// void Create();
// void Display();
// void InsertFirst();
// void InsertLast();
// void InsertAnyPosition();
// void DeleteFirst();
// void DeleteLast();
// void DeleteAnyPosition();
// int WhatToDo(){
// int ch;
//    while(1){
//     printf("\n\n....Menu....");
//     printf("\n 1.Create\n 2.InsertFirst\n 3.InsertAnyPosition\n 4.InsertLast");
//     printf("\n 5.DeleteFirst\n 6.DeleteAnyPosition\n 7.DeleteLast\n 8.Display\n 9.Exit");
//     printf("\nEnter your Choice:");
//     scanf("%d",&ch);
//     switch(ch){
//         case 1: Create();
//                 printf("\nData Entered in the List.");
//                 Display();
//                 break;
//         case 2: InsertFirst();
//                 Display();
//                 break;
//         case 3:InsertAnyPosition();
//                Display();
//                break;
//         case 4:InsertLast();
//                Display();
//                break;
//         case 5:DeleteFirst();
//                Display();
//                break;
//         case 6:DeleteAnyPosition();
//                Display();
//                break;
//         case 7:DeleteLast();
//                Display();
//                break;
//         case 8:Display();
//                break;
//         case 9:printf("\nExiting Program!");
//                return 0;
//         default:printf("\nInvalid Choice!");
//     }
//    }
// }
// int main(){
//     printf("\nWellcome to Linked List");
//     WhatToDo();
//    getch();
//    return 0;
// }
// void Create(){
//     int n;
//     printf("\nEnter the Number of Nodes:");
//     scanf("%d",&n);
//     struct node *p,*temp;
//     int num,i;
//    head=NULL;
//    for(i=1;i<=n;i++){
//     p=(struct node*)malloc(sizeof(struct node));
//     if(p==NULL){
//         printf("\nMemory Cannot be Allocated");
//         break;
//     }
//     printf("\nEnter the Data in Node %d :",i);
//     scanf("%d",&num);
//     p->num=num;
//     p->nextptr=NULL;
//     if(head==NULL){
//         head=p;
//     }
//     else{
//         temp->nextptr=p;
//     }
//     temp=p;
//    }
// }
// void Display() {
//     struct node *t = head;
//     if (head == NULL) {
//         printf("\nList is empty!");
//     } else {
//         printf("\nList Elements: ");
//         while (t != NULL) {
//             printf("%d ", t->num);
//             t = t->nextptr;
//         }
//     }
// }
// void InsertFirst(){
//     int x;
//     struct node *t;
//     if(head==NULL){
//         printf("\nList is Empty!");
//     }
//     else{
//         printf("\nEnter the Data in First Node:");
//         scanf("%d",&x);
//         t=(struct node*)malloc(sizeof(struct node));
//         t->num=x;
//         t->nextptr=head;
//         head=t;
//     }
// }
// void InsertLast(){
//     int x;
//     struct node*t,*y;
//     if(head==NULL){
//         printf("\nList is Empty");
//     }else{
//         printf("\nEnter the Data in Last Node:");
//         scanf("%d",&x);
//         t=(struct node*)malloc(sizeof(struct node));
//         t->num=x;
//         t->nextptr=NULL;
//         y=head;
//         while(y->nextptr!=NULL){
//         y=y->nextptr;
//         }
//         y->nextptr=t;
//     }
// }
// void InsertAnyPosition(){
//     int a,pos,i;
//     struct node*t,*x,*y;
//     if(head==NULL){
//         printf("\nList is Empty");
//     }else{
//         printf("\nEnter the Data in Node:");
//         scanf("%d",&a);
//         t=(struct node*)malloc(sizeof(struct node));
//         t->num=a;
//         t->nextptr=NULL; 
//         printf("\nEnter the Position:");
//         scanf("%d",&pos);
//         if(pos<1 || pos==1){
//             printf("Wrong Position!");
//         }
//         else {
//           x=head;
//           for( i=1;i<=pos-1;i++){
//             y=x;
//             x=x->nextptr;
//           }
//           if(x==NULL && i<pos ){
//             printf("\nPosition Exceeds the Number of Nodes!");
//           }
//           else{
//           y->nextptr=t;
//           t->nextptr=x;
//           }
//         }
//     }
// }
// void DeleteFirst(){
//     struct node* t=head;
//     head=head->nextptr;
//     free(t);
// }
// void DeleteLast(){
//     struct node*x,*y;
//     x=head;
//     while(x->nextptr!=NULL){
//         y=x;
//         x=x->nextptr;
//     }
//   y->nextptr=NULL;
//   free(x);
// }
// void DeleteAnyPosition(){
//     int pos,i;
//     struct node *x,*y;
//     printf("\nEnter the Position:");
//     scanf("%d",&pos);
//     if(pos<1){
//         printf("\nWrong Positon!");
//     }
//     else{
//         x=head;
//         for(i=1;i<=pos-1;i++){
//             y=x;
//             x=x->nextptr;
//         }
//     }
//     if(x->nextptr==NULL){
//          DeleteLast();
//     }
//     else if(pos==1){
//         DeleteFirst();
//     }
//     else{
//         y->nextptr=x->nextptr;
//     }
//     free(x);
// }



#include<stdio.h>
#include<stdlib.h>

struct node{
int num;
struct node * next;
}*head;
void Creation(){
struct node *p,*t;
int i,n,a;
head=NULL;
printf("\nEnter the Number of Nodes:");
scanf("%d",&n);
for(i=1;i<=n;i++){
printf("Enter the Data in Node%d:",i);
scanf("%d",&a);
p=(struct node *)malloc(sizeof(struct node));
if(p==NULL){   
printf("\nList is Empty!");
return ;
}
p->num=a;
p->next=NULL;
if(head==NULL){
head=p;
}
else{
t->next=p;
}
t=p;
}
}
void Display(){
struct node * t=head,*y;
if(head==NULL){
printf("\nList is Empty!");
return;
}
else{
printf("\nDisplay Singly Linked List:\n");
while(t!=NULL){
y=t->next;
printf("[%p](%d)|[%p] --> ",(void *)&(t->num),t->num,y);
t=t->next;
}
printf("NULL");
}
}
void Search(){
struct node * t=head;
if(head==NULL){
printf("\nList is Empty!");
return ;
}
else{
int x,c=0,f=0;
printf("\nEnter the Number You want to Find:");
scanf("%d",&x);
while(t!=NULL){
if(t->num==x){
printf("\n%d is found at %d position.",x,c+1);
printf("\nAddress of %d is %p .",x,(void *)&(t->num));
f=1;
}
t=t->next;
c+=1;
}
if(f==0) printf("\n%d is not found in Linked List.",x);
}
}
void InsertFirst(){
struct node *p;
if(head==NULL){
printf("\nList is Empty!");
return ;
}
else{
int x;
printf("\nEnter the Data in 1st Node:");
scanf("%d",&x);
p=(struct node *)malloc(sizeof(struct node));
p->num=x;
p->next=head;
head=p;
printf("\nNode Insertted Successfully at 1st!\n");
Display();
}
}
void InsertLast(){
struct node *p,*t=head;
if(head==NULL){
printf("\nList is Empty!");
return ;
}
else{
int x;
printf("\nEnter the Data in Last Node:");
scanf("%d",&x);
p=(struct node *)malloc(sizeof(struct node));
p->num=x;
p->next=NULL;
while(t->next!=NULL){
t=t->next;
}
t->next=p;
printf("\nNode Inserted Successfully at Last!\n");
Display();
}
}
void InsertAny(){
struct node *p;
if(head==NULL){
printf("\nList is Empty!");
return ;
}
else{
int a,pos,i;
printf("\nEnter the Position:");
scanf("%d",&pos);
if(pos<1){
printf("\nInvalid Position!");
return ;
}
else if (pos==1){
InsertFirst();
}
else{
struct node *x=head,*y;
printf("\nEnter the Data in  Node:");
scanf("%d",&a);
p=(struct node *)malloc(sizeof(struct node));
p->num=a;
p->next=NULL;
for(i=1;i<=pos-1;i++){
y=x;
x=x->next;
}
if(x==NULL && i<pos){
printf("\nPosition Excceds number of Nodes.");
return ;
}
else{
y->next=p;
p->next=x;
}
printf("\nNode Inserted Successfully!\n");
Display();
}
}
}
void DeleteFirst(){
struct node *t;
if(head==NULL){
printf("\nList is Empty!");
return ;
}
else{
t=head;
head=t->next;
t->next=NULL;
free(t);
printf("\n 1st Node Deleted Successfully!\n");
Display();
}
}
void DeleteLast(){
struct node *x=head,*y;
if(head==NULL){
printf("\nList is Empty!");
return ;
}
else{
while(x->next!=NULL){
y=x;
x=x->next;
}
y->next=NULL;
free(x);
printf("\nLast Node Deleted Successfully!\n");
Display();
}
}
void DeleteAny(){
struct node *x=head,*y;
if(head==NULL){
printf("\nList is Empty!");
return ;
}
else{
int a,pos,i;
printf("\nEnter the Position:");
scanf("%d",&pos);
if(pos<1){
printf("\nInvalid Position!");
return ;
}
else if (pos==1){
DeleteFirst();
printf("\n 1st Node Deleted Successfully!\n");
Display();
}
else if(x->next==NULL){
DeleteLast();
printf("\nLast Node Deleted Successfully!\n");
Display();
}
else{

for(i=1;i<=pos-1;i++){
y=x;
x=x->next;
}
if(x==NULL && i<pos){
printf("\nPosition Excceds number of Nodes.");
return ;
}
else{
y->next=x->next;
x->next=NULL;
free(x);
}
printf("\nNode Deleted Successfully!\n");
Display();
}
}
}

int WhatToDo(){
int ch;
while(1){
printf("\n...Singly Linked List...\n");
printf("\n1.Creation\n2.Display\n3.Insert at First\n4.Insert at Last\n5.Insert at Any Position\n6.Search\n7.Delete First\n8.Delete Last\n9.Delete Any Position\n10.Exit\n");
printf("\nEnter your Choice:");
scanf("%d",&ch);
switch(ch){
case 1:Creation();
      Display();
      break;
case 2: Display();
      break;
case 3:InsertFirst();
      break;
case 4: InsertLast();
       break;
case 5:InsertAny();
      break;
case 6:Search();
      break;
case 7:DeleteFirst();
      break;
case 8:DeleteLast();
      break;
case 9:DeleteAny();
      break;
case 10:printf("\nExiting the Program!");
      return 0;
   default:printf("\nInvalid Option!");            
}
}

}
int main(){
WhatToDo();
return 0;
}
 