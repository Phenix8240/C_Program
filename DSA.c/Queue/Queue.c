#include<stdio.h>
int queue[100],rear,n,front,choice,item,i;
void insertion();
void deletion();
void display();
int main(){
    front=-1,rear=-1;
    printf("Enter the size of the Queue:");
    scanf("%d",&n);
    printf("1.Insertion\n2.Deletion\n3.Display\n4.Exit");
    do{
        printf("Enter the Choice:");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:insertion();
             break;
        case 2:deletion();
            break;
        case 3:display();
            break;
        case 4:printf("Exit\n");
               break;
        default:printf("Please enter the valid choice(1/2/3/4):");
            break;
        }
}while(choice!=0);
return 0;
}
void insertion(){
    if(rear>=n-1)
    printf("Queue is Overflow\n");
    else{
        if(front==-1)
        front=0;
        printf("Enter the item you want to insert:");
        scanf("%d",&item);
        rear++;
        queue[rear]=item;
    }
}
void deletion(){
    if(front==-1 && rear==-1)
    printf("Queue is Underflow\n");
    else{
        printf("Deleted element is %d\n ",queue[front]);
        front++;
        if(front==rear){
            front=-1;
            rear=-1;      
              }
    }
    }
    void display(){
        if(front>=0){
            printf("Elements in this Queue are:\n");
            for(i=front;i<=rear;i++){
                printf("%d\n",queue[i]);
            }
        }
        else{
            printf("No Element present for Display\n");
        }
    }