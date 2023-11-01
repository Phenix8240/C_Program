#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node {
    int num;
    struct node* next;
};

void Create(struct node** p) {
    struct node* t = NULL;
    int n, i, a;
    printf("\nEnter the Number of Nodes:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        printf("Enter the Value in Node %d:", i);
        scanf("%d", &a);
        struct node* newNode = (struct node*)malloc(sizeof(struct node));
        newNode->num = a;
        newNode->next = NULL;
        if (newNode == NULL) {
            printf("\nMemory allocation failed!");
            return;
        }
        if (*p == NULL) {
            *p = newNode;
            t = *p;
        }
        else {
            t->next = newNode;
            t = t->next;
        }
    }
}

void Display(struct node* t) {
    if (t == NULL) {
        printf("\nList is Empty!");
        return;
    }
    else {
        printf("\nDisplay Linked List:");
        while (t != NULL) {
            printf("%d ", t->num);
            t = t->next;
        }
    }
}
int Indentical(struct node *a,struct node *b){
    while(a!=NULL && b!=NULL){
        if(a->num!=b->num)
           return -1;
        a=a->next;
        b=b->next;
    }
    return (a==NULL && b==NULL);
}
void PrintMiddle(struct node *t){
    if(t==NULL){
        printf("\nList is Empty!");
        return ;
    }
    struct node *s=t,*f=t;
    while(f!=NULL && f->next!=NULL){
        s=s->next;
        f=f->next->next;
    }
    printf("\nMiddle Element: %d",s->num);
}

void MoveLastToFront(struct node **t){
    if(t==NULL && (*t)->next==NULL){
        printf("\nList is Empty!");
        return ;
    }
    struct node *x=*t,*y;
    while(x->next!=NULL){
        y=x;
        x=x->next;
    }
    y->next=NULL;
    x->next=*t;
    *t=x;
}

void DeleteAlt(struct node *head){
    if(head==NULL){
        printf("\nList is Empty!");
        return;
    }
    struct node *x=head->next;
    if(x==NULL)
    return;
    head->next=x->next;
    free(x);
    DeleteAlt(head->next);
}
struct node* Reverse(struct node*head) {
    struct node* prev = NULL;
    struct node* current = head;
    struct node* next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    return prev;
}

void AddOne(struct node** head) {
    *head=Reverse(*head);
    struct node* x = *head;
    struct node* y = NULL;
    int carry = 1;

    while (x != NULL) {
        int sum = x->num + carry;
        carry = sum / 10;
        x->num = sum % 10;
        x = x->next;
    }

    if (carry > 0) {
        struct node* z = (struct node*)malloc(sizeof(struct node));
        z->num = carry;
        z->next = NULL;
       while(x->next!=NULL){
        x=x->next;
       }
       x->next=z;
    }
    *head=Reverse(*head);
}

struct node* AddTwoLists(struct node* a, struct node* b) {
    int n1 = 0, n2 = 0;
    
    while (a != NULL) {
        n1 = n1 * 10 + a->num;
        a = a->next;
    }

    while (b != NULL) {
        n2 = n2 * 10 + b->num;
        b = b->next;
    }

    int n3 = n1 + n2;
    int isFirst = 1;
    struct node* temp = NULL;
    struct node* result = NULL;
    struct node* tail = NULL;

    if (n3 == 0) {
        result = (struct node*)malloc(sizeof(struct node));
        result->num = 0;
        result->next = NULL;
        return result;
    }

    while (n3 != 0) {
        int l = n3 % 10;
        temp = (struct node*)malloc(sizeof(struct node));
        temp->num = l;
        temp->next = NULL;
        
        if (isFirst) {
            result = temp;
            tail = temp;
            isFirst = 0;
        } else {
            tail->next = temp;
            tail = temp;
        }
        n3 /= 10;
    }
    
    return result;
}


int main() {
    struct node* a = NULL;
    struct node* b = NULL;

    Create(&a);
    Create(&b);
    printf("\nLinked List a:");
    Display(a);
    printf("\nLinked List b:");
    Display(b);

    // Indentical(a,b)?printf("\nYes!"):printf("\nNoo!");

    // PrintMiddle(a);
    // PrintMiddle(b);
    
    // MoveLastToFront(&a);
    // Display(a);

    // DeleteAlt(a);
    // Display(a);

    // AddOne(&a);
    // Display(a);


    struct node * r=AddTwoLists(a,b);
    Display(r);
    getch();
    return 0;
}
