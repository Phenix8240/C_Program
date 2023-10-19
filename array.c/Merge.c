#include<stdio.h>
#include<conio.h>
void Merge(int a[],int b[],int n1,int n2,int c[],int *m){
    int i=0,j=0,k=0;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            c[k++]=a[i++];
        }
        else if(a[i]>b[j]){
            c[k++]=b[j++];
        }
        else{
            c[k++]=a[i++];
        }
    }
    while(i<n1){
        c[k++]=a[i++];
    }
    while(j<n2){
        c[k++]=b[j++];
    }
    *m=k;
}
void FindCommon(int c[],int m){
    printf("\nCommon Elements:");
    for(int i=1;i<m;i++){
        if(c[i]==c[i-1]){
        printf(" %d ",c[i]);
        }
    }
}
void Print(int a[],int n){
    printf("\nDisplay Array:");
    for(int i=0;i<n;i++){
        printf(" %d ",a[i]);
    }
}
int main(){
    int a[100],b[100],c[100],n1,n2,i;
    printf("\nEnter the No. of Elements:");
    scanf("%d",&n1);
    
    for(i=0;i<n1;i++){
        printf("Enter the Element at %d Positon:",i+1);
        scanf("%d",&a[i]);
    }
    Print(a,n1);
   printf("\nEnter the Elements in 2nd Matrix:");
scanf("%d", &n2);
for (i = 0; i < n2; i++) {
    printf("Enter the Element at %d Positon:", i + 1);
    scanf("%d", &b[i]);
}

    Print(b,n2);
int m=n1+n2;
Merge(a,b,n1,n2,c,&m);
Print(c,m);
FindCommon(c,m);

    getch();
    return 0;
}