#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define m 5

// int n;
// struct node{
//     int data;
//     struct node *next;
// };

// struct Graph{
//     int nv;
//     struct node *addl[m];
//     int visited[m];
// };

// struct node *createNode(int x){
//     struct node*newNode=(struct node*)malloc(sizeof(struct node));
//     newNode->data=x;
//     newNode->next=NULL;
//     return newNode;
// }

// struct Graph *createGraph(int n){
//     struct Graph*graph=(struct Graph*)malloc(sizeof(struct Graph));
//     graph->nv=n;
//     for(int i=0;i<n;i++){
//         graph->addl[i]=NULL;
//         graph->visited[i]=0;
//     }
//     return graph;
// }

// void addEdge(struct Graph*graph,int src,int des){
//     struct node*newNode=createNode(des);
//     newNode->next=graph->addl[src];
//     graph->addl[src]=newNode;

//     newNode=createNode(src);
//     newNode->next=graph->addl[des];
//     graph->addl[des]=newNode;
// }

// void DFS(struct Graph*graph,int start){
//     int s[m];
//     int top=-1;
//     s[++top]=start;
//     graph->visited[start]=1;

//     while(top>=0){
//         int cv=s[top--];
//         printf("Visited %d\n",cv);
//         struct node *temp=graph->addl[cv];
//         while(temp!=NULL){
//             int connv=temp->data;
//             if(graph->visited[connv]==0){
//                 s[++top]=connv;
//                 graph->visited[connv]=1;
//             }
//             temp=temp->next;
//         }
//             }
// }


// int main(){
//     int nv,startvertex;
//     printf("Enter the number of Vertices:");
//     scanf("%d",&nv);
//     struct Graph*graph=createGraph(nv);
//     int src,des;
//     while(1){
//         printf("Enter an Edge (Source Destination) or -1 or stop: ");
//         scanf("%d %d",&src,&des);
//         if(src==-1 || des==-1){
//             break;
//         }
//         addEdge(graph,src,des);
//     }
//     printf("Enter the Starting vertex for DFS: ");
//     scanf("%d",&startvertex);
//     printf("Depth-First Traversal starting from vertex %d:\n",startvertex);
//     DFS(graph,startvertex);


//     getch();
//     return 0;
// }

  

void dfs(int adj[][m], int v[], int start) {
    int stack[m];
    int top = -1;
    int i;

    printf("%c-", start + 65); // Assuming vertex labels are 'A', 'B', 'C', ...

    v[start] = 1;
    stack[++top] = start;

    while (top != -1) {
        start = stack[top];
        int found = 0; // Flag to check if unvisited adjacent vertices are found

        for (i = 0; i < m; i++) {
            if (adj[start][i] && v[i] == 0) {
                stack[++top] = i;
                printf("%c-", i + 65);
                v[i] = 1;
                found = 1;
                break;
            }
        }

        if (!found) {
            top--;
        }
    }
}

int main() {
    int adj[m][m], v[m] = {0};
    int i, j;

    printf("Enter the adjacency matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &adj[i][j]);
        }
    }

    printf("\nDFS Traversal starting from vertex A:\n");
    dfs(adj, v, 0); // Assuming you want to start DFS from vertex A

    printf("\n");
    getch(); 
    return 0;
}