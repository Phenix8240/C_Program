#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void Bubblesort(int *a,int n){
int i,j,t;
for(i=1;i<n;i++){
    for(j=0;j<n-i;j++){
        if(a[j]>a[j+1]){
          t=a[j];
          a[j]=a[j+1];
          a[j+1]=t;
        } 
    }
}

}
int main(){ 
    int *a,n,i;
    printf("Enter the no.");
    scanf("%d",&n);
    a=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        printf("Enter the element at %d position:",i+1);
        scanf("%d",&a[i]);
    }
    Bubblesort(a,n);
    for(i=0;i<n;i++){
        printf(" %d ",a[i]);
    }
getch();
return 0;
}