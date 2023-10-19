#include<stdio.h>
#include<conio.h>
#include<math.h>
float mean (int a[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    return (float)sum/n;
}
void Std(int a[],int n,int m){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=pow(a[i]-m,2);
    }
    printf("Standard Deviation:%.2f",sqrt(sum/n));
}
int main(){
    int n;
    printf("Enter the no. of terms:");
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++){
        printf("Enter the element at %d position:",i+1);
        scanf("%d",&a[i]);
    }
    float m=mean(a,n);
    printf("Mean:%.2f\n",m);
    Std(a,n,m);
    getch();
    return 0;
}