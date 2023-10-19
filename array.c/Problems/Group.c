#include <stdio.h>
#include <conio.h>

void Print(int a[], int start,int end) {
    for (int i = start; i <= end; i++) {
        printf(" %d ", a[i]);
    }
}

void CheckSortedArray(int a[], int n) {
    int start=0,end;
    while(start<n){
        end=start+1;
        while(end<n && a[end]>=a[end-1]){
            end++;
        }
        printf("\nCount:%d\n",end-start);
        Print(a,start,end-1);
        printf("\n");
        start=end;
    }
}

int main() {
    int a[100], n, i;

    printf("\nEnter the Number of Terms:");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter the Element at %d Position:", i + 1);
        scanf("%d", &a[i]);
    }
    Print(a,0,n-1);
    CheckSortedArray(a, n);

    getch();
    return 0;
}
