#include<stdio.h>
#include<conio.h>
// int main(){
//     int n;
//     printf("Enter the no. of terms:");
//     scanf("%d",&n);
//     int a[n][n],i,j,max;
//     for(i=1;i<=n;i++){
//         for(j=1;j<=n;j++){
//             printf("Enter the element at %d%d position:",i,j);
//             scanf("%d",&a[i][j]);
//         }
//     }
//     for(i=1;i<=n;i++){
//         max=0;
//         for(j=1;j<=n;j++){
//             if(a[i][j]>max){
//                 max=a[i][j];
//             }
//         }
//         printf(" %d ",max);
//     }
// //printf("Maximum is %d",max);
//     getch();
//     return 0;
// }
// int prime_no(int x){
//     int i,count=0;
//     for(i=1;i<=x;i++){
//         if(x%i==0){
//             count++;
//         }
//     }
//         if(count==2)
//         return 1;
//         else
//         return 0;
//     }
// int main(){
//     int n;
//     printf("Enter the no. terms:");
//     scanf("%d",&n);
//     int i,j,a[n];
//     for(i=0;i<n;i++){
//         printf("Enter the element in %d position:",i);
//         scanf("%d",&a[i]);
//     }
//     for(i=0;i<n;i++){
//             if(prime_no(a[i])==1){
//                 printf("%d is prime and it's  at %d position",a[i],i+1);
//             }
            
//          }
    
//     getch();
//     return 0;
// }
/*for(j=1;j<=a[i];j++){
                count=0;
             if(a[i]%j==0){
                count++;
                break;
                
             }
            }
            
if(count==2){
                printf("%d",a[i]);
            }
    */
   #include<stdio.h>
   int main(){
    int n;
    printf("Enter the no. terms:");
    scanf("%d",&n);
    int i,j,a[n],count;
    for(i=0;i<n;i++){
        printf("Enter the element in %d position:",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        count=0;
            for(j=1;j<=a[i];j++){
                
             if(a[i]%j==0){
                count++;
             }
            }
            
if(count==2){
                printf("%d is prime no. found in %d position of array\n",a[i],i+1);
            }
    
         }
    
    getch();
    return 0;
}


