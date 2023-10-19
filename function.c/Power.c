#include<stdio.h>
#include<conio.h>
int subs_pow(int c,int d){
    int f=1,i;
    for(i=1;i<=d;i++){
        f*=c;
    }
    return f;
}
int main(){
    int b,e;
    printf("Enter the base and power:");
    scanf("%d %d",&b,&e);
int power=subs_pow(b,e);
printf("%d is to the power of %d is: %d",b,e,power);
getch();
return 0;
}