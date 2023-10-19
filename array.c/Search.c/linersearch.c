#include<stdio.h>
#include<stdlib.h>

//Linear Search
// int main(){
//     int n;
//     printf("Enter the no. of terms:");
//     scanf("%d",&n);
//     int a[n],i,item,f;
//     for(i=0;i<n;i++){
//         printf("Enter the element at %d position:",i+1);
//         scanf("%d",&a[i]);
//     }
//     printf("Enter the no. to be searched:");
//     scanf("%d",&item);
//     for(i=0;i<n;i++){
//         f=0;
//         if(a[i]==item){
//             f=1;
//             break;
//         }
//     }
//     if(f==1){
//         printf("%d is found at %d position of array\n",item,i+1);
//     }
//     else
//     printf("%d is not found in this array",item);
//     return 0;
// }

//Merge Two Array and reverse
int* merge(int arr1[], int size1, int arr2[], int size2) {
    int size3 = size1 + size2;
    int* merged = malloc(size3 * sizeof(int));

    for (int i = 0; i < size1; i++) {
        merged[i] = arr1[i];
    }

    for (int i = size2 - 1; i >= 0; i--) {
        merged[size1 + (size2 - i - 1)] = arr2[i];
    }

    return merged;
}
void array(int a[],int s){
    int i;
    for(i=0;i<s;i++){
        printf("Enter element at %d pos:",i);
        scanf("%d",&a[i]);
    }
}

int main() {
    int m,n,i;
    printf("Enter the size:");
    scanf("%d %d",&m,&n);
    int arr1[m],arr2[n];
    array(arr1,m);
    array(arr2,n);

    int* merged = merge(arr1, m, arr2, n);
    int size3 = m+n;

    printf("Merged array: ");
    for ( i = 0; i < size3; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
    for(i=size3-1;i>=0;i--){
        printf(" %d ",merged[i]);
    }

    free(merged);
    return 0;
}

