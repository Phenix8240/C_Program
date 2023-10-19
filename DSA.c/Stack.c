#include<stdio.h>
#include<conio.h>
int stack[100],n,x,top,i;
void push();
void pop();
void display();

int main(){
top=0;
n=100;
push();
push();
display();
pop();
display();
getch();
return 0;
}
void push(){
    if(top>=n){
        printf("\nOverflow!");
        return;
    }
    else{
        printf("\nEnter the Value :");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop(){
    if(top<=0){
        printf("\nUnderflow!");
        return;
    }
    else{
        printf("\nthe item to be poped %d",stack[top]);
        top--;
    }
}
void display(){
    if(top>=0){
        for(int i=top;i>0;i--){
            printf("%d ",stack[i]);
        }
    }
    else{
        printf("\nStack is Empty!");
        return;
    }
}