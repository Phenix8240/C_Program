#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    printf("Enter the no.");
    scanf("%d",&n);
    int a[n],i,g,s;
    for(i=0;i<n;i++){
        printf("Enter the element at %d position:",i);
        scanf("%d",&a[i]);
    }
    s=a[0];
    for(i=0;i<n;i++){
        if(s<a[i]){
            s=a[i];
        }
    }
    printf("The biggest element:%d",s);
    getch();
    return 0;
}