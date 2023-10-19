#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node * next;
};
struct Node* createNode(int data){
    struct Node* newNode=(struct Node *)malloc(sizeof(struct Node));
    newNode->=data;
    newNode->next=NULL;
    return newNode;
    }
void insertAtFirst(struct Node** head,int data){
    struct Node * newNode=createNode(data);
    newNode->next=*head;
    *head=newNode;
}
void insertEnd(struct Node**head,int data){
    struct Node*newNode=createNode(data);
    if(*head==NULL){
        *head=newNode;
    }else{
        struct Node* temp=*temp;
        while(temp->!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
    }
}
void insertAtPosition(struct Node** head,int data,int pos){
    if(pos<=0){
        insertAtFirst(head,data);
    }else{
        struct Node* newNode=createNode(data);
        struct Node*temp=*head;
        int cpos=0;
        while(temp!=NULL && cpos<pos ){
            temp=temp->next;
            cpos++;
        }
        if(temp==NULL){
            insertAtEnd(head,data);
        }else{
            newNode->next=temp->next;
            temp->next=newNode;
        }
    }
}
void printLinkedList(struct Node*head){
    struct Node*temp=head;
    while(temp!=NULL){
        printf("%d ",temp->next);
        temp=temp->next;
    }
}
void freeLinkedList(struct Node*head){
    struct Node*temp;
    while(head!=NULL){
        temp=head;
        head=head->next;
        free(temp);
    }
}