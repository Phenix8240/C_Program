#include<stdio.h>


// int main(){
//     int a[]={1,2,3,4,5};
//     int *ptr,i;
//     ptr=&a[2];
//     *ptr=-1;
//     *(ptr+1)=0;
//     *(ptr-1)=1;
//     for(i=0;i<5;i++)
//     printf(" %d ",*(a+i));
//     return 0;
// }

int main(){
    int a[]={1,2,3,4,5};
    int *ptr1,*ptr2;
    ptr1=a;
    ptr2=ptr1+2;
    printf(" %d ",ptr2-ptr1);
}