#include<stdio.h>
#include<conio.h>
int ackermann(int m,int n){
    if(m==0)
    return n+1;
    else if(n==0)
    return ackermann(m-1,1);
    else
    return ackermann(m-1,ackermann(m,n-1));
    }
    int main(){
        int m,n;
        printf("Enter two integers(m,n):");
        scanf("%d %d",&m,&n);
        int x=ackermann(m,n);
        printf("Ackermann value for(%d,%d):%d",m,n,x);
        getch();
        return 0;
    }

    