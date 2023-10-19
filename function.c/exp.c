#include<stdio.h>
#include<conio.h>
void InsertionSort(int a[],int n){
    int min,i,j;
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
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void BubbleSort(int a[],int n){
    int i,j;
    for(i=1;i<n;i++){
        for(j=0;j<n-i;j++){
            if(a[j]>a[j+1]){
         swap(&a[j],&a[j+1]);
            }
        }
    }
}
void SelectionSort(int a[],int n){
    int i,j,min;
    for(i=0;i<n;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
            if(min!=i){
                swap(&a[i],&a[min]);
            }
        }
    }
}
void Merge(int a[],int p,int q,int r){
    int n1= q-p+1;
    int n2=r-q;
    int L[n1],M[n2];
    int i,j,k;

    for(i=0;i<n1;i++){
        L[i]=a[p+i];
    }
    for(j=0;j<n2;j++){
        M[j]=a[q+1+j];
    }
    i=0,j=0,k=p;
    while(i<n1 && j<n2){
        if(L[i]<=M[j]){
            a[k]=L[i];
            i++;
        }
        else{
            a[k]=M[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        a[k]=L[i];
        i++;
        k++;
    }
    while(j<n2){
        a[k]=M[j];
        j++;
        k++;
    }
}
void MergeSort(int a[],int l,int r){
   if(l<r){
    int m= l +(r-l) /2;
    MergeSort(a,l,m);
    MergeSort(a,m+1,r);
    Merge(a,l,m,r);
   }
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
void QuickSort(int a[],int l,int h){
    if(l<h){
        int pi=partition(a,l,h);
        QuickSort(a,l,pi-1);
        QuickSort(a,pi+1,h);
    }
}
void PrintArray(int a[],int n){
    for(int i=0;i<n;i++){
        printf(" %d ",a[i]);
    }
}
void binarysearch(int a[],int n){
    int beg=1,end=n-1,mid,val;
    printf("\nEnter the element you want to search:");
    scanf("%d",&val);
    while(beg<=end){
        mid=(beg+end)/2;
        if(a[mid]==val){
            printf("%d is found at %d postion",val,mid+1);
            break;
        }
        else if(a[mid]<val)
        end=mid-1;
        else
        beg=mid+1;
    }
}
void linearsearch(int a[],int n){
    int i,val;
    printf("\nEnter the element you want to search:");
    scanf("%d",&val);
    for(i=0;i<n;i++){
        if(val==a[i]){
            printf("%d is found at %d position",val,i);
            break;
        }
    }
}
int DeleteArray(int a[], int* n) {
    int x;
    printf("Enter the index of the element you want to delete:");
    scanf("%d", &x);
    if (x < 0 || x >= *n) {
        printf("Invalid Index!\n");
        return 0;
    }
    for (int i = x; i < *n - 1; i++) {
        a[i] = a[i + 1];
    }
    (*n)--;
    return 1;
}
void CreateArray(int a[],int n){
 for (int i = 0; i < n; i++) {
        printf("Enter the element at %d position:", i+1);
        scanf("%d", &a[i]);
    }
}
void WhatToDo(){
int n;
    printf("\n......Create Array Section......");
    printf("\nEnter the size of Array:");
    scanf("%d", &n);
    int a[100], i, ch, val, ch1;
    CreateArray(a,n);
        printf("\n1. Bubble Sort\n2. Selection Sort\n3. Insertion Sort\n4. Merge Sort\n5. Quick Sort");
        printf("\nEnter your choice:");
        scanf("%d", &ch);
        switch (ch) {
            case 1:BubbleSort(a, n);
                   break;
            case 2:SelectionSort(a, n);
                   break;
            case 3:InsertionSort(a, n);
                   break;
            case 4:MergeSort(a, 0, n - 1);
                   break;
            case 5:QuickSort(a, 0, n - 1);
                   break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
       
    printf("\n\nSorted Array:");
    PrintArray(a, n);
    printf("\n......Operation Section......");
         do {
        printf("\nEnter your choice:\n1. Binary Search\n2. Linear Search\n3. Delete Element\n4. Print Array\n0. Exit\n");
        scanf("%d", &ch1);
        switch (ch1) {
            case 1:
                binarysearch(a, n);
                break;
            case 2:
                linearsearch(a, n);
                break;
            case 3:
                DeleteArray(a, &n);
                printf("Array after deletion: ");
                PrintArray(a, n);
                break;
            case 4:
                PrintArray(a, n);
                break;
            case 0:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (ch1 != 0);
}
int main() {
    WhatToDo();
    getch();
    return 0;
}