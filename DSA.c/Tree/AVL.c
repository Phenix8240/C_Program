#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct tree{
    int key;
    struct tree*l;
    struct tree*r;
    int height;
};
int getHeight(struct tree*n){
    if(n==NULL)
    return 0;
    return n->height;
}
int max(int a,int b){
    return (a>b)?a:b;
}
struct tree *newnode(int data){
    struct tree *node=(struct tree*)malloc(sizeof(struct tree));
    node->key=data;
    node->l=NULL;
    node->r=NULL;
    node->height=1;
    return node;
}

int getBalance(struct tree*node){
    if(node==NULL)
       return 0;
    return getHeight(node->l)-getHeight(node->r);
}
struct tree*right(struct tree*y){
    struct  tree*x=y->l;
    struct  tree*T2=x->r;
    x->r=y;
    y->l=T2;

    y->height=max(getHeight(y->l),getHeight(y->r))+1;
    x->height=max(getHeight(x->l),getHeight(x->r))+1;

    return x;
}

struct tree*left(struct tree*x){
    struct tree*y=x->r;
    struct tree*T2=y->l;
    y->l=x;
    x->r=T2;
    x->height=max(getHeight(x->l),getHeight(x->r))+1;
    y->height=max(getHeight(x->l),getHeight(x->r))+1;

    return y;
}

struct tree*insert(struct tree*node,int data){
    if(node==NULL)
       return newnode(data); 
    if(data<node->key)
        node->l=insert(node->l,data);
    else if(data>node->key)
        node->r=insert(node->r,data);
    else
       return node;
    node->height=1+max(getHeight(node->l),getHeight(node->r));
    int b=getBalance(node);
    if(b>1){
        if(data<node->l->key){
            return right(node);
        }
        else{
            node->l=left(node->l);
            return right(node);
        }
    }
    if(b<-1){
        if(data>node->r->key){
            return left(node);
        }
        else{
            node->r=right(node->l);
            return left(node);
        }
    }

    return node;
}
void inOrder(struct tree*root){
    if(root==NULL)
    return ;
    inOrder(root->l);
    printf("%d ",root->key);
    inOrder(root->r);
}
int main(){
    struct tree*root=NULL;
    int n,a;
    printf("\nEnter the Number of Nodes:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("Enter the Data in Node %d: ",i);
        scanf("%d",&a);
        root=insert(root,a);
    }
    printf("Inorder Traversal of The AVL Tree:\n");
    inOrder(root);
    getch();
    return 0;
}