#include<stdio.h>
#include<conio.h>
void findMaxMin(int a[],int n){
    int max,min;
   max=min=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
    }
    printf("\nMaximum Element: %d",max);
    printf("\nMinimum Element: %d",min);
}
int main(){
    int a[100],n,i;
    printf("\nEnter the Number of terms:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the Element at %d position:",i+1);
        scanf("%d",&a[i]);
    }
  findMaxMin(a,n);
  int max,min;
  max=min=a[0];
  for(i=1;i<n;i++){
    max=(a[i]>max)?a[i]:max;
    min=(a[i]<min)?a[i]:min;
  }
  printf("\nMaximum Element: %d",max);
    printf("\nMinimum Element: %d",min);
  getch();
  return 0;
}