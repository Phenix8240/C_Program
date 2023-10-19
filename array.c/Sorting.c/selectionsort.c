#include<stdio.h>
#include<conio.h>
void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void printArray(int a[],int n){
    for(int i=0;i<n;i++){
        printf(" %d ",a[i]);
    }
}
void selectionSort(int a[], int n)
{
    int i, j, min;
    for (i = 0; i < n-1; i++)
    {
        min= i;
        for (j = i+1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
       if(min!=i) {
        swap(&a[min],&a[i]); 
        // int temp = a[i];
        // a[i] = a[min];
        // a[min] = temp;
        printArray(a,n);
        printf("\n");
       }
    } 
}

int main(){
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    selectionSort(a, n);

    printf("Sorted array:\n");
    // for (i = 0; i < n; i++)
    // {
    //     printf("%d ", arr[i]);
    // }
    // printf("\n");
    printArray(a,n);
     getch();
    return 0;
}
//#include<stdio.h>
//Selection Sort
// int main(){
//    int a[50],i,j,n,min,t;
//    printf("Enter the no. of terms:");
//    scanf("%d",&n);
//    for(i=0;i<n;i++){
//     printf("Enter the element at %d position:",i+1);
//     scanf("%d",&a[i]);
//    }
//    for(i=0;i<n-1;i++){
//     min=i;
//     for(j=i+1;j<n;j++){
//         if(a[min]>a[j]){
//             min=j;
//         }
//     }
//     if(i!=min){
//         t=a[i];
//         a[i]=a[min];
//         a[min]=t;
//     }
//    }
//    printf("Sorted Array:\n");
// for(i=0;i<n;i++){
//     printf(" %d ",a[i]);
// }
//     getch();
//     return 0;
// }

