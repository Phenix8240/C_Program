#include<stdio.h>
#include<conio.h>
void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}
int partition(int a[],int l,int h){
    int p=a[h];
    int i=l-1;
    for(int j=l;j<h;j++){
        if(a[j]<p){
            i++;
            swap(&a[i],&a[j]);
        }
    }
    swap(&a[i+1],&a[h]);
    return i+1;
}
int Partition(int a[],int l,int h){
    int p=a[l];
    int start=l;
    int end=h;
    while(start<end){
        while(a[start]<=p){
            start++;
        }
        while(a[end]>p){
            end--;
        }
        if(start<end){
            swap(&a[start],&a[end]);
        }
    }
    swap(&a[l],&a[end]);
    return end;
}
void QuickSort(int a[],int l,int h){
    if(l<h){
        int pi=Partition(a,l,h);
        printf("Pass: ");
        for (int i = l; i <= h; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");
        QuickSort(a,l,pi-1);
        QuickSort(a,pi+1,h);
    }
}
void printArray(int a[],int n){
    for(int i=0;i<n;i++){
        printf(" %d ",a[i]);
    }
}
int main(){
    int a[100],i,n;
    printf("Enter the No. of Elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the element at %d position:",i+1);
        scanf("%d",&a[i]);
    }
    QuickSort(a,0,n-1);
    printf("Sorted Array:");
    printArray(a,n);
    getch();
    return 0;
}