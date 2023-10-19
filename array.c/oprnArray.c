#include<stdio.h>

// Sum of digonal element
// int main(){
//     int r,c;
//     printf("Enter the order of matrix:");
//     scanf("%d %d",&r,&c);
//     int a[r][c],sum=0,i,j;
//     for(i=1;i<=r;i++){
//         for(j=1;j<=c;j++){
//             printf("Enter the element at %d %d position:",i,j);
//             scanf("%d",&a[i][j]);
//         }
//         }
//         for(i=1;i<=r;i++){
//             for(j=1;j<=c;j++){
//                 if(i==j){
//                 sum+=a[i][j];
//                 }
//             }
//         }
//          printf("%d\n",sum);
//      return 0;
// }

//swaping using loop
// int main(){
//     int n;
//     printf("Enter the no. of terms:");
//     scanf("%d")
//      return 0;
// }


// int main()
// {
//   int a[10],i,j,temp;
//   printf("Enter the elements of the array:\n");
//   for(i=0;i<5;i++)
//     scanf("%d",&a[i]);

//   for(i=0;i<5;i++){
//     for(j=i+1;j<5;j++)
//     {
//         temp = a[i];
//         a[i]=a[j];
//         a[j]=temp;
//     }
//   }

//   printf("\n\nThe Sorted list of number:\n");
//   for(i=0;i<5;i++)
//     printf("%d\n",a[i]);
//   return 0;
// }

//Duplicate element
int main(){
  int n;
  printf("Enter the no. of terms:");
  scanf("%d",&n);
  int a[n],i,j,count;
  for(i=0;i<n;i++){
    printf("Enter the element at %d position:",i);
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++){
    count=0;
    for(j=i+1;j<n;j++){
     if(a[i]==a[j]){
      count++;
     }
    }
    if(count>0){
      printf(" %d ",a[i]);
     }
    }
    for (i = 0; i < n; i++) {
        count = 0;
        for (j = 0; j < n; j++) {
            if (i != j && a[i] == a[j]) {
                count++;
            }
        }
        if (count == 0) {
            printf("%d ", a[i]);
        }
    }
  return 0;
}