#include<stdio.h>
#include<conio.h>
int max(int a[],int n){
    int m=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>m){
            m=a[i];
        }
    }
    return m;
}
void count(int a[],int n,int x){
    int b[n],i;
    int c[10]={0};
    for(i=0;i<n;i++){
        c[(a[i]/x)%10]++;
    }
    for(i=1;i<10;i++){
        c[i]+=c[i-1];
    }
    for(i=n-1;i>=0;i--){
        b[--c[(a[i]/x)%10]]=a[i];
        
    }
    for(i=0;i<n;i++){
        a[i]=b[i];
    }
}

void radix(int a[],int n){
int m=max(a,n);
for(int i=1;m/i>0;i*=10){
count(a,n,i);
}
}

void Print(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
int main(){
    int a[50],n,i;
    printf("\nEnetr the Size of Array:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the Element at %d position:",i+1);
        scanf("%d",&a[i]);
    }
radix(a,n);
printf("\nSorted Array:");
Print(a,n);
getch();
return 0;
}