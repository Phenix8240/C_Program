#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
// int main(){
//     int n,i,j;
//     printf("Enter the No. of Elements:");
//     scanf("%d",&n);
//     int a[100],b[100],c[100],x=0;
//     printf("Enter the element in 1st array:\n");
//     for(i=0;i<n;i++){
//         printf("Enter the element at %d position:",i+1);
//         scanf("%d",&a[i]);
//     }
//     printf("Enter the element at 2nd array:\n");
//     for(i=0;i<n;i++){
//         printf("Enter the element at %d positon:",i+1);
//         scanf("%d",&b[i]);
//     }
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//             if(a[i]==b[j]){
//                 c[x]=a[i];
//                 x++;
//             }
//         }
//     }
//     printf("Common element in arrays:");
//     for(i=0;i<x;i++){
//         printf(" %d ",c[i]);
//     }
//     getch();
//     return 0;
// }

#define m 100
#define n 50
int findCommonWords(char w1[][n], int size1, char w2[][n], int size2, char cw[][n]) {
    int c = 0;
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (strcmp(w1[i], w2[j]) == 0) {
                strcpy(cw[c], w1[i]);
                c++;
                break;
            }
        }
    }
    return c;
}
int main() {
    char w1[m][n];
    char w2[m][n];
    char cw[m][n];
    int size1, size2;
    // int size1 = sizeof(w1) / sizeof(w1[0]);
    // int size2 = sizeof(w2) / sizeof(w2[0]);
    
    printf("Enter the number of words in array 1: ");
    scanf("%d", &size1);
    printf("Enter the words for array 1:\n");
    for (int i = 0; i < size1; i++) {
        scanf("%s", w1[i]);
        fflush(stdin);
    }
    
    printf("Enter the number of words in array 2: ");
    scanf("%d", &size2);
    printf("Enter the words for array 2:\n");
    for (int i = 0; i < size2; i++) {
        scanf("%s", w2[i]);
        fflush(stdin);
    }
    int c = findCommonWords(w1, size1, w2, size2, cw);
    
    printf("Common words: ");
    for (int i = 0; i < c; i++) {
        printf("%s ", cw[i]);
    }
    
    getch();
    return 0;
}