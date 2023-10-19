#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void selectionsort(int *a,int n){
int i,j,min,t;
for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(a[min]>a[j]){
                min=j;
            }
        }
        if(i!=min){
            t=a[i];
            a[i]=a[min];
            a[min]=t;
        }
    }

}
int main(){
    int *a,n,i;
    printf("Enter the no. of terms:");
    scanf("%d",&n);
    a=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        printf("Enter the element at %d position:",i+1);
        scanf("%d",&a[i]);
    }
    selectionsort(a,n);
    printf("Sorted Array:\n");
    for(i=0;i<n;i++){
        printf(" %d ",a[i]);
    }
    getch();
    return 0;
}