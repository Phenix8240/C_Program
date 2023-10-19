#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void insertionsort(int *a,int n){
int i,j,min;
for(i=1;i<n;i++){
    min=a[i];
    j=i-1;
    while(j>=0 && a[j]>min){
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=min;
}
}
int main(){
    int *a,i,j,n;
    printf("Enter the no. of terms:");
    scanf("%d",&n);
    a=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        printf("Enter the element at %d postion:",i+1);
        scanf("%d",&a[i]);
    }
    insertionsort(a,n);
    printf("Sorted Array:\n");
    for(i=0;i<n;i++){
        printf(" %d ",a[i]);
    }
    getch();
    return 0;
}