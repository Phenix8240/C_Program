#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
    }
void Bubble(int *a,int n){
    int i,j,t,f;
    for(i=1;i<n;i++){
        f=0;
        for(j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
            swap(&a[j],&a[j+1]);
            f=1;
            }
        }
        if(f==0){
            break;
        }
    }
}
void Insertion(int *a,int n){
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
void Selection(int *a,int n){
    int i,j,min;
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++){
        if(a[min]>a[j]){
            min=j;
        }
        }
        if(i!=min){
            swap(&a[i],&a[min]);
        }
    }
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
        QuickSort(a,l,pi-1);
        QuickSort(a,pi+1,h);
    }
}
void LinerSearch(int *a,int n){
    int x,i;
    printf("Enter the Element You want to search:");
    scanf("%d",&x);
    for(i=0;i<n;i++){
        if(a[i]==x){
            printf("%d is found at %d position",a[i],i+1);
        }
    }
}
void merge(int a[], int p, int q, int r){
    int n1 = q - p + 1;
    int n2 = r - q;
    int L[n1], M[n2];
    int i, j, k;

    for(i = 0; i < n1; i++){
        L[i] = a[p+i];
    }
    for(j = 0; j < n2; j++){
        M[j] = a[q+1+j];
    }

    i = 0;
    j = 0;
    k = p;

    while(i < n1 && j < n2){
        if(L[i] <= M[j]){
            a[k] = L[i];
            i++;
        }
        else{
            a[k] = M[j];
            j++;
        }
        k++;  
    }
    while(i < n1){
        a[k] = L[i];
        i++;
        k++;
    }
    while(j < n2){
        a[k] = M[j];
        j++;
        k++;
    }
}
void mergesort(int a[], int l, int r){
    if(l < r){
        int m = l + (r - l) / 2;
        mergesort(a, l, m);
        mergesort(a, m+1, r);
        merge(a, l, m, r); 
    }
}
void printArray(int a[], int size){
    for(int i = 0; i < size; i++){
        printf(" %d ", a[i]);
    }
}
void BinarySearch(int *a,int n,int x){
    int l=1,h=n-1,mid;
    while(l<=h){
    mid=(l+h)/2;
    if(a[mid]==x){
    printf("%d is found at %d position",a[mid],mid+1);
    }
    else if(x<a[mid]){
    h=mid-1;
    }
    else
       l=mid+1;
    }
    if(l > h){
        printf("Element not found");
    }
}
void restoreToOriginal(int *arr, int *copy, int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = copy[i];
    }
}
void Shuffle(int *arr, int n) {
    // Seed the random number generator with the current time
    srand(time(NULL));
    // Perform Fisher-Yates shuffle
    for (int i = n - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        swap(&arr[i], &arr[j]);
    }
}
void PrintArray(int *a,int n){
    for(int i=0;i<n;i++){
        printf(" %d ",a[i]);
    }
}
int WhatToDo(){
int *a, *copy, n, i, ch;
    printf("Enter the no. of terms:");
    scanf("%d", &n);
    a = (int *)malloc(n * sizeof(int));
    copy = (int *)malloc(n * sizeof(int));

    for(i = 0; i < n; i++){
        printf("Enter the element at %d position:", i + 1);
        scanf("%d", &a[i]);
        copy[i] = a[i]; // Create a copy of the original array
    }
while(1){
    printf("\n1.Bubble Sort\n2.Insertion Sort\n3.Selection Sort\n4.Quick Sort\n5.Merge Sort\n6.Restore Original\n7.Shuffle\n8.Display\n9.Exit");
    printf("\nEnter Your Choice:");
    scanf("%d", &ch);

    switch(ch){
        case 1:
            Bubble(a, n);
            printArray(a, n);
            break;
        case 2:
            Insertion(a, n);
            printArray(a, n);
            break;
        case 3:
            Selection(a, n);
            printArray(a, n);
            break;
        case 4:
            QuickSort(a, 0, n - 1);
            printArray(a, n);
            break;
        case 5:
            mergesort(a, 0, n - 1);
            printArray(a, n);
            break;
        case 6:
            restoreToOriginal(a, copy, n);
            printf("\nOriginal Array:");
            printArray(a, n);
            break;
        case 7:
            Shuffle(a, n);
            printf("\nRandom Unsorted Array:");
            printArray(a, n);
            break;
        case 8:printArray(a,n);
               break;
        case 9:
            printf("\nExiting Program!");
            return 0;
            break;
        default:
            printf("Enter the Valid Choice...");
    }
}
    free(copy);
    free(a);
}
int main(){
    WhatToDo();
    getch();
    return 0;
}





