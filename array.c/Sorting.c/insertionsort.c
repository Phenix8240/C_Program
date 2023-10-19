#include<stdio.h>
#include<conio.h>
void printArray(int a[],int n){
    for(int i=0;i<n;i++){
        printf(" %d ",a[i]);
    }
}
void insertionsort(int a[],int n){
    for(int k=1;k<n;k++){
         int key=a[k];
         int j=k-1;
         while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j--;
         }
         a[j+1]=key;
         printf("Pass %d ",k);
         printArray(a,n);
         printf("\n");
    }
}

int main(){
    int n,i;
    printf("Enter the no. of terms in array\n");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter the element at %d position:",i);
        scanf("%d",&a[i]);
    }
    insertionsort(a,n);
    printf("Acsending order of array\n");
     printArray(a,n);
     getch();
     return 0;
}
//#include<stdio.h>
//Insertion Sort
// int main(){
//     int a[50],n,i,j,min;
//     printf("Enter the no. of terms:");
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         printf("Enter the element at %d position:",i+1);
//         scanf("%d",&a[i]);
//     }
//     for(i=1;i<n;i++){
//         min=a[i];
//         j=i-1;
//         while(j>=0 && a[j]>min){
//             a[j+1]=a[j];
//             j--;
//         }
//         a[j+1]=min;
//     }
//     printf("Ascending order of array:\n");
//     for(i=0;i<n;i++){
//         printf(" %d ",a[i]);
//     } 
//     getch();
//     return 0;
// }
