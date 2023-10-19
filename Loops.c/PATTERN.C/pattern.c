#include <stdio.h>
#include<conio.h>

int main() {
    
    int i,j,n;
    printf("Enter the no. of rows\n");
    scanf("%d",&n);
     for(i=1;i<=2*n+1;i++){
        printf("*");
     }
    printf("\n");
    for(i = 1; i<=n; i++) {
        for(j=n;j>=i;j--){
            printf("*");
            }
        
        for(j=1;j<=2*i-1;j++){
            printf(" ");
        }
       for(j=n;j>=i;j--){
        printf("*");
       }
        printf("\n"); 
    }
     getch();
    return 0;
}


//paskal triangle
// int main() {
//     int i,j,coef = 1,n;

//     printf("Enter the number of rows: ");
//     scanf("%d", &n);

//     for (i = 0; i <n; i++) {
//         for (j=1;j<=n- i;j++) {
//             printf(" ");
//         }

//         for (j = 0; j <= i; j++) {
//             if (j == 0 || i == 0) {
//                 coef = 1;
//             } else {
//                 coef = coef * (i - j + 1) / j;
//             }
//             printf(" %d", coef);
//         }
//         printf("\n");
//     }
//     getch();
//     return 0;
// }

//
// int main(){
//     int i,j,p=1;
//     for(i=1;i<=4;i++){
//         for(j=1;j<=4;j++){
//             printf(" %d ",p%10);
//             p+=2;
//         }
//         printf("\n");
//     }
//     getch();
//     return 0;
// }


// int main() {

//   int size = 5;
//   for (int i = 0; i < size; i++) {
//     // print spaces
//     for (int j = 0; j < i; j++) {
//       printf(" ");
//     }
//     // print number
//     for (int k = 0; k < 2*(size-i)-1; k++) {
//       printf("%d", k+1);
//     }
//     printf("\n");
//   }
//   return 0;
// }