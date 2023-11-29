#include<stdio.h>
#include<limits.h>
#include<conio.h>

#define V 5

int minkey(int key[],int mst[]){
    int min= INT_MAX,min_index;

    for(int i=0;i<V;i++){
        if(mst[i]==0 && key[i]<min){
            min=key[i];
            min_index=i;
        }
    }
    return min_index;
}

void Display(int parent[],int graph[V][V]){
    printf("Edge \tWeight\n");
    int s=0;
    for(int i=1;i<V;i++){
        printf("%d - %d \t%d \n",parent[i],i,graph[i][parent[i]]);
        s+=graph[i][parent[i]];
    }
    printf("\nTotal Costs: %d",s);
}


void Prim_MST(int graph[V][V]){
    int parent[V],key[V],mst[V];

    for(int i=0;i<V;i++){
       key[i]=INT_MAX;
       mst[i]=0;
    }

    key[0]=0;
    parent[0]=-1;

    for (int i = 0; i < V - 1; i++) {
    int u = minkey(key, mst);
    mst[u] = 1;
    for (int v = 0; v < V; v++) {
        if (graph[u][v] && mst[v] == 0 && graph[u][v] < key[v]) {
            parent[v] = u;
            key[v] = graph[u][v];
        }
    }
}
    Display(parent,graph);
}

int main(){
    int graph[V][V]={{ 0, 2, 0, 6, 0 },
                        { 2, 0, 3, 8, 5 },
                        { 0, 3, 0, 0, 7 },
                        { 6, 8, 0, 0, 9 },
                        { 0, 5, 7, 9, 0 } };
    
    Prim_MST(graph);

    getch();
    return 0;
}