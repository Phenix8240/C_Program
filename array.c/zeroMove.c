#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    printf("Enter the no. of terms:");
    scanf("%d",&n);
    int a[n],i,x=0,b[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
     if(a[i]!=0){
        b[x]=a[i];
        x++;
     }
    }
    while(x!=n){
        b[x]=0;
        x++;
    }
    for(i=0;i<n;i++){
        printf(" %d ",b[i]);
    }
    getch();
    return 0;
}

//  int main(){
//     int n;
//     printf("Enter the no. of terms:");
//     scanf("%d",&n);
//     int a[n],i,j,x;
//     for(i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     for(i=1;i<n;i++){
//         for(j=0;j<n-i;j++){
//             if(a[j]!=0){
//              x=a[j];
//              a[j]=a[j+1];
//              a[j+1]=x;
//             }
//         }
//     }
//     for(i=0;i<n;i++){
//         printf(" %d ",a[i]);
//     }
//     return 0;
//  }