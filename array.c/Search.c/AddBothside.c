#include<stdio.h>
#include<conio.h>
void AddElement(int a[],int *n){
    int x,b,c;
    printf("\nEnter the element you want to find:");
    scanf("%d",&x);
    printf("\nEnter the Element for insert before match :");
    scanf("%d",&b);
    printf("Enter the Element for insert after match:");
    scanf("%d",&c);
   for(int i=0;i<(*n);i++){
    if(a[i]==x){
    (*n)+=2;
    for(int j=(*n)-1;j>i+2;j--){
    a[j]=a[j-2];
    }
    a[i]=b;
    a[i+1]=x;
    a[i+2]=c;
    i+=2;
    }
   }
}
int main(){
    int a[100],n,i;
    printf("\nEnter the Number of Terms:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the Element at %d position:",i+1);
        scanf("%d",&a[i]);
    }
    AddElement(a,&n);
    for(i=0;i<n;i++){
        printf(" %d ",a[i]);
    }
    getch();
    return 0;
}