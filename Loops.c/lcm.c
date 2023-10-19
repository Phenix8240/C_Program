#include<stdio.h>
#include<conio.h>
//lcm
// int main(){
//     int a,b,max;
//     printf("Enter two no.:");
//     scanf("%d %d",&a,&b);
//     max=(a>b)?a:b;
//     while(1){
//         if(max%a==0 && max%b==0){
//             printf("LCM of %d and %d is %d",a,b,max);
//             break;
//         }
//         max++;
//     }
//     return 0;
// }

//gcd
int main(){
    int a,b,x,i;
    printf("Enter two no.:");
    scanf("%d %d",&a,&b);
    for(i=1;i<=a && i<=b;i++){
        if(a%i==0 && b%i==0){
            x=i;
        }
    }
    printf("GCD of %d and %d is %d",a,b,x);
    return 0;
}