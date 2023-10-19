#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    printf("Enter the no. of terms:");
    scanf("%d",&n);
    int a[n],i,j,x,f;
    // printf("Enter the number of terms\n");
    // scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the element at %d position:",i);
        scanf("%d",&a[i]);
    }
    //Bubble Sort
     for(i=1 ;i<n;i++){
        for(j=0;j<n-i;j++){
            if(a[j]<a[j+1]){
                x=a[j];
                a[j]=a[j+1];
                a[j+1]=x;
                
            }
        }
    }
    printf("Desending order of elements\n");
    for(i=0;i<n;i++){
        printf(" %d ",a[i]);
    }
    printf("The largest element of array:%d\n",a[0]);
    printf("The smallest element of array:%d\n",a[n-1]);
    printf("The second smallestsest element of array:%d\n",a[n-2]);
    printf("The second latgest element of array:%d\n",a[1]);
    
    getch();
    return 0;
}
// Sort without any sorting method  
// int main(){
//     int n;
//     printf("Enter the no. terms:\n");
//     scanf("%d",&n);
//     int a[n],i,j,t,max=0,min=0;
//     for(i=0;i<n;i++){
//         printf("Enter the element at %d position:",i);
//         scanf("%d",&a[i]);
//     }
//     for(i=0;i<n;i++){
//         if(a[i]>max){
//             max=a[i];
//         }
//         if(a[i]<min)
//         min=a[i];
//     }
//     for(i=min;i<=max;i++){
//         for(j=0;j<n;j++){
//          if(i==a[j]){
//             printf(" %d ",a[j]);
//          }
//         }
//     }
//     getch();
//     return 0;
// }