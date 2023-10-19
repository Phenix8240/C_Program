#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct term{
    int c,e;
    struct term *next;
}*head1,*head2;

void Create(struct term **head){
    struct term *p,*t;
    int n,coef,exp;
    *head=NULL;
    printf("\nEnter the Number of terms in Polynomial:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
      printf("Enter the coefficient for term %d: ", i);
        scanf("%d", &coef);
        printf("Enter the exponent for term %d: ", i);
        scanf("%d", &exp);

        p = (struct term*)malloc(sizeof(struct term));
        if (p == NULL) {
            printf("\nMemory allocation failed!");
            return;
        }

        p->c = coef;
        p->e = exp;
        p->next = NULL;

        if (*head == NULL) {
            *head = p;
        } else {
            t->next = p;
        }
        t = p;
    }
    
}

struct term*AddPolynomial(struct term *p1,struct term*p2){
    struct term *result=NULL;
    struct term*p,*t;
    while(p1!=NULL && p2!=NULL){
        p=(struct term*)malloc(sizeof(struct term));
        if(p==NULL){
            printf("\nMemory Allocation Failed!");
            return NULL;
        }
        if(p1->e > p2->e){
            p->c=p1->c;
            p->e=p1->e;
            p1=p1->next;
        }
        else if(p1->e < p2->e){
            p->c=p2->c;
            p->e=p2->e;
            p2=p2->next;
        }
        else{
            p->c=p1->c + p2->c;
            p->e=p1->e;
            p1=p1->next;
            p2=p2->next;
        }
        p->next=NULL;
        if(result==NULL){
            result=p;
        }else{
            t->next=p;
        }
        t=p;
    }
while(p1!=NULL){
        p = (struct term*)malloc(sizeof(struct term));
        if (p == NULL) {
            printf("\nMemory allocation failed!");
            return NULL;
        }
        p->c=p1->c;
        p->e=p1->e;
        p->next=NULL;
        t->next=p;
        t=p;
        p1=p1->next;
    }
    while(p2!=NULL){
        p = (struct term*)malloc(sizeof(struct term));
        if (p == NULL) {
            printf("\nMemory allocation failed!");
            return NULL;
        }
        p->c=p2->c;
        p->e=p2->e;
        p->next=NULL;
        t->next=p;
        t=p;
        p2=p2->next;
    }
    return result;
}
void Display(struct term *head){
    struct term*t=head;
    if(head==NULL){
        printf("\nPolynomial is Empty!");
        return;
    }
    else{
        printf("\nPolynomial Representation:");
        while(t!=NULL){
            printf("|(%d^%d)-->|",t->c,t->e);
            t=t->next;
        }
        printf("NULL");
    }
}
int main(){
Create(&head1);
Display(head1);
Create(&head2);
Display(head2);
struct term * result=AddPolynomial(head1,head2);
printf("\nResultant Polynomial:");
Display(result);
getch();
return 0;
}