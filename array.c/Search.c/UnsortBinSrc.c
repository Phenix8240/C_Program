#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void Print(int *a,int n){
    printf("\nDisplay Array:");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
int Check(int *a,int n){ 
int f=0;
for(int i=0;i<n;i++){
    if(a[i]<a[i-1]){
        f=0;
        break;
    }
}
return f;
}
void InsertionSort(int *a,int n){
    for(int i=1;i<n;i++){
        int min =a[i];
        int j=i-1;
        while(j>=0 && a[j]>min){
        a[j+1]=a[j];
        j--;
        }
        a[j+1]=min;
    }
}
int lowerBoundBinarySearch(int *a, int n, int x) {
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
int upperBoundBinarySearch(int *a, int n, int x) {
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
void BinarySearch(int *a, int n,int *c) {
    int x;
    printf("\nEnter the Element you want to find:");
    scanf("%d",&x);
    int lowerBound = lowerBoundBinarySearch(a, n, x);
    int upperBound = upperBoundBinarySearch(a, n, x);

    if (lowerBound == -1 || upperBound == -1) {
        printf("Element %d not found in the array.\n", x);
        return;
    }
    printf("Occurrences of %d are at indices: ", x);
    for (int i = lowerBound; i <= upperBound; ++i) {
        if (a[i] == x) {
            printf(" %d ", i+1);
        }
    }
    printf("\n");
    for(int i=0;i<n;i++){
    if(x==c[i]){
        printf("\n%d is found at %d position of previous unsorted Array.",x,i+1);
    }
}
}
// void Binary(int *a,int l,int h,int *c){
//     int x;
//     printf("\nEnter the Element you want to find:");
//     scanf("%d",&x);
// while(l<=h){
//     int mid=(h+l)/2;
//     if(a[mid]==x){
//         printf("\n%d is found at %d position.",x,mid+1);
//         break;
//     }
//     else if(x<a[mid]){
//         h=mid-1;
//     }
//     else{
//        l=mid+1;
//     }
// }
// for(int i=0;i<n;i++){
//     if(x==c[i]){
//         printf("\n%d is found at %d position of previous unsorted Array.",x,i+1);
//     }
// }
// }
int WhatToDo(){
int *a,*c,n,i;
printf("\nEnter the Number of Elements:");
scanf("%d",&n);
a=(int *)malloc(sizeof(int *));
c=(int *)malloc(sizeof(int *));
for(i=0;i<n;i++){
    printf("Enter the Element at %d position:",i+1);
    scanf("%d",&a[i]);
    c[i]=a[i];
}
Print(a,n);
if(Check){
    printf("\nArray is unsorted!First Sort the Array.");
    Print(a,n);
    InsertionSort(a,n);
    Print(a,n);
    BinarySearch(a,n,c);
}
else{
    printf("\nArray is Already Sorted!");
    BinarySearch(a,n,c);
}
}
int main(){
WhatToDo();
getch();
return 0;
}