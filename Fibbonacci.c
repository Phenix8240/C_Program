#include<stdio.h>
int main(){
    int a=0,b=1,c,i,n;
    printf("Enter the no. of terms:");
    scanf("%d",&n);
    printf("Fibonacci series:");
     printf(" %d %d",a,b);
    for(i=1;i<=n;i++){
        c=a+b;
        printf(" %d ",c); 
        a=b;
        b=c;  
        
    }
    return 0;
}