#include<stdio.h>
#include<conio.h>
//Multipication of two matrix
// int main(){
//     int n;
//     printf("Enter the no.");
//     scanf("%d",&n);
//     int a[n],b[n],c[n],i;
//     printf("Enetr the elememts in 1st array:\n");
//     for(i=0;i<n;i++){
//         printf("Enter the element at %d position:",i);
//         scanf("%d",&a[i]);
//     }
//     printf("Enter the elements in 2nd array:\n");
//     for(i=0;i<n;i++){
//         printf("Enter the element ta %d position:",i);
//         scanf("%d",&b[i]);
//     }
//     for(i=0;i<n;i++){
//         c[i]=a[i]*b[i];
//     }
//     for(i=0;i<n;i++){
//         printf(" %d ",c[i]);
//     }
//     getch();
//     return 0;
// }

//Factorial of Each element
int main(){
    int n;
    printf("Enter the no. of terms\n");
    scanf("%d",&n);
    int a[n],b[n],i,f,j;
    printf("Enter the element in 1st array:\n");
    for(i=0;i<n;i++){
        printf("Enter the element in %d position:",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
      f=1;
      for(j=1;j<=a[i];j++){
        f*=j;
      }
      b[i]=f;
    }
    printf("Factorial of each element in array:\n");
    for(i=0;i<n;i++){
        printf(" %d ",b[i]);
    }
    getch();
    return 0;
}