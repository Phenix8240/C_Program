#include<stdio.h>
#include<conio.h>
void binarysearch(int a[],int n,int val){
    int mid,beg,end;  
    beg=1,end=n-1;
    while(beg<=end){
        mid=(beg+end)/2;
        if(a[mid]==val){
            printf("%d is found at %d position",val,mid);
            break;
        }
        else if(val<a[mid])
        end=mid-1;
        else
        beg=mid+1;
    }
}
int main(){
    int n;
    printf("Enter the no. of terms:");
    scanf("%d",&n);
    int a[n],i,val;
    for(i=0;i<n;i++){
     printf("Enter the element at %d position:",i);
     scanf("%d",&a[i]);
    }
    printf("Enter the you waqnt to search:");
    scanf("%d",&val);
    binarysearch(a,n,val);
 getch();
 return 0;
}
// int main(){
//     int n;
//     printf("Enter the no. of terms:");
//     scanf("%d",&n);
//     int a[n],i,beg,end,val,mid;
//     for(i=0;i<n;i++){
//         printf("Enter the element at %d position:",i);
//         scanf("%d",&a[i]);
//     }
//     printf("Enter the element you want to search:");
//     scanf("%d",&val);
//     beg=1,end=n-1;
//     while(beg<=end){
//         mid=(beg+end)/2;
//         if(a[mid]==val){
//             printf("%d is found at %d position",val,mid+1);
//             break;
//         }
//         else if(val<a[mid])
//         end=mid-1;
//         else
//         beg=mid+1;
//     }
//     getch();
//     return 0;
// }
