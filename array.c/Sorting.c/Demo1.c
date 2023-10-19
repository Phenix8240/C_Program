#include<stdio.h>
#include<conio.h>
 void swap(int *a,int *b){
    int x=*a;
    *a=*b;
    *b=x;
 }
 void print(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
 }
void selection(int a[],int n){
    for(int i=0;i<n-1;i++){
        int min =i;
        for(int j=i+1;j<n;j++){
            if(a[i]<a[min]){
                min=j;
            }
        }
        if(i!=min){
            swap(&a[min],&a[i]);
        }
    }
}

void insertion(int a[],int n){
    int i,j;
for( i=1;i<n;i++){
    int k=a[i];
    j=i-1;
    while( j>=0 && a[j]>k){
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=k;
}
}

void merge(int a[],int p,int q,int r){
    int n1=q-p+1;
    int n2=r-q;
    int L[n1],M[n2];
    int i,j,k;
    for(i=0;i<n1;i++){
        L[i]=a[p+i];
    }
    for(j=0;j<n2;j++){
        M[j]=a[q+1+j];
    }
    i=0,j=0,k=p;
    while(i<n1 && j<n2){
        if(L[i]<M[j]){
            a[k]=L[i];
            i++;
        }
        else{
            a[k]=M[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        a[k]=L[i];
        i++;
        k++;
    }
    while(j<n2){
        a[k]=M[j];
        j++;
        k++;
    }
}
void mergesort(int a[],int l,int h){
if(h<=l){
    int m=(h+l)/2;
    mergesort(a,l,m);
    mergesort(a,m+1,h);
    merge(a,l,m,h);
}
}
int partition(int a[],int l,int h){
    int p=a[h];
    int i=l-1;
    for(int j=l;j<h;j++){
        if(a[j]<p){
            i++;
            swap(&a[i],&a[j]);
        }
    }
    swap(&a[i+1],&a[h]);
    return i+1;
}
void quciksort(int a[],int l,int h){
    if(h>l){
        int p=partition(a,l,h);
        quciksort(a,l,p-1);
        quciksort(a,p+1,h);
    }
}

int main(){
    int a[100],n,i;
    printf("\nEnter the Size of Array:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    print(a,n);
    // quciksort(a,0,n-1);
    // insertion(a,n);
    mergesort(a,0,n-1);
    print(a,n);
    getch();
    return 0;
}