#include<stdio.h>
#include<conio.h>
int fact(int n){
    int f=1,i;
    for(i=1;i<=n;i++){
        f*=i;
    }
    return f;
}
int perm(int n,int r){
    int num=fact(n);
    int din=fact(n-r);
    return num/din;
}
int comb(int n,int r){
    int num=fact(n);
    int din=fact(r)*fact(n-r);
    return num/din;
}
int main(){
    int n,r;
    printf("Enter the value of n and r:");
    scanf("%d %d",&n,&r);
   int f= fact(n);
    int p=perm(n,r);
    int c=comb(n,r);
    printf("Factorial:%d\n",f);
    printf("Permutation:%d\n",p);
    printf("Combination:%d\n",c);
    getch();
    return 0;

}