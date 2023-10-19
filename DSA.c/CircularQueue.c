#include<stdio.h>
#include<conio.h>
#define n  5
int queue[n];
int front=-1,rear=-1,ch;

void Enqueue(){
    int x;
    printf("\nEnter the Element:");
    scanf("%d",&x);
    if(front==-1 && rear==-1){
        front=rear=0;
        queue[rear]=x;
    }
    else if((rear+1)%n==front){
        printf("\nQueue is Full!");
        return ;
    }
    else{
        rear=(rear+1)%n;
        queue[rear]=x;
    }
}

void Dequeue(){
    if(front==-1 && rear==-1){
        printf("\nUnderFlow!");
        return ;
    }
    else if(front==rear){
        front=rear=-1;
    }
    else{
        printf("Dequeue Element: %d",queue[front]);
        front=(front+1)%n;
    }
}
void Display(){
    int i=front;
    if(front==-1 && rear==-1){
        printf("\nUnderFlow!");
        return ;
    }
    else{
        printf("\nQueue :");
        while(1){
            printf("%d ",queue[i]);
            if(i==rear){
                break;
            }
            i=(i+1)%n;
        }
    }
}
int main(){
    while(1){
        printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit");
 printf("\nEnter Your Choice:");
scanf("%d",&ch);
switch(ch){
    case 1:Enqueue();
           break;
    case 2:Dequeue();
           break;
    case 3:Display();
           break;
    case 4:return 0;

    default:printf("\nInvalid Option!");
}
    }

    getch();
    return 0;
}