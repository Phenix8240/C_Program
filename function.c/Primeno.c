#include<stdio.h>
#include<conio.h>
#include<math.h>

// int prime_no(int n){
//     int i,count=0;
//     for(i=1;i<=n;i++){
//         if(n%i==0){
//             count++;
//         }
//     }
//         if(count==2)
//         return 1;
//         else
//         return 0;
//     }


// int main(){
//     int i,n;
//     printf("Enter the range:");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//      if(prime_no(i)==1){
//         printf(" %d ",i);
//      }
//     }
//     getch();
//     return 0;
// }
int main(){
    int n,i,x,sum,r;
    printf("Enter the range:");
    scanf("%d",&n);
    printf("Armstrong numbers are:\n");
    for(i=100;i<=n;i++){
        sum=0;
        x=i;
        while(x!=0){
            r=x%10;
            sum+=(r*r*r);
            x/=10;
        }
        if(sum==i){
            printf(" %d ",sum);
        }
    }
    getch();
    return 0;
}