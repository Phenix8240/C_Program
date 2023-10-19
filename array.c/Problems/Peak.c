#include<stdio.h>
#include<conio.h>
void FindPeak(int a[],int  n){
    if(n==1){
          printf("\nPeak Element: %d ",a[0]);
          return;
    }
    if( a[0]>=a[1]){
         printf("\nPeak Element: %d ",a[0]);
    }
    for(int i=1;i<n-1;i++){
        if(a[i]>=a[i-1] && a[i]>=a[i+1]){
        printf("\nPeak Element: %d ",a[i]);
        }
    }
    if(a[n-1]>=a[n-2]){
         printf("\nPeak Element: %d ",a[n-1]);
    }
}
int main(){
    int a[100],n,i;
    printf("\nEnter the Number of terms:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the Element at %d position:",i+1);
        scanf("%d",&a[i]);
    }
  FindPeak(a,n);
  getch();
  return 0;
}