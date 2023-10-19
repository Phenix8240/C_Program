#include<stdio.h>
#include<conio.h>

//Multipication
// int main(){
//     int m,n,p,i,j,k;
//     printf("Enter the size of 1st Matrix(mxn):");
//     scanf("%d %d",&m,&n);
//     printf("Enter the size of 2nd Matrix(nxp):");
//     scanf("%d %d",&n,&p);
//     int a[m][n],b[n][p],Mul[m][p];
//     printf("Enter the elemnets at 1st Matrix:\n");
//     for(i=1;i<=m;i++){
//         for(j=1;j<=n;j++){
//             printf("Enter the element at %d%d position:",i,j);
//             scanf("%d",&a[i][j]);
//         }
//     }
//     if(n!=p){
//         printf("The matrices cann't multiplied each other\n");
//     }
//     else
//     printf("Enter the elemnets at 2nd Matrix:\n");
//     for(i=1;i<=n;i++){
//         for(j=1;j<=p;j++){
//             printf("Enter the element at %d%d position:",i,j);
//             scanf("%d",&b[i][j]);
//         }
//     }
//     for(i=1;i<=m;i++){
//         for(j=1;j<=p;j++){
//           Mul[i][j]=0;
//           for(k=1;k<=n;k++){
//             Mul[i][j]+=a[i][k]*b[k][j];
//           }
//         }
//     }
//     printf("Multipication of two matrices:\n");
//     for(i=1;i<=m;i++){
//         for(j=1;j<=p;j++){
//             printf(" %d ",Mul[i][j]);
//         }
//         printf("\n");
//     }
//     getch();
//     return 0;
// }

   //Sum
//    int main(){
//     int a[10][10],b[10][10],Sum[10][10],i,j,r,c;
//     printf("Enter the order of matrix r x c");
//     scanf("%d %d",&r,&c);
//     printf("Enter the elements at 1st matrix\n");
//     for(i=1;i<=r;i++){
//         for(j=1;j<=c;j++){
//             printf("Enter the element at %d%d position:",i,j);
//             scanf("%d",&a[i][j]);
//         }
//     }
//     printf("Enter the elements at 2nd matrix\n");
//     for(i=1;i<=r;i++){
//         for(j=1;j<=c;j++){
//             printf("Enter the element at %d %d position:",i,j);
//             scanf("%d",&b[i][j]);
//         }
//     }
//     for(i=1;i<=r;i++){
//         for(j=1;j<=c;j++){
//             Sum[i][j]=a[i][j]+b[i][j];
//         }
//     }
//     printf("Sum of two matrices:");
//     for(i=1;i<=r;i++){
//         for(j=1;j<=c;j++){
//             printf(" %d ",Sum[i][j]);
//         }
//         printf("\n");
//     }
//     getch();
//     return 0;
//    }
//#include<stdio.h>


//Unit Matrix
// int main(){
//     int a[10][10],b[10][10],f=0,i,j,r,c;
//     printf("Enter the order of Matrix r x c:");
//     scanf("%d %d",&r,&c);
//     for(i=1;i<=r;i++){
//         for(j=1;j<=c;j++){
//             printf("Enter the element at %d%d position:",i,j);
//             scanf("%d",&a[i][j]);
//         }
//     }
//     for(i=1;i<=r;i++){
//         for(j=1;j<=c;j++){
//             if(i==j){
//                 if(a[i][j]!=1){
//                     f=1;
//                     break;
//                 }
//             }
//             else{
//                 if(a[i][j]!=0){
//                     f=1;
//                     break;
//                 }
//             }
//         }
//     }
//     for(i=1;i<=r;i++){
//         for(j=1;j<=c;j++){
//             printf(" %d ",a[i][j]);
//         }
//         printf("\n");
//     }
//     if(f==1)
//     printf("Not Unit Matix\n");
//     else
//     printf("Unit Matrix\n");

//     getch();
//     return 0;
// }

// //Transpose of Matrix
// int main(){
//     int r,c;
//     printf("Enter the order of matrix");
//     scanf("%d %d",&r,&c);
//     int a[r][c],i,j;
//     for(i=1;i<=r;i++){
//         for(j=1;j<=c;j++){
//             printf("Enter the element at %d%d position:",i,j);
//             scanf("%d",&a[i][j]);
//         }
//     }

//     for(i=1;i<=r;i++){
//         for(j=1;j<=c;j++){
//             printf(" %d ",a[j][i]);
//         }
//         printf("\n");
//     }
//     return 0;
// // 
// }


 