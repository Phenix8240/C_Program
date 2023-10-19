#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    printf("Enter the no. of terms:");
    scanf("%d",&n);
    int a[n],i,j,val,f=0;
    for(i=0;i<n;i++){
     printf("Enter the element at %d position:",i);
     scanf("%d",&a[i]);
    }
    for (i = 1; i <= n; i++) {
        f = 0;
        for (j = 0; j < n; j++) {
            if (a[j] == i) {
                f = 1;
                break;
            }
        }
        if (f==0) {
            printf("%d ", i);
        }
    }
    
    getch();
    return 0;
}