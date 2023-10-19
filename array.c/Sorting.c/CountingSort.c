#include<stdio.h>
#include<conio.h>
void CountingSort(int a[],int n,int t){
    int count[t+1],b[n],i;
for(i=0;i<=t;i++){
    count[i]=0;
}

for(i=0;i<n;i++){
    count[a[i]]++;
}

for(i=1;i<=t;i++){
    count[i]+=count[i-1];
}

for(i=n-1;i>=0;i--){
b[--count[a[i]]]=a[i];
}

for(i=0;i<n;i++){
    a[i]=b[i];
}
}

int main(){
    int a[50],n,i,t;
    printf("\nEnter the sizeof the Array:");
    scanf("%d",&n);
    printf("\nEnter the Number in range(0-9):");
    scanf("%d",&t);
    for(i=0;i<n;i++){
        printf("Enter the Element at %d position:",i+1);
        scanf("%d",&a[i]);
    }
    CountingSort(a,n,t);
    for(i=0;i<n;i++){
        printf(" %d ",a[i]);
    }
    getch();
    return 0;
}


