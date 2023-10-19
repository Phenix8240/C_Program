#include<stdio.h>
#include<conio.h>
void hannoi(int n,char S,char H,char D){
    if(n==1){
        printf("Move disc 1 from %c to %c\n",S,D);
        return ;
    }
    else if(n==0)
    printf("Invalid input");
    else{
        hannoi(n-1,S,D,H);
        printf("Move disc %d from %c to %c\n",n,S,D);
        hannoi(n-1,H,S,D);
    }
}
int main(){
    int n;
    printf("Enter the no. of discs:");
    scanf("%d",&n);
    hannoi(n,'A','B','C');
    getch();
    return 0;
}