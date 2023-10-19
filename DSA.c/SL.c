#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct Node{
    int data;
    struct Node * next;
};
void Create(struct Node ** hdref,struct Node **tlref,int data);
void Display(struct Node * head);
int main(){
    struct Node * head=NULL;
    struct Node * tail=NULL;
    struct Node *p=NULL;
    int data;
    char choice;
    
   do {
        printf("Enter the data for the Linked List: ");
        scanf("%d", &data);
        Create(&head, &tail, data);

        printf("Do You Want To Continue? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    Display(head);

    while (head != NULL) {
        struct Node* temp = head;
        head = head->next;
        free(temp);
    }
    getch();
    return 0;
}
void Create(struct Node ** hdref,struct Node **tlref,int data){
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    if(newNode==NULL){
        printf("Memory Location Failed!");
        return;
    }
    newNode->data=data;
    newNode->next=NULL;
    if(*hdref==NULL){
        *hdref=newNode;
        *tlref=newNode;
    }
    else{
        (*tlref)->next=newNode;
        *tlref=newNode;
    }
}
void Display(struct Node * head){
    if(head==NULL){
        printf("Link List is Empty!");
        return;
    }
    struct Node *p=head;
    printf("Link List:");
    while(p!=NULL){
        printf("%d -> ",p->data);
        p=p->next;
    }
    printf("NULL\n");
}