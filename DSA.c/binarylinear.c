#include <stdio.h>
#include<conio.h>
int lowerBoundBinarySearch(int a[], int n, int x) {
    int low = 0;
    int high = n - 1;
    int result = -1;
    while (low <= high) {
        int mid =(low + high )/ 2;
        if (a[mid] == x) {
            result = mid;
            high = mid - 1;
        } else if(x<a[mid]) {
            high = mid - 1;
        }
        else{
            low=mid+1;
        }
    }
    return result;
}
int upperBoundBinarySearch(int a[], int n, int x) {
    int low = 0;
    int high = n - 1;
    int result = -1;
    while (low <= high) {
        int mid =(low + high )/ 2;
        if (a[mid] == x) {
            result = mid;
            low=mid+1;
        } else if(x<a[mid]) {
            high = mid - 1;
        }
        else{
            low=mid+1;
        }
    }
    return result;
}
void findOccurrences(int a[], int n, int target) {
    int lowerBound = lowerBoundBinarySearch(a, n, target);
    int upperBound = upperBoundBinarySearch(a, n, target);

    if (lowerBound == -1 || upperBound == -1) {
        printf("Element %d not found in the array.\n", target);
        return;
    }
    printf("Occurrences of %d are at indices: ", target);
    for (int i = lowerBound; i <= upperBound; ++i) {
        if (a[i] == target) {
            printf(" %d ", i);
        }
    }
    printf("\n");
}
void Linear(int a[],int n){
    int x,i,f=0;
    printf("\nEnter the Element you wnat to find:");
    scanf("%d",&x);
    for(i=0;i<n;i++){
        if(a[i]==x){
            printf("%d is found at %d position.\n",a[i],i+1);
            f++;
        }
    }
    if(f==0)printf("\n%d is not found in array!",x);
    else printf("\nFrequency of %d in Array is %d",x,f);
}
int check(int a[],int n){
    int f=0;
     for(int i = 1; i < n; i++) {
        if (a[i] < a[i - 1]) {
             f=0;
             break;
        }
    }
    return f;
}
void InsertionSort(int a[],int n){
    for(int i=1;i<n;i++){
        int min=a[i];
        int j=i-1;
        while(j>=0 && a[j]>min){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=min;
    }
}
int WhatToDo(){
int a[100],n, target,ch;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; ++i) {
        printf("Enter the elements at %d position:",i+1);
        scanf("%d", &a[i]);
    }
    while(1){
    printf("\n 1.Linear Search\n 2.Binary Search\n 3.Exit");
    printf("\nEnter your choice:");
    scanf("%d",&ch);
    switch (ch){
    case 1:Linear(a,n);
           break;
    case 2:if(check){
       printf("Array is not sorted. Sorting the array...\n");
        InsertionSort(a, n);
        printf("Sorted array: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");
       } else {
        printf("Array is already sorted.\n");
        }
           printf("Enter the target element to find its occurrences: ");
           scanf("%d", &target);
           findOccurrences(a, n, target);
           break;
    case 3:printf("Exiting the program.\n");
            return 0;
    default:printf("Invalid Choice!");
    }
    }
}
int main() {
    WhatToDo();
    getch();
    return 0;
}
