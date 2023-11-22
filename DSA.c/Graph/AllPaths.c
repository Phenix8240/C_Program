#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define MAX_VERTICES 100

struct node{
    int data;
    struct node *next;
};

struct Graph{
    int nv;
    struct node * addl[MAX_VERTICES];
    int visited[MAX_VERTICES];
};

struct node *createNode(int x){
    struct node *newNode=(struct node *)malloc(sizeof(struct node));
    newNode->data=x;
    newNode->next=NULL;
    return newNode;
}

struct Graph *createGraph(int m){
    struct Graph *graph=(struct Graph *)malloc(sizeof(struct Graph));
    graph->nv=m;
    for(int i=0;i<m;i++){
        graph->addl[i]=NULL;
        graph->visited[i]=0;
    }
    return graph;
}

void addEdge(struct Graph *graph,int src,int des){
    struct node *newNode=createNode(des);
    newNode->next=graph->addl[src];
    graph->addl[src]=newNode;

    newNode=createNode(src);
    newNode->next=graph->addl[des];
    graph->addl[des]=newNode;
}

void printPath(int path[],int pathlen){
    printf("Path: ");
    for(int i=0;i<pathlen;i++){
        printf("%d ",path[i]);
    }
    printf("\n");
}

void DFS(struct Graph *graph,int start,int end,int path[],int pathLen){
    path[pathLen]=start;
    pathLen++;
    if(start==end){
        printPath(path,pathLen);
    }
    else{
        graph->visited[start]=1;
        struct node *temp=graph->addl[start];
        while(temp!=NULL){
            int conv=temp->data;
            if(graph->visited[conv]==0){
                DFS(graph,conv,end,path,pathLen);
            }
            temp=temp->next;
        }
        graph->visited[start]=0;
    }
}

int main(){
    int nv,start,end;
    printf("\nEnter the Number of Vertices:");
    scanf("%d",&nv);
    struct Graph *graph=createGraph(nv);
    int src,des;
    while (1) {
        printf("Enter an Edge (Source Destination) or -1 to stop: ");
        scanf("%d", &src);
        if (src == -1) {
            break;
        }
        scanf("%d", &des);
        addEdge(graph, src, des);
    }
    printf("\nEnter the Starting vertex for DFS: ");
    scanf("%d", &start);
    printf("\nEnter the Ending vertex: ");
    scanf("%d", &end);
    printf("\nAll possible paths between %d and %d:\n", start, end);
    
    int path[MAX_VERTICES];
    int pathLen = 0;
    DFS(graph, start, end, path, pathLen);
    getch();
    return 0;
}
