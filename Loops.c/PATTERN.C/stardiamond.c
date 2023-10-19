#include<stdio.h>
#include<conio.h>
// int main(){
//     int n,i,j,k,mid,nsp,nst;
//     printf("Enter the no. of rows\n");
//     scanf("%d",&n);
//     mid=n/2+1;
//     nsp=n/2;
//     nst=1;
//  for(i=1;i<=n;i++){
//         for(j=1;j<=nsp;j++){
//             printf(" ");
//         }
//         for(k=1;k<=nst;k++){
//             printf("%d",j);
//         }
//         if(i<mid){
//           nsp--;
//           nst+=2;
//         }
//         else{
//             nsp++;
//             nst-=2;
//         }
//         printf("\n");
//     }
//     getch();
//     return 0;
//}
// #include <stdio.h>

// int main() {
//   int size = 5;
//   int num = 1;
//   // upside pyramid
//   for (int i = 1; i <= size; i++) {
//     // printing spaces
//     for (int j =1; j <=size-i; j++) {
//       printf(" ");
//     }
//     // printing number
//     for (int k = 1; k <=i*2-1; k++) {
//       printf("%d", num++);
//     }
//     // set the number to 1
//     num = 1;
//     printf("\n");
//   }
//   // downside pyramid
//   for (int i = 1; i <= size; i++) {
//     // printing spaces
//     for (int j =1;j<=i;j++) {
//       printf(" ");
//     }
//     // printing number
//     for (int k = (size-i)*2-1; k >=1; k--) {
//       printf("%d", num++);
//     }
//     // set num to 1
//     num = 1;
//     printf("\n");
//   }
//   getch();
//   return 0;
// }
// Number stardiamod
// #include <stdio.h>

// int main() {

//   int size = 5;
//   for (int i = 1; i <=size; i++) {
//     // print spaces
//     for (int j = 1; j  <=size-i; j++) {
//       printf(" ");
//     }
//     // print number
//     for (int k = 1; k <= 2*i-1; k++) {
//       printf("%d", k);
//     }
//     printf("\n");
//   }
//   return 0;
// } // number pyramid
// #include <stdio.h>

// int main() {
//     int n, i, j;
//     printf("Enter the number of rows: ");
//     scanf("%d", &n);

//     for (i = 1; i <= n; i++) {
//         for (j = 1; j <= n - i; j++) {
//             printf(" "); // Print spaces
//         }

//     int num = 1;
//     for (int j = 1; j <=2*i-1; j++) {
//       if (i == 1 || i == n) {
//         printf("%d", num++);
//       } else {
//         if (j== 1|| j == 2*i-1) {
//           printf("%d", num++);
//         } else {
//           printf(" ");
//         }
//       }
//     }    
//         printf("\n"); // Move to the next line
//     }

//     return 0;
// }//hollow pyramid
// /*for (j = 1; j <= 2 * i - 1; j++) {
//             if (i == n || j == 1 || j == 2 * i - 1) {
//                 printf("%d",j); // Print asterisks for border of triangle
//             } else {
//                 printf(" "); // Print spaces for hollow area inside triangle
//             }
//         }
// */

#include <stdio.h> 

int main() {
  int size = 5, num = 1;
  // upside pyramid
  for (int i = 1; i <= size; i++) {
    // printing spaces
    for (int j = size; j > i; j--) {
      printf(" ");
    }
    // printing number
    for (int k = 1; k <=i*2-1; k++) {
      if (k == 1 || k == 2*i-1) {
        printf("%d", num++);
      } else {
        printf(" ");
      }
    }
    // set the number to 1
    num = 1;
    printf("\n");
  }
  // downside triangle
  for (int i = 1; i <=size; i++) {
    // printing spaces
    for (int j = 1; j <=i; j++) {
      printf(" ");
    }
    // printing number
    for (int k = (size-i)*2-1; k >= 1; k--) {
      if (k == 1 || k == (size-i)*2-1) {
        printf("%d", num++);
      } else {
        printf(" ");
      }
    }
    // set the number to 1
    num = 1;
    printf("\n");
  }
  return 0;
}