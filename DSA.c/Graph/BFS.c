#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node{
    int data;
    struct node * next;
};

struct node*front=NULL;
struct node*rear=NULL;
void Enqueue(int item){
    struct node *newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=item;
    newNode->next=NULL;
    if(rear==NULL){
        front=rear=newNode;
    }
    else{
        rear->next=newNode;
        rear=newNode;
    }
    if (front == NULL) {
        front = rear;
    }
}
int Dequeue(){
    if(front==NULL){
        printf("\nQueue is Empty!");
        return -1;
    }
    struct node *temp=front;
    int item=temp->data;
    front=front->next;
    if(front==NULL){
        rear=NULL;
    }
    free(temp);
    return item;
}
int IsEmpty(){
    return front==NULL;
}
void BFS(int adjM[][7],int startvertex,int n){
    int visited[n];
    for(int i=0;i<n;i++){
        visited[i]=0;
    }
    visited[startvertex]=1;
    printf("Breadth-First Search starting from vertex %d: ",startvertex);
    printf("%d ",startvertex);
    Enqueue(startvertex);
    while(!IsEmpty()){
        int currentvertex=Dequeue();
        for(int i=0;i<n;i++){
            if(adjM[currentvertex][i]==1 && !visited[i]){
                visited[i]=1;
                printf("%d ",i);
                Enqueue(i);
            }
        }
    }
    printf("\n");
}
int main(){
    int numVertices=7;
    int adjM[7][7]={
        {0,1,0,0,1,0,0},
        {1,0,1,1,0,0,0},
        {0,1,0,0,0,0,1},
        {0,1,0,0,0,1,0},
        {1,0,0,0,0,0,0},
        {0,0,0,1,0,0,0},
        {0,0,1,0,0,0,0}
    };
    int startvertex=2;
    BFS(adjM,startvertex,numVertices);
    getch();
    return 0;
}