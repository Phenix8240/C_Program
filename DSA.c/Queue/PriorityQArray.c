#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


#define m 100

struct PriorityQueue{
    int arr[m];
    int priority[m];
    int r;
};

void enqueue(struct PriorityQueue*a,int x,int p){
    if(a->r==m-1){
        printf("\nQueue is full.\n");
        return;
    }
    int i = a->r;
    while (i >= 0 && p < a->priority[i]) {
        a->arr[i + 1] = a->arr[i];
        a->priority[i + 1] = a->priority[i];
        i--;
    }
    a->arr[i + 1] = x;
    a->priority[i + 1] = p;
    a->r++;
}

int dequeue(struct PriorityQueue*a){
    if(a->r==-1){
        printf("Queue is Empty!");
        return 0;
    }
    int x=a->arr[0];
    for(int i=0;i<a->r;i++){
        a->arr[i]=a->arr[i+1];
        a->priority[i]=a->priority[i+1];
    }
    a->r--;

    return x;
}

void display(struct PriorityQueue*a){
    if(a->r==-1){
        printf("\nQueue is Empty!");
        return;
    }
    printf("\nPriority Queue (Element, Priority):");
    for(int i=0;i<=a->r;i++){
        printf("(%d,%d)",a->arr[i],a->priority[i]);
    }
    printf("\n");
}

int main(){
    struct PriorityQueue  pq;
    pq.r=-1;
    int ch,x,p;
    while(1){
        printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n\nEnter Your Choice:");
        scanf("%d",&ch);
        switch(ch){
            case 1:
               if(pq.r==m-1){
                printf("Queue is Full!");
                break;
               }
               printf("\nEnter the Element:");
               scanf("%d",&x);
               printf("\nEnter the Priority:");
               scanf("%d",&p);
               enqueue(&pq,x,p);
               display(&pq);
               break;
            case 2:
              printf("Dequeue Element: %d\n",dequeue(&pq));
              display(&pq);
              break;
            case 3:
               display(&pq);
               break;
            case 4:
                 printf("\nExit");
            default:printf("\nInvalid option!");
        }
    }
}