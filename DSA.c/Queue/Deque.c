#include<stdio.h>
#include<conio.h>

int deque[100],f=-1,r=-1,n;
void Fenqueue(){
    int x;
    printf("\nEnter the Data:");
    scanf("%d",&x);
    if((f==0 && r==n-1)||(f==r+1)){
        printf("\nQueue is Full!");
        return ;
    }
    else if(f==-1 && r==-1){
        f=r=0;
        deque[f]=x;
    }
    else if(f==0){
        f=n-1;
        deque[f]=x;
    }
    else{
        f--;
        deque[f]=x;
    }
}
void Renqueue(){
    int x;
    printf("\nEnter the Data:");
    scanf("%d",&x);
    if((f==0 && r==n-1)||(f==r+1)){
        printf("\nQueue is Full!");
        return ;
    }
    else if(f==-1 && r==-1){
        f=r=0;
        deque[r]=x;
    }
    else if(r==n-1){
        r=0;
        deque[r]=x;
    }
    else{
        r++;
        deque[r]=x;
    }
}

void Fdequeue(){
    if(f==-1 && r==-1){
        printf("\nList is Empty!");
        return ;
    }
    else if(f==r){
         printf("Deleted Element:%d",deque[f]);
        f=r=-1;
    }
    else if(f==n-1){
        printf("Deleted Element:%d",deque[f]);
        f=0;
    }
    else{
       printf("Deleted Element:%d",deque[f]);
       f++;
    }
}
void Rdequeue(){
    if(f==-1 && r==-1){
        printf("\nList is Empty!");
        return ;
    }
    else if(f==r){
        printf("Deleted Element:%d",deque[r]);
        f=r=-1;
    }
    else if(r==0){
       printf("Deleted Element:%d",deque[r]);
        r=n-1;
    }
    else{
        printf("Deleted Element:%d",deque[r]);
        r--;
    }
}
void Display(){
    int i=f;
    if(f==-1 && r==-1){
        printf("\nList is Empty!");
        return ;
    }
    else{
    while(i!=r){
        printf("%d ",deque[i]);
        i=(i+1)%n;
    }
    }
    printf("%d ",deque[i]);
}

int main(){
    int ch;
    printf("\nEnter the Size of Deque:");
    scanf("%d",&n);
    while(1){
    printf("\n...Menu...\n");
    printf("\n1.Enqueue from Front\n2.Enqueue form Rear\n3.Dequeue from Front\n4.Dequeue from Rear\n5.Display\n6.Exit");
    printf("\nEnter Your Choice:");
    scanf("%d",&ch);
    switch(ch){
        case 1:Fenqueue();
               break;
        case 2:Renqueue();
               break;
        case 3:Fdequeue();
               break;
        case 4:Rdequeue();
               break;
        case 5:Display();
               break;
        case 6:printf("\nExiting Program!");
               return 0;
        default:printf("\nInvalid Option!");
    }
    }
}