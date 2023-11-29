 #include<stdio.h>
 #include<stdlib.h>
 #include<conio.h>

int comarator(const void *p1,const void* p2){
    const int(*x)[3]=p1;
    const int(*y)[3]=p2;
     
     return (*x)[2]-(*y)[2];
 }

void makeset(int parent[],int rank[],int n){
    for(int i=0;i<n;i++){
        parent[i]=i;
        rank[i]=0;
    }
 }

int findParent(int parent[],int component){
    if(parent[component]==component)
       return component;
    return parent[component]
           =findParent(parent,parent[component]);
}

void Union(int u,int v,int parent[],int rank[],int n){
    u=findParent(parent,u);
    v=findParent(parent,v);

    if(rank[u]<rank[v]){
        parent[u]=v;
    }
    else if(rank[u]>rank[v]){
        parent[v]=u;
    }
    else{
        parent[v]=u;
        rank[u]++;
    }
}

void Kruskal(int n,int edge[n][3]){

    qsort(edge,n,sizeof(edge[0]),comarator);
    int parent[n],rank[n];

    makeset(parent,rank,n);

    int mincost=0;


    printf("\nFollowing are the edges in the construsted MST:\n");

    for(int i=0;i<n;i++){
        int v1=findParent(parent,edge[i][0]);
        int v2=findParent(parent,edge[i][1]);
        int wt=edge[i][2];

        if(v1!=v2){
            Union(v1,v2,parent,rank,n);
            mincost+=wt;
            printf("%d -- %d == %d\n",edge[i][0],edge[i][1],edge[i][2]);
        }
    }
    printf("Minimum Cost Spanning Tree: %d",mincost);
}

int main(){
    int edge[5][3]={ { 0, 1, 10 }, 
                       { 0, 2, 6 }, 
                       { 0, 3, 5 }, 
                       { 1, 3, 15 }, 
                       { 2, 3, 4 } }; 

    Kruskal(5,edge);

    getch();
    return 0;
}