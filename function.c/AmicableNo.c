#include <stdio.h>
#include<conio.h>

// int main() {
//     int sum1, sum2, i, j;

//     for (i = 1; i <= 10000; i++) {
//         sum1 = 0;

//         // Calculate sum of proper divisors of i
//         for (j = 1; j < i; j++) {
//             if (i % j == 0) {
//                 sum1 += j;
//             }
//         }

//         // Calculate sum of proper divisors of sum1
//         sum2 = 0;
//         for (j = 1; j < sum1; j++) {
//             if (sum1 % j == 0) {
//                 sum2 += j;
//             }
//         }

//         // Check if i and sum1 are amicable pairs
//         if (i == sum2 && i != sum1) {
//             printf(" (%d,%d); ", i, sum1);
//         }
//     }
//     getch();
//     return 0;
// }
int fact(int n);
void krisnamurti(int n){
    int i,s=0,r,x;
    x=n;
    while(n>0){
     r=n%10;
     s=s+fact(r);
     n/=10;
         }
    if(x==s){
        printf("Krisnamurti");
    }
    else
    printf("Not Krisnamurti");
}
int fact(int n){
    int f=1,i;
    for(i=1;i<=n;i++){
        f=f*i;
    }
    return f;
}
void primeno(int n){
    int i,count=0;
for(i=1;i<+n;i++){
    if(n%i==0){
        count++;
    }
}
if(count==2)
printf("Prime");
}
void plaindrome(int n){
    int sum=0,x,r;
    x=n;
    while(n>0){
        r=n%10;
        sum=sum*10+r;
        n/=10;
    }
    if(sum==x)
    printf("Plaindrome");

}
void armstrong(int n){
    int r,sum=0,z;
    z=n;
    while(n>0){
        r=n%10;
        sum+=r*r*r;
        n/=10;
    }
    if(sum==z)
    printf("Armstrong no");
}
int main(){
    int n,ch;
    printf("Enter the no.\n");
    scanf("%d",&n);
    printf("ENTER your choise");
    scanf("%d",&ch);
    switch(ch){
        case 1: primeno(n);
        break;
        case 2:plaindrome(n);
        break;
        case 3:armstrong(n);
        break;
        case 4:krisnamurti(n);
        break;
    }
    getch();
    return 0;
}