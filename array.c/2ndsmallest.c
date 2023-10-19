#include<stdio.h>
int main(){
    int n;
    printf("Enter the no.");
    scanf("5d",&n);
    int a[n],i,max=0,smax,i;
    for(i=0;i<n;i++){
        printf("Enter the no at %d position:");
        scanf("%d",&a[i]);
    }
   for(i=0;i<n;i++){
    if(max<a[i]){
        smax=max;
        max=a[i];
    }
    else if(smax<a[i] && a[i]!=max){
        smax=a[i];
    }
   }
   printf("%d",smax);
   return 0;
}