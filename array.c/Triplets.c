#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    printf("Enter the no. of terms:");
    scanf("%d",&n);
    int a[n],i,j,k,x,triplets=0;
    for(i=0;i<n;i++){
        printf("Enter the element at %d position:",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter the no.:");
    scanf("%d",&x);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            for(k=j+1;j<n;j++){
                if(a[i]+a[j]+a[k]==x){
                    triplets++;
                    printf("[(%d,%d,%d)]\n",a[i],a[j],a[k]);
                }
            }
        }
    }
    printf("%d\n",triplets);
    getch();
    return 0;
}

// int main(){
//     int n;
//     printf("Enter the no.");
//     scanf("%d",&n);
//     int a[n],i,odd=0,even=0;
//     for(i=0;i<n;i++){
//         printf("Enter the element at %d position:",i+1);
//         scanf("%d",&a[i]);
//     }
//     for(i=0;i<n;i++){
//         if(n%2==0){
//             a[i]*=2;
//         }
//         else{
//             a[i]+=10;
//         }
//     }
//     for(i=0;i<n;i++){
//         printf(" %d ",a[i]);
//     }
//     return 0;
// }

// int main(){
//         int n;
//     printf("Enter the no.");
//     scanf("%d",&n);
//     int a[n],i,odd=0,even=0,res;
//     for(i=0;i<n;i++){
//         printf("Enter the element at %d position:",i+1);
//         scanf("%d",&a[i]);
//     }
//   for(i=0;i<n;i++){
//     if(i%2==0){
//         even+=a[i];
//     }
//     else{
//         odd+=a[i];
//     }
//   }
//   res=even - odd;
//   printf("%d",res);
//   return 0;
// }

