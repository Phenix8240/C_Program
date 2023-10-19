#include<stdio.h>
#include<conio.h>
void printArray(int arr[], int start, int end) {
    printf("a[%d-%d]: ", start, end);
    for (int i = start; i <= end; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
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
    int m=(l+r) /2;
    printf("\nDividing: ");
        printArray(a, l, r);
    MergeSort(a,l,m);
    MergeSort(a,m+1,r);
    Merge(a,l,m,r);
    printf("\nMerging: ");
       printArray(a, l, r);
   }
   printf("\n");
}

int main(){
    int n;
    printf("Enter the no. of terms:");
    scanf("%d",&n);
    int a[n],x;
    for(x=0;x<n;x++){
        printf("Enter the Element at %d position:",x+1);
        scanf("%d",&a[x]);
    }
    printArray(a,0,n-1);
    MergeSort(a, 0, n-1);
    printArray(a,0,n-1);
    getch();
    return 0;
}
