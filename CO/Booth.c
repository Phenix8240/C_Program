#include <stdio.h>
#include <math.h>
#include<conio.h>
int a = 0,b = 0, c = 0, x = 0, y = 0, C[5] = { 1, 0, 0, 0, 0};
int A[5] = {0}, ACC[5] = {0}, B[5] = {0};
int AC[5] = {0}, BC[5] = {0}, P[5] = {0}, R[5] = {0};
 
void BinToDec(){
     x = fabs(a);
     y = fabs(b);
     int r1, r2, i, t1;
     for (i = 0; i < 5; i++){
           r1 = x % 2;
           x = x / 2;
           r2 = y % 2;
           y = y / 2;
           A[i] = r1;
           ACC[i] = r1;
           B[i] = r2;
           if(r2 == 0){
                BC[i] = 1;
           }
           if(r1 == 0){
                AC[i] =1;
           }
     }
   c = 0;
   for ( i = 0; i < 5; i++){
           R[i] = C[i]+ BC[i] + c;
           if(R[i] >= 2){
                c = 1;
           }
           else
                c = 0;
           R[i] = R[i] % 2;
     }
   for (i = 4; i >= 0; i--){
     BC[i] = R[i];
   }
   if (a < 0){
      c = 0;
     for (i = 4; i >= 0; i--){
           R[i] = 0;
     }
     for ( i = 0; i < 5; i++){
           R[i] = C[i] + AC[i] + c;
           if (R[i] >= 2){
                c = 1;
           }
           else
                c = 0;
           R[i] = R[i]%2;
     }
     for (i = 4; i >= 0; i--){
           A[i] = R[i];
           ACC[i] = R[i];
     }
 
   }
   if(b < 0){
     for (i = 0; i < 5; i++){
           t1 = B[i];
           B[i] = BC[i];
           BC[i] = t1;
     }
   }
}
void add(int num[]){
    int i;
    c = 0;
    for ( i = 0; i < 5; i++){
           R[i] = P[i] + num[i] + c;
           if (R[i] >= 2){
                c = 1;
           }
           else{
                c = 0;
           } 
           R[i] =R[i]%2;
     }
     for (i = 4; i >= 0; i--){
         P[i] = R[i];
         printf("%d",P[i]);
     }
   printf(":");
   for (i = 4; i >= 0; i--){
           printf("%d", ACC[i]);
     }
}
void arshift(){
    int t1 = P[4], t2 = P[0], i;
    for (i = 1; i < 5  ; i++){
       P[i-1] = P[i];
    }
    P[4] = t1;
    for (i = 1; i < 5  ; i++){
        ACC[i-1] = ACC[i];
    }
    ACC[4] = t2;
    printf("\nAR-SHIFT: ");
    for (i = 4; i >= 0; i--){
        printf("%d",P[i]);
    }
    printf(":");
    for(i = 4; i >= 0; i--){
        printf("%d", ACC[i]);
    }
}
int WhatToDo(){
int i, q = 0;
   printf("\t\tBOOTH'S MULTIPLICATION");
   printf("\nEnter two numbers to multiply: ");
   printf("\nBoth must be less than 16");
   do{
        printf("\nEnter A: ");
        scanf("%d",&a);
        printf("Enter B: ");
        scanf("%d", &b);
     }while(a >=16 || b >=16);
 
    printf("\nExpected product = %d", a * b);
    BinToDec();
    printf("\n\nBinToDec Equivalents are: ");
    printf("\nA = ");
    for (i  =  4; i  >=  0;  i--){
        printf("%d",  A[i]);
    }
    printf("\nB = ");
    for (i  =  4;  i  >=  0;  i--){
        printf("%d",  B[i]);
    }
    printf("\nB'+ 1 = ");
    for (i  =  4;  i  >=  0;  i--){
        printf("%d",  BC[i]);
    }
    printf("\n\n");
    for (i = 0;i < 5; i++){
           if (A[i]  ==  q){
               printf("\n-->");
               arshift();
               q  =  A[i];
           }
           else if(A[i] == 1 && q == 0){
              printf("\n-->");
              printf("\nSUB B: ");
              add(BC);
              arshift();
              q = A[i];
           }
           else{
              printf("\n-->");
              printf("\nADD B: ");
              add(B);
              arshift();
              q  =  A[i];
           }
     }
 
     printf("\nProduct is = ");
     for (i  =  4;  i  >=  0;  i--){
           printf("%d",  P[i]);
     }
     for (i  =  4;  i  >=  0;  i--){
           printf("%d",  ACC[i]);
     }
}
int main(){
    WhatToDo();
     getch();
     return 0;
}